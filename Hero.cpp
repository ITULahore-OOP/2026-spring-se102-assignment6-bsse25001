#include "Hero.h"

    Hero::Hero(string name, int h, int basePwr) {
        heroName = name;
        health = h;
        basePower = basePwr;
      //  cout << "Hero constructor "<< endl;
    }
    Hero::~Hero() {
       // cout << "Hero Destructor "<< endl;
    }
    // getters
    string Hero::getName() const {
        return heroName;
    }
    int Hero::getHealth() const {
        return health;
    }
    int Hero::getPower() const {
        return basePower;
    }
    void Hero::takeDamage(int damage) { // calculate damage
        if (health - damage>= 0 ) {
        health = health - damage;
     }
    }
   // bool Hero::operator > (Hero other) {}
   // int Hero::operator + (Hero other) {}