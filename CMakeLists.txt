cmake_minimum_required(VERSION 3.28)
project(cultClasses)

set(CMAKE_CXX_STANDARD 17)

add_executable(cultClasses main.cpp
        Seat.cpp
        Seat.h
        User.cpp
        User.h
        BookingTicket.cpp
        BookingTicket.h
        Class.cpp
        Class.h
        Gym.cpp
        Gym.h)
