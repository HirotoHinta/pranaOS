### pranaOS Coding Style

- coding style:

### Header:
- header should be like this

- wrong:
```c++
#ifndef YOUR_HEADER_H
#define YOUR_HEADER_H

#include <stdio.h>

class myClass {
public:
    void myvoidfunction()
    {
        printf("hello world");
    }
};

#endif
```

- right:
```c++
#pragma once 

#include <stdio.h>

class myClass {
public:
    void myvoidfunction()
    {
        printf("hello world");
    }
};
```

### namespace:

- right:
```c++
namespace myNamespace {
}
```

### calling namespace:

- wrong:
```c++

#include <iostream>

using namespace std;

int main()
{
    cout << "hello world";
    return 0;
}

```

- right:
```c++

#include <iostream>

int main()
{
    std::cout << "hello world";
    return 0;
}

```