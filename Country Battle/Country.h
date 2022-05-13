#include <iostream>

using namespace std;

class Country {
    public:
        Country();
        void getName(string, string); //Assigns private name vars to names assigned from main to this function
        void growTerritories(); //+1 Territory for the player if they have an army for it and enough money
        void upgradeTech(); //+1 on Tech Rating for the player. Buff: Scientists reduce price by 100
        void upgradeArmy(); //+1 Army for the player if they have enough money 
        void shrinkTerritories(char); //-1 Territory for the player if they have at least 2 territories. Can be sold to opponent
        int returnArmies(); 
        int returnTerritories();
        int returnTech();
        double returnMoney();
        string returnName();
        void lostBattle();
        void winBattle(); 
        void addScientist(); //+1 Scientist per 2 Territories. Check each round 
        void winType(); //How did the player win?
    private:
        int playerOneArmies, playerTwoArmies;
        int playerOneScientists, playerTwoScientists;
        double playerOneMoney, playerTwoMoney;
        int playerOneTerritories, playerTwoTerritories;
        int playerOneTechnology, playerTwoTechnology;
        string playerOneName, playerTwoName;
};

//Implementation Section
Country::Country(){
    playerOneArmies = 10, playerTwoArmies = 10;
    playerOneScientists = 2, playerTwoScientists = 2; 
    playerOneMoney = 100000.0, playerTwoMoney = 100000.0;
    playerOneTerritories = 5, playerTwoTerritories = 5;
    playerOneTechnology = 1, playerTwoTechnology = 1; //x/10 Rating
    playerOneName = "", playerTwoName = "";
}

int player; //Defines which player is currently doing an action

void Country::getName(string player1Name, string player2Name){
    playerOneName = player1Name;
    playerTwoName = player2Name;
}

void Country::growTerritories(){
    if (player == 1){
        if (playerOneArmies >= playerOneTerritories && playerOneMoney >= 10000){
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

void Country::upgradeTech(){
    if (player == 1){
        if ((playerOneMoney) >= (5000 - (playerOneScientists * 100)) && playerOneTechnology < 10)
            playerOneTechnology++;
        else 
            cout << "You cannot upgrade your technology!";
    }
    else if (player == 2){
        if ((playerTwoMoney) >= (5000 - (playerTwoScientists * 100)) && playerTwoTechnology < 10)
            playerTwoTechnology++;
        else 
            cout << "You cannot upgrade your technology!";
    }
}

void Country::upgradeArmy(){
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

void Country::shrinkTerritories(char sellChoice){
    if (player == 1){
        if (playerOneTerritories > 1){
            cout << "Would you like to sell your territory to " << playerTwoName << "? [Y or N]: ";
            cin >> sellChoice;
            sellChoice = toupper(sellChoice);

            if (sellChoice == 'Y'){
                cout << "You have sold your territory to " << playerTwoName << "." << endl;
                playerOneTerritories--;
                playerOneMoney = playerOneMoney + 10000;
                playerTwoTerritories++;
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
            cout << "Would you like to sell your territory to " << playerOneName << "? [Y or N]: ";
            cin >> sellChoice;
            sellChoice = toupper(sellChoice);

            if (sellChoice == 'Y'){
                cout << "You have sold your territory to " << playerOneName << "." << endl;
                playerTwoTerritories--;
                playerTwoMoney = playerTwoMoney + 10000;
                playerOneTerritories++;
            }
            else if (sellChoice == 'N'){
                playerTwoTerritories--;
                playerTwoMoney = playerTwoMoney + 10000;
            }
        }
        else
            cout << "You do not have enough territories to sell a territory!" << endl;
    }
}

int Country::returnArmies(){
    if (player == 1)
        return playerOneArmies;
    else if (player == 2)
        return playerTwoArmies;
}

int Country::returnTerritories(){
    if (player == 1)
        return playerOneTerritories;
    else if (player == 2)
        return playerTwoTerritories;
}

int Country::returnTech(){
    if (player == 1)
        return playerOneTechnology;
    else if (player == 2)
        return playerTwoTechnology;
}

double Country::returnMoney(){
   if (player == 1)
        return playerOneMoney;
    else if (player == 2)
        return playerTwoMoney; 
}

string Country::returnName(){
    if (player == 1)
        return playerOneName;
    else if (player == 2)
        return playerTwoName;
}
