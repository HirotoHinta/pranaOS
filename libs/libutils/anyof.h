/*
 * Copyright (c) 2021, Krisna Pranav
 * Copyright (c) 2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

// includes
#include <libutils/concepts.h>
#include <libutils/find.h>
#include <libutils/iterator.h>

namespace Utils {

template<typename TEndIterator, IteratorPairWith<TEndIterator> TIterator>
constexpr bool any_of(
    TIterator const& begin,
    TEndIterator const& end,
    auto const& predicate)
{
    return find_if(begin, end, predicate) != end;
}

template<IterableContainer Container>
constexpr bool any_of(Container&& container, auto const& predicate)
{
    return any_of(container.begin(), container.end(), predicate);
}

}

using Utils::any_of;
