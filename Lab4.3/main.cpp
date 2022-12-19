#include <iostream>
#include "WeaponManager.h"

int main() {
    WeaponManager fork("Fork", 4, 5);
    std::cout << "object fork - " << fork.name << std::endl;
    std::cout << "object isHeavy - " << fork.isHeavy() << std::endl;
}
