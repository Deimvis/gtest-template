#pragma once

template <typename T, typename U>
concept Addable = requires(T a, U b) {
    { a + b } -> std::convertible_to<T>;
};