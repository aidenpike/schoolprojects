#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int rollDie();
int rollAgain();

//Player One Vars
int dieOne[3] = {};
int x, totalRoll, player;
char choice;

//Player Two Vars
int dieTwo[3] = {};
int y, totalRollP2, playerTwo;
char choiceP2;

int main() {
    srand(int(time(0)));

//Player 1
    bool player2Run;
    
    cout << "--Player One's Turn--\n";
    
    for (x = 0; x < 2; x++){
        dieOne[x] = rollDie();
        cout << "Die " << x + 1 << ": " << dieOne[x] << endl;
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

    if (totalRoll == 12 || totalRoll > 12){
        cout << "Player two wins!" << endl;
        player2Run = false;
    }
    else
        player2Run = true;
    
//Player 2
    if (player2Run){
        cout << "--Player Two's Turn--\n";
        
        for (y = 0; y < 2; y++){
            dieTwo[y] = rollDie();
            cout << "Die " << y + 1 << ": " << dieTwo[y] << endl;
        }
        
        totalRollP2 = dieTwo[0] + dieTwo[1];
        
        cout << "Total: " << totalRollP2 << endl;
        
        if (dieTwo[0] + dieTwo[1] < 12){
            cout << "Would you like to roll again? [Y or N]: ";
            cin >> choice;
            choice = toupper(choice);
        }
        if (choice == 'Y'){
            dieTwo[2] = rollAgain();
            totalRollP2 = dieTwo[0] + dieTwo[1] + dieTwo[2];
            
            cout << "Die 3: " << dieTwo[2] << endl;
            cout << "Total: " << totalRollP2 << endl;
        }
        else
            cout << "Total: " << totalRollP2 << endl;
        
//Check who wins
        if (totalRoll > totalRollP2 || totalRollP2 > 12)
            cout << "Player one wins!" << endl;
        else if (totalRoll < totalRollP2)
            cout << "Player two wins!" << endl;
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
    return 0;
}
