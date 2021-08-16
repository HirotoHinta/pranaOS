/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

// includes
#include <libweb/layout/BoxModelMetrics.h>

namespace Web::Layout {

PixelBox BoxModelMetrics::margin_box() const
{
    return {
        margin.top + border.top + padding.top,
        margin.right + border.right + padding.right,
        margin.bottom + border.bottom + padding.bottom,
        margin.left + border.left + padding.left,
    };
}

PixelBox BoxModelMetrics::padding_box() const
{
    return {
        padding.top,
        padding.right,
        padding.bottom,
        padding.left,
    };
}

PixelBox BoxModelMetrics::border_box() const
{
    return {
        border.top + padding.top,
        border.right + padding.right,
        border.bottom + padding.bottom,
        border.left + padding.left,
    };
}

}
