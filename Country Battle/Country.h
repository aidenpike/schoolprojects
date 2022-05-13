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
        int playerOneArmy, playerTwoArmy;
        double playerOneMoney, playerTwoMoney;
        int playerOneTerritory, playerTwoTerritory;
        int playerOneTechnology, playerTwoTechnology;
        string playerOneName, playerTwoName;
}
