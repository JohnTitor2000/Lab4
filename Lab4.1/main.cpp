#include <iostream>
#include <Windows.h>
using namespace std;

class Weapon{
public: string name;
    int damage;
    int weight;

    Weapon(const string &name, int damage, int weight) : name(name), damage(damage), weight(weight) {}

    Weapon()
    {
        name = "smth";
        damage = 10;
        weight = 10;
    }
};

int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    Weapon weapon;
    cout << "Weapon = " << "{Name = " << weapon.name << ", Урон = " << weapon.damage << ", Вес = " << weapon.weight << "}" << endl;
    Weapon shotgun("Shotgun", 100, 2);
    cout << "Weapon = " << "{Name = " << shotgun.name << ", Урон = " << shotgun.damage << ", Вес = " << shotgun.weight << "}";
}
