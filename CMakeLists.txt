cmake_minimum_required(VERSION 3.30)
project(reservation)

set(CMAKE_CXX_STANDARD 17)

add_executable(reservation main.cpp
        jadwal/jadwal.cpp
        jadwal/jadwal.h
        reservasi/reservasi.cpp
        reservasi/reservasi.h)
