#ifndef APPLE_HPP
#define APPLE_HPP

#include <string>

#include "Harvest.hpp"

// ������ ���������� ���������� ������ ����� - "������"
class Apple : public Harvest {
public:
    Apple(const std::string& color = "Red", const std::string& size = "Small", double weight = 0.1)
        : Harvest("Apple", color, size, weight) {}
};

#endif // !1
