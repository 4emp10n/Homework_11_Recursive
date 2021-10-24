#pragma once

template<class T, class... Ts>
constexpr auto max(const T&a, const T&b, const Ts... ts)
{
    const auto m = a > b ? a : b;

    if constexpr (sizeof... (ts) > 0)
    {
        return max(m, ts...);
    }

    return m;
}