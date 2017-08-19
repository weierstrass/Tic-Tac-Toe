cmake_minimum_required(VERSION 2.6.4)

project(libTicTacToe)

# Look for all source files.
file(GLOB_RECURSE SRCS src/*.cpp src/*.h)

# Look for all header files.
file(GLOB_RECURSE HEADERS include/*.h)

add_library(libTicTacToe ${SRCS} ${HEADERS})

target_include_directories(libTicTacToe PUBLIC include)
