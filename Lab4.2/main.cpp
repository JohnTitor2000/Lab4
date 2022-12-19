#include <iostream>
#include <Windows.h>
using namespace std;

class Weapon{
public: string name;
    int damage;
    int weight;

    Weapon(const string &name, int damage, int weight) : name(name), damage(damage), weight(weight) {}

    Weapon() {
        name = "smth";
        damage = 10;
        weight = 10;
    }

   // ~Weapon() {
   //     cout << endl;
   //     cout << "Оружие с параметрами: name = " << this->name << ", damage = " << this->damage << ", weight = " << this->weight << " удалено!" << endl;
   // }

    bool isHeavy() {
        return this->weight <= 50;
    }

    int sumWeights(int someWeight) {
        return this->weight + someWeight;
    }

    int sumWeights(Weapon* someWeapon) {
        return this->weight + someWeapon->weight;
    }
};

int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    Weapon fork("Вилка", 1, 1);
    cout << "Weapon = " << "{Name = " << fork.name << ", Урон = " << fork.damage << ", Вес = " << fork.weight << "}" << endl;
    Weapon* shotgun = new Weapon("Shotgun", 100, 2);
    cout << "Weapon = " << "{Name = " << shotgun -> name << ", Урон = " << shotgun -> damage << ", Вес = " << shotgun -> weight << "}";
    delete shotgun;

    cout << endl;

    if (fork.isHeavy()) {
        cout << "Мы можем поднять это оружие" << endl;
    } else {
        cout << "Мы не можем поднять оружие" << endl;
    }

    cout << endl;

    Weapon knife("Кинжал", 30, 10);

    cout << "sum weitghs - " << knife.sumWeights(&fork) << endl;
    cout << "sum weitghs - " << knife.sumWeights(17) << endl;
}
