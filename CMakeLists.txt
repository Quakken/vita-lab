cmake_minimum_required(VERSION 3.20)

# Pull in Vita SDK toolchain
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  if(DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "toolchain file")
  else()
    message(FATAL_ERROR "Please define VITASDK to point to your SDK path!")
  endif()
endif()

project(vita_lab)

# Common utilities used across projects
add_subdirectory(common)

# All projects
add_subdirectory(hello_world)
