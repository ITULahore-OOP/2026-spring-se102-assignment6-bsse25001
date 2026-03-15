#include "Guild.h"
#include "Hero.h"
#include "Warrior.h"
#include "MagicalEntity.h"
#include "Knight.h"
#include "Spellblade.h"

#include <iostream>
using namespace std;
int main()
{
    int choice = 0;
    string gName;
    cout << "Enter Guild name: "<< endl;  // enter guild name
    getline(cin, gName);
    Guild gld(gName);
    cout << "==============================="<< endl;
    Hero* myHeros [15]; // to track my heroes
    int heroCount = 0;
    do {
        // menu
        cout << "1. Print Guild Data\n" <<
                "2. Add a character (Hero/ Warrior/ Knight/ Spellblade) to the guild\n" <<
                "3. Display guild stats\n" <<
                "4. Calculate total guild power\n" <<
                "5. Exit" << endl;
        cout << "enter choice:" << endl;
        cin>> choice;
        cin.ignore();
        cout << "==============================="<< endl;

        switch(choice){
            case 1: {
                cout << gld; // print guild data
                break;
            }
            case 2: {
                // get basic character data
                string name;
                int health, power;
                cout << "Enter character's name: "<< endl;
                getline (cin, name);
                cout << "Enter character's health : "<< endl ;
                cin>> health;
                cout << "Enter character's base power: "<< endl;
                cin>> power;
                //Hero h (name, health, power);
                cout << "==============================="<< endl;
                 cout << "Select Hero type:" << endl;
                    cout << "1. Hero\n" 
                    << "2. Warrior\n" 
                    << "3. Knight\n"
                    << "4. Spellblade" << endl;
                    int subchoice;
                    cin>> subchoice;
                    int armRating, chargeBonus, manaPool, spellPwr;
                    
                    if (subchoice == 1){ // for hero
                         Hero* h = new Hero(name, health, power); // dma
                         myHeros[heroCount] = h; // store in tracking array
                         heroCount++;
                         gld += h; // add to guild roster
                         cout << "==============================="<< endl;
                    }

                    else if (subchoice == 2) { // for warrior
                        cout << "Enter armour rating of Warrior"<< endl;
                        cin>> armRating;
                        Warrior* w = new Warrior(name, health, power, armRating); // dma
                        myHeros[heroCount] = w; // store in tracking array
                        heroCount++;
                        gld += w; // add to guild roster
                        cout << "==============================="<< endl;
                    }
                    else if (subchoice == 3) { // for knight
                        cout << "Enter armour rating of Knight"<< endl;
                        cin>> armRating;
                        cout << "Enter the charge bonus of Knight: " << endl;
                        cin >> chargeBonus;
                        Knight* k = new Knight(name, health, power, armRating, chargeBonus); // dma
                        myHeros[heroCount] = k; // store in my tracking array
                        heroCount++;
                        gld += k; // add to guild roster
                        cout << "==============================="<< endl;
                    }
                    else if (subchoice == 4){ // for spellblade
                        cout << "Enter armour rating of Spellblade"<< endl;
                        cin>> armRating;
                        cout << "Enter mana pool level: "<< endl;
                        cin >> manaPool;
                        cout<< "Enter spell power level" << endl;
                        cin >> spellPwr;
                        Spellblade* s = new Spellblade(name, health, power, armRating, manaPool, spellPwr); // dma
                        myHeros[heroCount] = s; // store in tracking array
                        heroCount++;
                        gld += s; // add to guild roster
                        cout << "==============================="<< endl;
                    }
                    else {
                        cout << "Invalid choice! "<< endl;
                    }

                break;
            }
            case 3: {
                gld.displayGuildStats();
                cout << "==============================="<< endl;
                break;
            }
            case 4: {
                cout << "Total Guild Power: " << gld.calculateTotalGuildPower() << endl;
                cout << "==============================="<< endl;
                break;
            }
            case 5: {
                cout << "Exiting..."<< endl;
                cout << "==============================="<< endl;
                break;
            }
            default: {
                cout << "Invalid choice."<< endl;
                break;
            }
        }
    }
    while (choice != 5);

    for (int i = 0; i < heroCount; i++) { // memory deallocation in tracking array
    delete myHeros[i];
    myHeros[i] = nullptr;
    }

    return 0;
}