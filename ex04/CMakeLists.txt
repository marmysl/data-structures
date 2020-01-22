cmake_minimum_required(VERSION 3.5)
project(Ex6 CXX)

# require a C++11 compiler for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE search_tests.cpp search.hpp)

# create unittests
add_executable(search-tests catch.hpp ${SOURCE})

enable_testing()

# unit tests
add_test(unittest search-tests)

add_custom_target(submission COMMAND
    ${CMAKE_COMMAND} -E tar "cfv" "${CMAKE_CURRENT_BINARY_DIR}/submission.zip" --format=zip
       ${SOURCE}
       WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
     