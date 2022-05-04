#include <iostream>
#include <algorithm>
#include "dragon.h"

using namespace std;

int main() {
    Dragon dragonObj;

    string dragonName;
    int dragonWeight;
    int choice;
    
    while (choice < 5){
        dragonObj.assignInfo(dragonName, dragonWeight);
    
        cout << "What do you want to do with " << dragonName << "?" << endl
             << "\t1. Breath Fire"      << endl
             << "\t2. Fly"              << endl
             << "\t3. Kill"             << endl
             << "\t4. Summon Lightning" << endl 
             << "\t5. Exit"             << endl;
        cin >> choice;


        cout << dragonName << " now weighs " << dragonObj.returnWeight() << " pounds.";
    }
    cout << "Goodbye!";
}
