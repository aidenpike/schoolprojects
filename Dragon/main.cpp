#include <iostream>
#include <algorithm>
#include "Dragon.h"

using namespace std;

int main() {
    Dragon dragonObj;

    string dragonName;
    int dragonWeight;
    int choice = 0;

    dragonObj.assignInfo();
    
    while (choice < 5){
        cout << "What do you want to do with " << dragonObj.returnName() << "?" << endl
             << "\t1. Breath Fire"      << endl
             << "\t2. Fly"              << endl
             << "\t3. Kill"             << endl
             << "\t4. Summon Lightning" << endl 
             << "\t5. Exit"             << endl;
        cin >> choice;

        switch (choice){
            case 1:
                dragonObj.breathFire();
            break;

            case 2:
                dragonObj.fly();
            break;

            case 3:
                dragonObj.kill();
            break;

            case 4: 
                dragonObj.summonLightning();
            break;
        }
        if (dragonObj.returnWeight() == 0)
            choice = 5;
        
        cout << dragonObj.returnName() << " now weighs " << dragonObj.returnWeight() << " pounds." << endl;
    }
    if (dragonObj.returnWeight() == 0)
        cout << "You killed " << dragonObj.returnName() << "! How could you?" << endl;
    else
        cout << dragonObj.returnName() << " will be in good hands." << endl;
}
