#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"

#include <iostream>
#include <string>
using namespace std;

class Spellblade: public Warrior, public MagicalEntity {
    public:
    Spellblade (string name, int health, int basePwr, int armRating, int mana, int spell);
    ~Spellblade();
    int calculateHybridDamage ();
};

#endif