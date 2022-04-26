#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int rollDie();
int rollAgain();
string winner();

//Player One Vars
int dieOne[3] = {};
int x, totalRoll, player;
char choice;

int main() {

    
    srand(int(time(0)));

    for (x = 0; x < 2; x++){
        dieOne[x] = rollDie();
        cout << "Dice " << x + 1 << ": " << dieOne[x] << endl;
    }
    
    totalRoll = dieOne[0] + dieOne[1];
    
    cout << "Total: " << totalRoll << endl;
    
    if (dieOne[0] + dieOne[1] < 12){
        cout << "Would you like to roll again? [Y or N]: ";
        cin >> choice;
        choice = toupper(choice);
    }
    if (choice == 'Y'){
        dieOne[2] = rollAgain();
        totalRoll = dieOne[0] + dieOne[1] + dieOne[2];
        
        cout << "Die 3: " << dieOne[2] << endl;
        cout << "Total: " << totalRoll << endl;
    }
    else
        cout << "Total: " << totalRoll << endl;
    
    if (totalRoll == 12){
        cout << "You win!\n";
    }
    else if (totalRoll > 0){
        cout << "Close. You still win.\n";
    }
    else if (totalRoll < 0){
        cout << "You lose!\n";
    }
      
}

int rollDie(){
    return 1 + rand()% (6 - 1 + 1);
}

int rollAgain(){
    if (choice == 'Y')
        return 1 + rand()% (6 - 1 + 1);    
    else if (choice == 'N')
        return 0;
}
