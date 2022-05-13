#include <iostream>

using namespace std;

class Country {
    public:
        Country();
        void getName(string, string);
        void growTerritories();
        void upgradeTech();
        void upgradeArmy();
        void shrinkTerritories();
        int returnArmies();
        int returnTerritories();
        int returnTech();
        double returnMoney();
        void lostBattle();
        void winBattle();
    private:
        int playerOneArmies, playerTwoArmies;
        double playerOneMoney, playerTwoMoney;
        int playerOneTerritories, playerTwoTerritories;
        int playerOneTechnology, playerTwoTechnology;
        string playerOneName, playerTwoName;
};

//Implementation Section
Country::Country(){
    playerOneArmies = 10, playerTwoArmies = 10;
    playerOneMoney = 100000, playerTwoMoney = 100000;
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
