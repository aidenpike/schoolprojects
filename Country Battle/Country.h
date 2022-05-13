#include <iostream>

using namespace std;

class Country {
    public:
        Country();
        void getName(string);
        void growTerritories();
        void upgradeTech(int);
        void upgradeArmy(int);
        void shrinkTerritories(int);
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
