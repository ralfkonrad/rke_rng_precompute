cmake_minimum_required(VERSION 3.22.0)

# For MSVC RUNTIME LIBRARY, need CMP0091=NEW and cmake 3.15+
cmake_policy(SET CMP0091 NEW)

project(rke_rng_precompute VERSION 0.0.1)

add_subdirectory(external)