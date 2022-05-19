#include <iostream>
#include <algorithm>

using namespace std;

class Country {
    public:
        Country();
        void getName(); //Assigns private name vars to names assigned from main to this function
        void growTerritories(int); //+1 Territory for the player if they have an army for it and enough money
        void upgradeTech(int); //+1 on Tech Rating for the player. Buff: Scientists reduce price by 100
        void upgradeArmy(int); //+1 Army for the player if they have enough money 
        void shrinkTerritories(char, char, int); //-1 Territory for the player if they have at least 2 territories. Can be sold to opponent
        int returnArmies(int); 
        int returnTerritories(int);
        int returnTech(int);
        double returnMoney(int);
        string returnName(int);
        void lostBattle(int);
        void winBattle(int, int);
        int returnScientists(int); //+1 Scientist per 2 Territories. Check each round
        void winType(int, string); //How did the player win?
        void deCheeser(int); //Stops from cheesing the game (1) and also resets stats (2)
    //private:
        int playerOneArmies, playerTwoArmies;
        int playerOneScientists, playerTwoScientists;
        double playerOneMoney, playerTwoMoney;
        int playerOneTerritories, playerTwoTerritories;
        int playerOneTechnology, playerTwoTechnology;
        string player1Name, player2Name;
};

//Implementation Section
Country::Country(){
    playerOneArmies = 10, playerTwoArmies = 10;
    playerOneScientists = 0, playerTwoScientists = 0; 
    playerOneMoney = 50000.0, playerTwoMoney = 50000.0;
    playerOneTerritories = 1, playerTwoTerritories = 1;
    playerOneTechnology = 1, playerTwoTechnology = 1; //x/10 Rating
    player1Name = "", player2Name = "";
}

int p1Money;
string playerOneName, playerTwoName;

void Country::getName(){
    cout << "Player one, enter your name: ";
    getline(cin, playerOneName);
    cout << "Player two, enter your name: ";
    getline(cin, playerTwoName);
    
    player1Name = playerOneName;
    player2Name = playerTwoName;
}

void Country::growTerritories(int player){
    if (player == 1){
        if (playerOneArmies > playerOneTerritories && playerOneMoney >= 10000){
            playerOneTerritories++;
            playerOneMoney = playerOneMoney - 10000;
        }
        else
            cout << "You cannot gain another territory!" << endl;
    }
    else if (player == 2){
        if (playerTwoArmies >= playerTwoTerritories && playerTwoMoney >= 10000){
            playerTwoTerritories++;
            playerTwoMoney = playerTwoMoney - 10000;
        }
        else
            cout << "You cannot gain another territory!" << endl;
    }
}

void Country::upgradeTech(int player){
    if (player == 1){
        if ((playerOneMoney) >= (5000 - (playerOneScientists * 100)) && playerOneTechnology < 10)
            playerOneTechnology++;
        else 
            cout << "You cannot upgrade your technology!" << endl;
    }
    else if (player == 2){
        if ((playerTwoMoney) >= (5000 - (playerTwoScientists * 100)) && playerTwoTechnology < 10)
            playerTwoTechnology++;
        else 
            cout << "You cannot upgrade your technology!" << endl;
    }
}

void Country::upgradeArmy(int player){
    if (player == 1){
        if (playerOneMoney >= 8000)
            playerOneArmies++;
        else
            cout << "You cannot gain another army!" << endl;
    }
    else if (player == 2){
        if (playerTwoMoney >= 8000)
            playerTwoArmies++;
        else
            cout << "You cannot gain another army!" << endl;
    }
}

void Country::shrinkTerritories(char sellChoice, char p2choice, int player){
    if (player == 1){
        if (playerOneTerritories > 1){
            cin.ignore();
            cout << "Would you like to sell your territory to " << playerTwoName << "? [Y or N]: ";
            cin >> sellChoice;
            sellChoice = toupper(sellChoice);

            if (sellChoice == 'Y'){
                cout << playerTwoName << ", do you oblige? You will pay them $10000. [Y or N]: ";
                cin >> p2choice;
                p2choice = toupper(p2choice);
                
                if (p2choice == 'Y'){
                    cout << "You have sold your territory to " << playerTwoName << "." << endl;
                    playerOneTerritories--;
                    playerOneMoney = playerOneMoney + 10000;
                    playerTwoMoney = playerTwoMoney - 10000;
                    playerTwoTerritories++;
                }
            }
            else if (sellChoice == 'N'){
                playerOneTerritories--;
                playerOneMoney = playerOneMoney + 10000;
            }
        }
        else
            cout << "You do not have enough territories to sell a territory!" << endl;
    }
    else if (player == 2){
        if (playerTwoTerritories > 1){
            cin.ignore();
            cout << "Would you like to sell your territory to " << playerOneName << "? [Y or N]: ";
            cin >> sellChoice;
            sellChoice = toupper(sellChoice);

            if (sellChoice == 'Y'){
                cout << playerOneName << ", do you oblige? You will pay them $10000. [Y or N]: ";
                cin >> p2choice;
                p2choice = toupper(p2choice);
                
                if (p2choice == 'Y'){
                    cout << "You have sold your territory to " << playerOneName << "." << endl;
                    playerTwoTerritories--;
                    playerTwoMoney = playerTwoMoney + 10000;
                    playerOneMoney = playerOneMoney - 10000;
                    playerOneTerritories++;
                }
            }
            else if (sellChoice == 'N'){
                playerOneTerritories--;
                playerOneMoney = playerOneMoney + 10000;
            }
        }
            else if (sellChoice == 'N'){
                playerTwoTerritories--;
                playerTwoMoney = playerTwoMoney + 10000;
            }
        }
        else
            cout << "You do not have enough territories to sell a territory!" << endl;
    }

