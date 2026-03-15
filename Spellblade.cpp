#include "Spellblade.h"

    Spellblade::Spellblade (string name, int h, int basePwr, int armRating, int mana, int spell): Warrior(name,h,basePwr, armRating ) {
        manaPool = mana;
        spellPower = spell;
       // cout << "Spellblade constructor\n";
    }
    Spellblade::~Spellblade() {
       //   cout << "Spellblade destructor\n";
    }
    int Spellblade::calculateHybridDamage () {
        int hybridDamage = basePower + spellPower; // calculating hybrid damage due to base and spell power
        return hybridDamage;
    }