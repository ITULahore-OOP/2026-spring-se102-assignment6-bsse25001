#include "Knight.h"

    Knight::Knight (string name, int h, int basePwr, int armRating, int charge): Warrior(name, h, basePwr, armRating) {
        chargeBonus = charge;
       // cout << "KNight constuctor"<< endl;
    }
    Knight::~Knight () {
       //  cout << "KNight constuctor"<< endl;
    }
    int Knight::getChargeBonus () { // getter
        return chargeBonus;
    }
    int Knight::calculateBurstDamage () {
        int burstDamage = basePower + chargeBonus; // calculating burst damage
        return burstDamage;
    }
    