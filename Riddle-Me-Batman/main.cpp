#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    bool loop, loop2 = true;
    string answer = " ";
    char retry = ' ';
    int diff = 0;
    do {
        cout << "RIDDLE ME THIS, BATMAN!\n";
        cout << "Choose your difficulty. \n Easy = 1 \n Normal = 2 \n Hard = 3 \n Extreme = 4\n";
        cin >> diff;
        
        if (diff == 1){
        cout << "Please respond in one word. \nWhat has to be broken before you can use it? ";
        cin >> answer;
        transform(answer.begin( ), answer.end( ), answer.begin( ),::toupper); 
        if (answer == "EGG")
            cout << "You win this time, Batman...";
        else
            cout << "YOU LOSE, BATMAN! YOU ARE A FOOL!";
        }
        
        if (diff == 2){
            answer = " ";
            cout << "Please respond in one word. \nI speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I? ";
            cin >> answer;
            
            transform(answer.begin( ), answer.end( ), answer.begin( ),::toupper); 
            
            if (answer == "ECHO")                                     
                cout << "You win this time, Batman...";
            else
                cout << "YOU LOSE, BATMAN! YOU ARE A FOOL!";       
            }
        if (diff == 3){
            answer = " ";
            cout << "Ah, a daring one. Let us see if you are up to the test!\n \n" << "Please respond in one word. \nI look flat, \nbut I am deep, \nHidden realms I shelter. \nLives I take, but food I offer. \nAt times I am beautiful. \nI can be calm, angry and turbulent. \nI have no heart, but offer pleasure as well as death. \nNo man can own me, yet I encompass what all men must have. \nWhat am I? ";
            cin >> answer;
            
            transform(answer.begin( ), answer.end( ), answer.begin( ),::toupper); 
            
            if (answer == "OCEAN")                  
                cout << "You win this time, Batman...";
            else
                cout << "YOU LOSE, BATMAN! YOU ARE A FOOL!";           
            }
        if (diff == 4){
            answer = " ";
            cout << "Very daring I see. You'll regret it.\n\n One of these words does not belong: Which is it? Brawl, Carrot, Change, Clover, Proper, Sacred, Stone, Seventy, Swing, Travel.";       
            cin >> answer;
            
            transform(answer.begin( ), answer.end( ), answer.begin( ),::toupper); 
            
            if (answer == "CARROT")                  
                cout << "You win this time, Batman...";
            else
                cout << "YOU LOSE, BATMAN! YOU ARE A FOOL!";           
        }
        do {
            cout << "\nGo again? [Y or N] ";
            cin >> retry;
            retry = toupper(retry);
            if (retry == 'Y'){ 
                loop = true; loop2 = false;
            }
            else if (retry == 'N'){
                loop = false; loop2 = false;
            }
            else 
                loop2 = true;
    } while (loop2);
} while (loop);
                
}
