cmake_minimum_required (VERSION 3.8)

project ("sgi_demos" LANGUAGES C)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib)

if(MSVC)
	set(CMAKE_WARNING_FLAGS /W4)
else()
	set(CMAKE_WARNING_FLAGS -Wall -Wextra -Wpedantic)
endif()

add_compile_options(${CMAKE_WARNING_FLAGS})

add_subdirectory(${LIB_DIR})
add_subdirectory(${SRC_DIR})
