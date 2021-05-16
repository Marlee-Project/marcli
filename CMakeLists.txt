cmake_minimum_required(VERSION 3.17)
project(marcli C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
set(MARCLI_SRC ${PROJECT_SOURCE_DIR}/src)
set(MARCLI_INCLUDE ${PROJECT_SOURCE_DIR}/include)

include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/include
)

add_executable(marcli marcli.c ${MARCLI_INCLUDE}/marcli.h ${MARCLI_SRC}/marcli_util.c ${MARCLI_INCLUDE}/marcli_util.h)
