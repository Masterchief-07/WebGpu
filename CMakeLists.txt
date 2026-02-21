cmake_minimum_required(VERSION 3.31)

project(WEBGPU VERSION 0.1 LANGUAGES CXX C)

include(cmake/dependencies.cmake)

setDependencies()

add_subdirectory(chaps)