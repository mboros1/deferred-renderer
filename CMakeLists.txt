cmake_minimum_required(VERSION 3.17)
project(OpenGLfromScratch)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-O0 -Wall -ggdb -D LINUX")


include_directories(include/ common/thirdparty/glm/ test/include/)

file(GLOB SRC src/*.cpp)
file(GLOB tests test/src/*.cpp)

add_executable(OpenGLfromScratch ${SRC} main.cpp)

add_executable(test ${tests} ${SRC})

target_link_libraries(OpenGLfromScratch SDL2 dl assimp freetype)
target_link_libraries(test SDL2 dl assimp)
