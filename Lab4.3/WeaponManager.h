#pragma once
#include <iostream>
using namespace std;
class WeaponManager
{
public:
    string name;
    int damage;
    int weight;

    WeaponManager(string name, int damage, int weight);

    bool isHeavy();

    int sumWeights(WeaponManager* someWeapon);

    int sumWeights(int someWeight);
};