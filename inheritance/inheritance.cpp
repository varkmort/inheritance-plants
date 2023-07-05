#include <iostream>

#include "AppleTree.hpp"



int main() {
    AppleTree tree("Green", "Large", "Apple Tree", 10);
    tree.printInfo();

    Harvest* apple = tree.harvestFruit();
    apple->printInfo();

    delete apple;

    return 0;
}


