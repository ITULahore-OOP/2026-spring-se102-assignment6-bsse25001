#ifndef GUILD_H
#define GUILD_H
#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;

class Guild {
    private:
    string guildName;
    Hero* roster[15];
    int memberCount;
    public:
    Guild(string name);
    ~Guild();
    string getGuildName ();
    int calculateTotalGuildPower();
    void displayGuildStats() ;
    // operator overloading
    void operator += (Hero* newHero) ;
    friend ostream& operator << (ostream& os,const Guild& g);
};

#endif