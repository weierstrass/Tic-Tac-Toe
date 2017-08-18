cmake_minimum_required(VERSION 3.2)

# The project name.
project (TicTacToe)

# The version number.
set (TicTacToe_VERSION_MAJOR 1)
set (TicTacToe_VERSION_MINOR 0)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")


# Add the subdirectories containing cpp files.
add_subdirectory(libTicTacToe)
add_subdirectory(test)

set(SRCS main.cpp)

# Add the executable.
add_executable(TicTacToe ${SRCS})

# Add the libraries.
target_link_libraries(TicTacToe libTicTacToe)
