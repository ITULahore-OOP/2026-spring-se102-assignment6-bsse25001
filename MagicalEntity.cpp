#include "MagicalEntity.h"

    MagicalEntity::MagicalEntity (int mana, int spellPwr) {
        manaPool = mana;
        spellPower = spellPwr;
       // cout << "Magical entity constructor"<< endl;
    }
    MagicalEntity::~MagicalEntity() {
      //  cout << "Magical entity constructor"<< endl;
    }
    // getters
    int MagicalEntity::getMana () const  {
        return manaPool;
    }
    int MagicalEntity::getSpellPower () const {
        return spellPower;
    }