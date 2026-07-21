cmake_minimum_required(VERSION 4.2)
project(CS50x_2026 C)

set(CMAKE_C_STANDARD 11)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

add_executable(hello    "Week 1 - C/hello.c"
        "Week 1 - C/calculator.c")
add_executable(compare  "Week 1 - C/compare.c"
        "Week 1 - C/calculator.c")
add_executable(agree    "Week 1 - C/agree.c"
        "Week 1 - C/calculator.c")
add_executable(cat      "Week 1 - C/cat.c"
        "Week 1 - C/calculator.c")
add_executable(mario      "Week 1 - C/mario.c"
        "Week 1 - C/calculator.c")

target_link_libraries(hello   cs50)
target_link_libraries(compare cs50)
target_link_libraries(agree   cs50)
target_link_libraries(cat     cs50)
target_link_libraries(mario     cs50)
