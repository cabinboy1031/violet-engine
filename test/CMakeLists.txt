cmake_minimum_required(VERSION 3.16)
project(violet_GL_sandbox)

add_executable(test_exec
  Sandbox.cpp)

target_link_libraries(
  test_exec PRIVATE
  violetgl
  )

file (COPY assets DESTINATION ${CMAKE_BINARY_DIR})


add_executable(falling_sand
  FallingSand.cpp)

target_link_libraries(
  falling_sand PRIVATE
  violetgl
  )
