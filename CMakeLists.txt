cmake_minimum_required(VERSION 3.19)
project(WaspCoin)

set(CMAKE_CXX_STANDARD 14)

add_executable(WaspCoin main.cpp Block.h Block.cpp sha256.h sha256.cpp Blockchain.cpp Blockchain.h)