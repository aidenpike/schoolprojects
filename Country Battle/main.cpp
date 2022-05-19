#include <iostream>
#include <algorithm>
#include "Country.h"

using namespace std;

int main() {
    Country playerOne;
    Country playerTwo;
    Country misc;
    char playAgain = 'Y';
    int playerChoice;
    bool hasWon = false;

    //Title Screen
        cout << "\x1B[31mWWWWWWWW                           WWWWWWWW                                   !!! \n" <<
                        "W::::::W                           W::::::W                                  !!:!!\n" << 
                        "W::::::W                           W::::::W                                  !:::!\n" <<
                        "W::::::W                           W::::::W                                  !:::!\n" << 
                        " W:::::W           WWWWW           W:::::Waaaaaaaaaaaaa  rrrrr   rrrrrrrrr   !:::!\n" << 
                        "  W:::::W         W:::::W         W:::::W a::::::::::::a r::::rrr:::::::::r  !:::!\n" <<
                        "   W:::::W       W:::::::W       W:::::W  aaaaaaaaa:::::ar:::::::::::::::::r !:::!\n" << 
                        "    W:::::W     W:::::::::W     W:::::W            a::::arr::::::rrrrr::::::r!:::!\n" <<
                        "     W:::::W   W:::::W:::::W   W:::::W      aaaaaaa:::::a r:::::r     r:::::r!:::!\n" <<
                        "      W:::::W W:::::W W:::::W W:::::W     aa::::::::::::a r:::::r     rrrrrrr!:::!\n" << 
                        "       W:::::W:::::W   W:::::W:::::W     a::::aaaa::::::a r:::::r            !!:!!\n" <<
                        "        W:::::::::W     W:::::::::W     a::::a    a:::::a r:::::r             !!! \n" <<
                        "         W:::::::W       W:::::::W      a::::a    a:::::a r:::::r                 \n" << 
                        "          W:::::W         W:::::W       a:::::aaaa::::::a r:::::r             !!! \n" << 
                        "           W:::W           W:::W         a::::::::::aa:::ar:::::r            !!:!!\n" <<
                        "            WWW             WWW           aaaaaaaaaa  aaaarrrrrrr             !!!\033[0m\n" << endl;
    
cout << "Press enter to continue. ";                                    
cin.ignore();
misc.getName();

cout << playerOne.returnName(1) << " you have " << playerOne.returnArmies(1) << " Armies, " << playerOne.returnTerritories(1) << " Territories, Technology Level " << playerOne.returnTech(1) << "/10, and $" << playerOne.returnMoney(1) << endl;
    cout << playerTwo.returnName(2) << " you now " << playerTwo.returnArmies(2) << " Armies, " << playerTwo.returnTerritories(2) << " Territories, Technology Level " << playerTwo.returnTech(2) << "/10, and $" << playerTwo.returnMoney(2) << endl;
    
    do {
        //Player 1
        //Conquer
        if (playerOne.returnTerritories(1) <= 0){
            playerTwo.winType(2, "conquer");
            hasWon = false;
            return 0;
        }
        //Elimination
        else if (playerOne.returnArmies(1) <= 0 && playerOne.returnTerritories(1) <= 0){
            playerTwo.winType(2, "elim");
            hasWon = false;
            return 0;
        }
        //Full Elimination
        else if (playerOne.returnArmies(1) <= 0 && playerOne.returnTerritories(1) <= 0 && playerOne.returnMoney(1) <= 0){
            playerTwo.winType(2, "full elim");
            hasWon = false;
            return 0;
        }
        //Devastation
        else if (playerOne.returnMoney(1) <= 0){
            playerTwo.winType(2, "devastation");
            hasWon = false;
            return 0;
        }
        
        cout << playerOne.returnName(1) << ", it is your turn. What do you wish to do?" << endl <<
                                           "\t1. Grow Territories ($10000 [Requires a spare army to control])\n" <<
                                           "\t2. Shrink Territories (Get back $10000 [Can sell to " << playerTwo.returnName(2) << "])\n" << 
                                           "\t3. Upgrade Technology ($" << 5000 - (playerOne.returnScientists(1) * 100) << " [Original Price: $5000])\n" <<
                                           "\t4. Upgrade Army ($8000)\n" <<
                                           "\t5. Attack\n" <<
                                           "\t6. Pass\n" <<
                                           "\t7. Forfeit\n";
        cin >> playerChoice;
        
        switch (playerChoice){
            case 1:
                playerOne.growTerritories(1);
            break;
            
            case 2:
                playerOne.shrinkTerritories(' ', ' ', 1);
            break;

            case 3:
                playerOne.upgradeTech(1);
            break;

            case 4:
                playerOne.upgradeArmy(1);
            break;

            case 5:
                if (playerOne.returnArmies(1) > playerTwo.returnArmies(2)){
                    playerOne.winBattle(1, 0);
                    playerTwo.lostBattle(2);
                }
                else if (playerOne.returnArmies(1) == playerTwo.returnArmies(2)){
                    if (playerOne.returnTech(1) > playerTwo.returnTech(2)){
                        playerOne.winBattle(1, 0);
                        playerTwo.lostBattle(2);
                    }
                    else if (playerOne.returnTech(1) == playerTwo.returnTech(2)){
                        srand(int(time(0)));

                        int i = 1 + rand() % (2 + 1 - 1);

                        if (i == 1){
                            playerOne.winBattle(1, 0);
                            playerTwo.lostBattle(2);
                        }
                        else if (i == 2){
                            playerTwo.winBattle(2, 0);
                            playerOne.lostBattle(1);        
                        }
                    }
                }
                else {
                    playerTwo.winBattle(2, 0);
                    playerOne.lostBattle(1);
                }
            break;

            case 6:
                cout << playerOne.returnName(1) << " has decided to pass this round." << endl;
            break;

            case 7:
                playerTwo.winType(2, "forfeit");
                hasWon = true;
                return 0;
            break;

            default:
            break;
        } 
        
        cout << playerOne.returnName(1) << " you now have " << playerOne.returnArmies(1) << " Armies, " << playerOne.returnTerritories(1) << " Territories, Technology Level " << playerOne.returnTech(1) << "/10, " << playerOne.returnScientists(1) << "/5 scientists, and $" << playerOne.returnMoney(1) << endl;
        playerOne.deCheeser(1);

    //Player 2
    //Conquer
        if (playerOne.returnTerritories(1) <= 0){
            playerTwo.winType(2, "conquer");
            hasWon = false;
            return 0;
        }
        //Elimination
        else if (playerOne.returnArmies(1) <= 0 && playerOne.returnTerritories(1) <= 0){
            playerTwo.winType(2, "elim");
            hasWon = false;
            return 0;
        }
        //Full Elimination
        else if (playerOne.returnArmies(1) <= 0 && playerOne.returnTerritories(1) <= 0 && playerOne.returnMoney(1) <= 0){
            playerTwo.winType(2, "full elim");
            hasWon = false;
            return 0;
        }
        //Devastation
        else if (playerOne.returnMoney(1) <= 0){
            playerTwo.winType(2, "devastation");
            hasWon = false;
            return 0;
        }
        
        cout << playerTwo.returnName(2) << ", it is your turn. What do you wish to do?" << endl <<
                                           "\t1. Grow Territories ($10000 [Requires a spare army to control])\n" <<
                                           "\t2. Shrink Territories (Get back $10000 [Can sell to " << playerOne.returnName(1) << "])\n" << 
                                           "\t3. Upgrade Technology ($" << 5000 - (playerTwo.returnScientists(2) * 100) << " [Original Price: $5000])\n" <<
                                           "\t4. Upgrade Army ($8000)\n" <<
                                           "\t5. Attack\n" <<
                                           "\t6. Pass\n" <<
                                           "\t7. Forfeit\n";
        cin >> playerChoice;
        
        switch (playerChoice){
            case 1:
                playerTwo.growTerritories(2);
            break;
            
            case 2:
                playerTwo.shrinkTerritories(' ', ' ', 2);
            break;

            case 3:
                playerTwo.upgradeTech(2);
            break;

            case 4:
                playerTwo.upgradeArmy(2);
            break;

            case 5:
                if (playerOne.returnArmies(1) < playerTwo.returnArmies(2)){
                    playerTwo.winBattle(2, 0);
                    playerOne.lostBattle(1);
                }
                else if (playerOne.returnArmies(1) == playerTwo.returnArmies(2)){
                    if (playerOne.returnTech(1) < playerTwo.returnTech(2)){
                        playerTwo.winBattle(2, 0);
                        playerOne.lostBattle(1);
                    }
                    else if (playerOne.returnTech(1) == playerTwo.returnTech(2)){
                        srand(int(time(0)));

                        int i = 1 + rand() % (2 + 1 - 1);

                        if (i == 1){
                            playerOne.winBattle(1, 0);
                            playerTwo.lostBattle(2);
                        }
                        else if (i == 2){
                            playerTwo.winBattle(2, 0);
                            playerOne.lostBattle(1);        
                        }
                    }
                }
                else {
                    playerOne.winBattle(1, 0);
                    playerTwo.lostBattle(2);
                }
            break;

            case 6:
                cout << playerTwo.returnName(2) << " has decided to pass this round." << endl;
            break;

            case 7:
                playerOne.winType(1, "forfeit");
                hasWon = true;
                return 0;
            break;

            default:
            break;
        } 

        cout << playerTwo.returnName(2) << " you now have " << playerTwo.returnArmies(2) << " Armies, " << playerTwo.returnTerritories(2) << " Territories, Technology Level " << playerTwo.returnTech(2) << "/10, " << playerTwo.returnScientists(2) << "/5 scientists, and $" << playerTwo.returnMoney(2) << endl;
        playerTwo.deCheeser(1);
    } while (!hasWon);
}
