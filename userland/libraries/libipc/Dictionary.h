/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
*/

#pragma once

// includes
#include <base/HashMap.h>
#include <base/String.h>

namespace IPC {

class Dictionary {
public:
    Dictionary() { }

    Dictionary(const HashMap<String, String>& initial_entries)
        : m_entries(initial_entries)
    {
    }

    bool is_empty() const { return m_entries.is_empty(); }
    size_t size() const { return m_entries.size(); }

    void add(String key, String value)
    {
        m_entries.set(move(key), move(value));
    }

    template<typename Callback>
    void for_each_entry(Callback callback) const
    {
        for (auto& it : m_entries) {
            callback(it.key, it.value);
        }
    }

    const HashMap<String, String>& entries() const { return m_entries; }

private:
    HashMap<String, String> m_entries;
};

}
