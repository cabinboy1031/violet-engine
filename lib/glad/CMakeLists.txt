cmake_minimum_required(VERSION 3.16)
project(violet_glad_library)

add_library(glad4
  src/glad.c)

include_directories(include/)
