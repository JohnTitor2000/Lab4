//
// Created by User on 19.12.2022.
//

#include "Characteristic.h"
#include "WeaponManager.h"

Characteristic::Characteristic(int strength) : strength(strength) {}

Characteristic::int GetDamage(WeaponManager weaponManager) {
    return weaponManager.damage * this -> strength;
}
