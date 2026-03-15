#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <string>
using namespace std;

class Hero {
    protected:
    string heroName;
    int health;
    int basePower;
    public:
    Hero(string name= "", int h= 0, int basePwr=0);
    ~Hero();
    string getName() const;
    int getHealth() const;
    int getPower()const ;
    void takeDamage(int damage);
    // operator overloading
    bool operator > (Hero other) {
        if (basePower > other.basePower) {
            return true;
        }
        else {
            return false;
        }
    }

    int operator + (Hero other) {
        return health + other.health;
    }
};
#endif