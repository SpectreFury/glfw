cmake_minimum_required(VERSION 3.10)
project(glfw)

add_executable(example_exe
 src/main.cpp 
 src/glad.c 
 src/shader.cpp 
 src/shader.h
 )

target_include_directories(example_exe PRIVATE ./Dependencies/include)
target_link_directories(example_exe PRIVATE ./Dependencies/lib)

target_link_libraries(example_exe GLFW/glfw3 opengl32.lib user32.lib gdi32.lib shell32.lib)
