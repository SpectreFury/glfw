add_executable(triangle src/main.cpp src/glad.c)

target_include_directories(triangle PRIVATE ${PROJECT_SOURCE_DIR}/Dependencies/include)
target_link_directories(triangle PRIVATE ${PROJECT_SOURCE_DIR}/Dependencies/lib)
target_link_libraries(triangle glfw3)

