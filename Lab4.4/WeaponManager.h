#pragma once
#include <iostream>
using namespace std;
class WeaponManager {
    friend class Characteristic;
public:
    string name;
    int damage;
    int weight;

    WeaponManager(string name, int damage, int weight);

    bool isHeavy();

    int sumWeights(WeaponManager* someWeapon);

    int sumWeights(int someWeight);

    const string &getName() const;

    int getDamage() const;

    int getWeight() const;

    void setDamage(int damage);
};