add_executable(coordinates 
    src/main.cpp 
    src/glad.c
    src/imgui/imgui.cpp
    src/imgui/imgui_draw.cpp
    src/imgui/imgui_impl_glfw.cpp
    src/imgui/imgui_impl_opengl3.cpp
    src/imgui/imgui_widgets.cpp
    src/imgui/imgui_tables.cpp
    )

target_include_directories(coordinates PRIVATE ${PROJECT_SOURCE_DIR}/Dependencies/include)
target_link_directories(coordinates PRIVATE ${PROJECT_SOURCE_DIR}/Dependencies/lib)
target_link_libraries(coordinates glfw3)