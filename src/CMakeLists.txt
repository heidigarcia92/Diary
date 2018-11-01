cmake_minimum_required(VERSION 3.12)
project(Diary)

set(CMAKE_CXX_STANDARD 17)

add_executable(Diary main.cpp Board.cpp Board.hpp Administrator.cpp Administrator.hpp ActivityList.cpp ActivityList.hpp Activity.cpp Activity.hpp Date.cpp Date.hpp SubActivity.cpp SubActivity.hpp SubActivityList.cpp SubActivityList.hpp DateException.cpp DateException.hpp)