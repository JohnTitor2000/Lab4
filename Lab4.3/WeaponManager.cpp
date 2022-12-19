#include "WeaponManager.h"

WeaponManager::WeaponManager(string name, int damage, int weight) :
        name(name), damage(damage), weight(weight) {}

bool WeaponManager::isHeavy() {
    if (this->weight <= 7) {
        return true;
    } else {
        return false;
    }
}

int WeaponManager::sumWeights(WeaponManager* someWeapon) {
    return this->weight + someWeapon->weight;
}

int WeaponManager::sumWeights(int someWeight) {
    return this->weight + someWeight;
}