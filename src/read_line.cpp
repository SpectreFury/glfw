#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main()
{
    std::ifstream in("E:\\Programming\\glfw\\src\\shaders\\default.vert", std::ios::binary);
    if (in)
    {
        std::string contents;
        in.seekg(0, std::ios::end);
        contents.resize(in.tellg());
        in.seekg(0, std::ios::beg);
        in.read(&contents[0], contents.size());
        in.close();
    }
}