int Country::returnArmies(int player){
    if (player == 1)
        return playerOneArmies;
    else if (player == 2)
        return playerTwoArmies;
}

int Country::returnTerritories(int player){
    if (player == 1)
        return playerOneTerritories;
    else if (player == 2)
        return playerTwoTerritories;
}

int Country::returnTech(int player){
    if (player == 1)
        return playerOneTechnology;
    else if (player == 2)
        return playerTwoTechnology;
}

double Country::returnMoney(int player){
   if (player == 1)
        return playerOneMoney;
    else if (player == 2)
        return playerTwoMoney; 
}

string Country::returnName(int player){
    if (player == 1)
        return playerOneName;
    else if (player == 2)
        return playerTwoName;
}

void Country::lostBattle(int player){
    srand(int(time(0)));
    
    if (player == 1){
        cout << playerOneName << " has lost this skirmish." << endl;
        playerOneArmies--;
        playerOneTerritories--;
        playerOneMoney = playerOneMoney - 500;
    }
    else if (player == 2){
        cout << playerTwoName << " has lost this skirmish." << endl;
        playerOneArmies--;
        playerTwoArmies--;
        playerTwoTerritories--;
        playerTwoMoney = playerTwoMoney - 500;
    }
}

void Country::winBattle(int player, int battleSuccessRate){
    srand(int(time(0)));
    battleSuccessRate = 10 + rand() % (100 + 10 - 1);
    
    if (player == 1){
        cout << playerOneName << " has won this skirmish!" << endl;

        if (battleSuccessRate < 50){
            cout << "Unfortunately, it was a tough battle, and " << playerOneName << " loses an army." << endl;
            playerOneArmies--;
        }
        else if (battleSuccessRate >= 50 && battleSuccessRate < 100)
            cout << playerOneName << "'s civilians give their praise." << endl;
        else {
            cout << "A glorious battle indeed! One of " << playerTwoName << "'s armies sides with you!" << endl;
            playerOneArmies++;
            playerTwoArmies--;
        }
        playerOneTerritories++;
        playerOneMoney = playerOneMoney + 500; 
    }
    else if (player == 2){
        cout << playerTwoName << " has won this skirmish!" << endl;

        if (battleSuccessRate < 50){
            cout << "Unfortunately, it was a tough battle, and " << playerTwoName << " loses an army." << endl;
            playerTwoArmies--;
        }
        else if (battleSuccessRate >= 50 && battleSuccessRate < 100)
            cout << playerTwoName << "'s civilians give their praise." << endl;
        else {
            cout << "A glorious battle indeed! One of " << playerOneName << "'s armies sides with you!" << endl;
            playerTwoArmies++;
            playerOneArmies--;
        }
        playerTwoTerritories++;
        playerTwoMoney = playerTwoMoney + 500; 
    }
}

int Country::returnScientists(int player){
    if (player == 1){
        switch (playerOneTerritories){
            case 1: 
                playerOneScientists = 0;
            break;
            
            case 2:
                playerOneScientists = 1;
            break;
    
            case 4:
                playerOneScientists = 2;
            break;
    
            case 6: 
                playerOneScientists = 3;
            break;
    
            case 8:
                playerOneScientists = 4;
            break;
            
            case 10:
                playerOneScientists = 5;
            break;   
        }

        return playerOneScientists;
    }
    else if (player == 2){
        switch (playerTwoTerritories){
            case 1: 
                playerTwoScientists = 0;
            break;
            
            case 2:
                playerTwoScientists = 1;
            break;
    
            case 4:
                playerTwoScientists = 2;
            break;
    
            case 6: 
                playerTwoScientists = 3;
            break;
    
            case 8:
                playerTwoScientists = 4;
            break;
            
            case 10:
                playerTwoScientists = 5;
            break;   
        }
        
        return playerTwoScientists;   
    }
}

void Country::winType(int player, string winType){
    if (player == 1){
        if (winType == "forfeit")
            cout << playerOneName << " has won via forfeit from " << playerTwoName << "." << endl;
        else if (winType == "conquer")
            cout << playerOneName << " has conquered " << playerTwoName << "." << endl;
        else if (winType == "elim")
            cout << playerOneName << " has eliminated " << playerTwoName << "." << endl;
        else if (winType == "full elim")
            cout << playerOneName << " has fully eliminated " << playerTwoName << ". Perfect score!" << endl;       
        else if (winType == "devastation")
            cout << playerOneName << " has devastated " << playerTwoName << "." << endl;
    }
    else if (player == 2){
        if (winType == "forfeit")
            cout << playerTwoName << " has won via forfeit from " << playerOneName << "." << endl;
        else if (winType == "conquer")
            cout << playerTwoName << " has conquered " << playerOneName << "." << endl;
        else if (winType == "elim")
            cout << playerTwoName << " has eliminated " << playerOneName << "." << endl;
        else if (winType == "full elim")
            cout << playerTwoName << " has fully eliminated " << playerOneName << ". Perfect score!" << endl;
        else if (winType == "devastation")
            cout << playerTwoName << " has devastated " << playerOneName << "." << endl;
    }
}

void Country::deCheeser(int option){   
    if (option == 1){
        if (playerOneTerritories > playerOneArmies)
            playerOneTerritories = playerOneArmies;
    
        if (playerTwoTerritories > playerOneArmies)
            playerTwoTerritories = playerOneArmies;    
    }
}
