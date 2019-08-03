cmake_minimum_required(VERSION 3.13.4)
project (pointers)

#Bring the headers, such as Pointer.hpp into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cc)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cc")

add_executable(testPointer ${SOURCES})
