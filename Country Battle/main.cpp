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
    do {
        cout << "Press enter to continue. ";                                    
        cin.ignore();
        misc.getName();
        misc.deCheeser(2);
        
        cout << playerOne.returnName(1) << " you have " << playerOne.returnArmies(1) << " Armies, " << playerOne.returnTerritories(1) << " Territories, Technology Level " << playerOne.returnTech(1) << "/10, and $" << playerOne.returnMoney(1) << endl;
            cout << playerTwo.returnName(2) << " you now " << playerTwo.returnArmies(2) << " Armies, " << playerTwo.returnTerritories(2) << " Territories, Technology Level " << playerTwo.returnTech(2) << "/10, and $" << playerTwo.returnMoney(2) << endl;
        
        do {
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
                break;
    
                default:
                break;
            } 

            cout << playerOne.returnName(1) << " you now have " << playerOne.returnArmies(1) << " Armies, " << playerOne.returnTerritories(1) << " Territories, Technology Level " << playerOne.returnTech(1) << "/10, " << playerOne.returnScientists(1) << "/5 scientists, and $" << playerOne.returnMoney(1) << endl;
            playerOne.deCheeser(1);
        } while (!hasWon);
        
            //Play Again
            cout << "Would you like to play again? [Y or N]: ";
            cin >> playAgain;
            playAgain = toupper(playAgain); 
    
            cin.ignore();
    } while (playAgain == 'Y');
    
    cout << "Goodbye!";
}
