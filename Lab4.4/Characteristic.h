//
// Created by User on 19.12.2022.
//

#ifndef LAB4_4_CHARACTERISTIC_H

#define LAB4_4_CHARACTERISTIC_H


class WeaponManager;

class Characteristic {

    friend class WeaponManager;

public:
    int strength;

    int GetDamage(WeaponManager weaponManager);

    Characteristic(int strength);
};


#endif //LAB4_4_CHARACTERISTIC_H
