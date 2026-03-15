#include "Guild.h"

    Guild::Guild(string name) {
        guildName = name;
        memberCount = 0;
       
    }
    Guild::~Guild() {
       // cout << "Guild constructor "<< endl;
       /*
       for (int i =0; i < memberCount; i++){
        delete roster[i];
       }
        */
        cout << "The guild "<< guildName << " has been disbanded!\n";
        
    }
    int Guild::calculateTotalGuildPower() {
        int totalGuildPower = 0;
        for (int i =0; i < memberCount; i++){
            totalGuildPower += roster[i]->getPower(); // calculate total guild power
        }
        return totalGuildPower;
    }
    void Guild::displayGuildStats() { // print guild statistics
        cout << "Guild Name: " << guildName << endl;
        cout << "Total Members: " << memberCount << "/15" << endl;
        cout << "Total Guild Power: "<< calculateTotalGuildPower() << endl;
       // cout << "=============================="<< endl;
        for (int i =0; i < memberCount; i++) {
        cout << "Hero no "<< i+1 << " : " << endl;
        cout << i+1 <<". Name: " << roster[i]->getName() << endl;
        cout << i+1 <<". Base Power: " << roster[i]->getPower() << endl;
        cout << i+1 <<". Health: "<< roster[i]->getHealth() << endl;
       // cout << "=============================="<< endl;
        }
    }

    string Guild::getGuildName (){
        return guildName;
    }

  void Guild::operator += (Hero* newHero) {
    if (memberCount < 15) { // check
        roster[memberCount]= newHero; // adding new hero
        memberCount++;
    }
    else {
        cout << "Guild is at full capacity!"<< endl;
    }
  }
  
   
 ostream& operator<<(ostream& os, const Guild& g) {
    os << "=== Guild: " << g.guildName << " ===" << endl; // printing guild data
    os << "Members: " << g.memberCount << endl;
    for (int i = 0; i < g.memberCount; i++) {
     os << "- " << g.roster[i]->getName() 
       << " (Power: " << g.roster[i]->getPower() << ")" << endl;
}   
    return os;
}
    
        