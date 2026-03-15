#include "Warrior.h"

    Warrior::Warrior(string name, int h, int basep, int armRating): Hero(name,h, basep) {
        armorRating = armRating;
       // cout << "Warrior constructor "<< endl;
    }
    Warrior::~Warrior() {
       // cout << "Warrior destructor "<< endl;
    }
    int Warrior::getArmor() {
        return armorRating;
    }
    int Warrior::calculateEffectiveHealth () {
        int effectiveHealth = health + (armorRating * 2); // claculate effective health 
        return effectiveHealth;
    }