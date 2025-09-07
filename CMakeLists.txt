cmake_minimum_required(VERSION 3.15)
project(Project)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS_RELEASE “-O2”)


add_executable(test test/test.cpp)
add_executable(HelloWorld HelloWorld.cpp)


add_executable(251 questions/251.cpp)
add_executable(252 questions/252.cpp)
add_executable(253 questions/253.cpp)
add_executable(254 questions/254.cpp)
add_executable(255 questions/255.cpp)
add_executable(256 questions/256.cpp)
add_executable(257 questions/257.cpp)
add_executable(258 questions/258.cpp)
add_executable(259 questions/259.cpp)
add_executable(chemicaltest scripts/chemicaltest.cpp)