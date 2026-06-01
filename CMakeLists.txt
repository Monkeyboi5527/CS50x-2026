cmake_minimum_required(VERSION 4.2)
project(CS50x_2026 C)

set(CMAKE_C_STANDARD 11)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

add_executable(CS50x_2026
        "Week 1 - C/hello.c")

target_link_libraries(CS50x_2026 cs50)