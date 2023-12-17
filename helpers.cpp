#include <iostream>
#include <utility>

#include "helpers.hpp"

void hello_world(bool enable) {
    if (enable) {
        std::cout << "Hello, World!" << std::endl;
    } else {
        throw std::runtime_error("hello_world is not enabled");
    }
}

