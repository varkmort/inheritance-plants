#ifndef HARVESR_HPP
#define HARVESR_HPP

#include <string>
#include <iostream>

#include "ServiceMacro.h"

// Базовый класс Плоды
class Harvest {
public:
    Harvest(const std::string& name, const std::string& color, const std::string& size, double weight)
        : name_(name), color_(color), size_(size), weight_(weight) {}

    virtual ~Harvest() {}

    virtual void printInfo() const {
        std::cout << "Name: " << name_ << std::endl;
        std::cout << "Color: " << color_ << std::endl;
        std::cout << "Size: " << size_ << std::endl;
        std::cout << "Weight: " << weight_ << std::endl;
    }
private: 
    std::string name_; 
public: 
    std::string getName() const {
        return name_;
    };

    GENERATE_ACCESSOR_GET_FIELD(std::string, color_,    Color);
    GENERATE_ACCESSOR_GET_FIELD(std::string, size_,     Size);
    GENERATE_ACCESSOR_GET_FIELD(double,      weight_,   Weight);
};



#endif // !HARVESR_HPP
