#pragma once

#include <iostream>
#include <map>

class Material {
private:
	//static std::map<Shader, const std::string> shaders;
	//static std::map<Texture, const std::string> textures;
        
public:
        Material(const std::string& name);
        Material(const Material&) = delete;
        Material(const Material&&);
};