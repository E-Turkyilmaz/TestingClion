cmake_minimum_required(VERSION 3.14)
project(TestingCLion C)

set(CMAKE_C_STANDARD 99)

add_executable(TestingCLion main.c definitions.h printTable.c pullCard.c pickPosition.c globals.h)