#ifndef APPLE_TREE_HPP
#define APPLE_TREE_HPP

#include <iostream>
#include <string>

#include "Plants.hpp"
#include "Apple.hpp"

// Пример конкретной реализации класса Растения - "Яблоня"
class AppleTree : public Plants {
private:
    int fruitCount; // Количество плодов на яблоне

public:
    AppleTree(const std::string& color, const std::string& size, const std::string& name, int fruitCount)
        : Plants(color, size, name), fruitCount(fruitCount) {}

    void printInfo() const override {
        Plants::printInfo();
        std::cout << "Fruit count: " << fruitCount << std::endl;
    }

    Harvest* harvestFruit() override {
        --fruitCount;
        return new Apple("Red", "Medium", 0.2); // Возвращение объекта Apple через фабричный метод
    }
};

#endif // !1

