.PHONY: setup image qemu
.EXPORT_ALL_VARIABLES:

setup:
	curl https://sh.rustup.rs -sSf | sh
	rustup install nightly
	rustup default nightly
	rustup component add rust-src
	rustup component add llvm-tools-preview
	cargo install bootimage

output = video
keyboard = qwerty
nic = rtl8139

export PRANAOS_KEYBOARD = $(keyboard)

user-nasm:
	basename -s .s dsk/src/bin/*.s | xargs -I {} \
		nasm dsk/src/bin/{}.s -o dsk/bin/{}
user-rust:
	basename -s .rs src/bin/*.rs | xargs -I {} \
		touch dsk/bin/{}
	basename -s .rs src/bin/*.rs | xargs -I {} \
		cargo rustc --release --bin {} -- \
			-C linker-flavor=ld \
			-C link-args="-Ttext=200 -Trodata=2000" \
			-C relocation-model=static
	basename -s .rs src/bin/*.rs | xargs -I {} \
		cp target/x86_64-pranaos/release/{} dsk/bin/{}

bin = target/x86_64-pranaos/release/bootimage-pranaos.bin
img = disk.img

$(img):
	qemu-img create $(img) 32M

image: $(img)
	touch src/lib.rs
	env | grep PRANAOS
	cargo bootimage --no-default-features --features $(output),$(nic) --release
	dd conv=notrunc if=$(bin) of=$(img)

opts = -m 32 -cpu max -nic model=$(nic) -hda $(img) -soundhw pcspk
ifeq ($(output),serial)
	opts += -display none -serial stdio
endif

qemu:
	qemu-system-x86_64 $(opts)

test:
	cargo test --release --lib --no-default-features --features serial,$(nic) -- \
		-m 32 -display none -serial stdio -device isa-debug-exit,iobase=0xf4,iosize=0x04

clean:
	cargo clean