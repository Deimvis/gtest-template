#pragma once

#include <utility>
#include "addable.hpp"

void hello_world(bool enable);

template <typename T, typename U>
auto sum(T&& a, U&& b) {
    return std::forward<T>(a) + std::forward<U>(b);
}

template <typename T, typename U>
requires Addable<T, U>
auto sum2(T&& a, U&& b) {
    return std::forward<T>(a) + std::forward<U>(b);
}
