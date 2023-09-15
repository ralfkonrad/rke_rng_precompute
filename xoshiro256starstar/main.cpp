//
// Created by ralf.eckel on 15.09.2023.
//

#include <fmt/core.h>

extern "C" {
#include "xoshiro256starstar.c"
};

int main() {
  fmt::print("Hello world!");
}