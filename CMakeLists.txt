cmake_minimum_required(VERSION 3.22.0)

# For MSVC RUNTIME LIBRARY, need CMP0091=NEW and cmake 3.15+
cmake_policy(SET CMP0091 NEW)

project(rke_rng_precompute VERSION 0.0.1)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(external SYSTEM)

# set the default warning level
if (MSVC)
    # warning level 4
    add_compile_options(-W4)
else ()
    # lots of warnings
    add_compile_options(-Wall -Wextra -Wpedantic)
endif ()

add_subdirectory(xoshiro256starstar)