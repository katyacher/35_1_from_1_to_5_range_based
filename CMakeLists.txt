cmake_minimum_required(VERSION 3.8.0)
project(35_1_from_1_to_5_range_based VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(35_1_from_1_to_5_range_based main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
