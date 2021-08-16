/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
*/

#include <base/String.h>
#include <libgfx/Point.h>
#include <libgfx/Rect.h>
#include <libipc/Decoder.h>
#include <libipc/Encoder.h>

namespace Gfx {

template<typename T>
void Point<T>::constrain(Rect<T> const& rect)
{
    m_x = AK::clamp<T>(x(), rect.left(), rect.right());
    m_y = AK::clamp<T>(y(), rect.top(), rect.bottom());
}

template<>
String IntPoint::to_string() const
{
    return String::formatted("[{},{}]", x(), y());
}

template<>
String FloatPoint::to_string() const
{
    return String::formatted("[{},{}]", x(), y());
}

}

namespace IPC {

bool encode(Encoder& encoder, Gfx::IntPoint const& point)
{
    encoder << point.x() << point.y();
    return true;
}

bool decode(Decoder& decoder, Gfx::IntPoint& point)
{
    int x = 0;
    int y = 0;
    if (!decoder.decode(x))
        return false;
    if (!decoder.decode(y))
        return false;
    point = { x, y };
    return true;
}

}

template class Gfx::Point<int>;
template class Gfx::Point<float>;
