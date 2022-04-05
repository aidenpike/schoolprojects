#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string lastName[4] = {"Gaff","Daniels","Dodson","Dice"};
    int votesRecieved[4] = {250,300,300,305};
    string players[6] = {"Ken","ChillinDude","Hungrybox","Dabuz","ChuDat","Atelier"};
    int golds[6] = {12,3,14,0,0,0};
    double sum = 0.0;
    int answer, a;
    int loopOn = 1;
    
//Scen 1
    cout << "Scenario 1\n\n";
    cout << "Display:\n";
 
    for(int i = 0; i<=3; i++){
        sum+=votesRecieved[i];
        cout << lastName[i] << "\t" << votesRecieved[i] << "\t" << (sum/votesRecieved[i])*10 << "%\n";
    }
    cout << "Total: " << sum << endl; 

//Scen 2
    cout << "\n\nScenario 2\n\n";
    
    while(loopOn == 1){ 
        cout << "•••••••••••••••••••••••••••••••••••\nTeam Liquid Smash Bros Tournament Golds\n\nWhat would you like to do?\n\t1. Display     highest player\n\t2. Display the lowest player\n\t3. Display average\n\t4. Search for a player's stat\n\t5. Show all \n\t6. Exit\n•••••••••••••••••••••••••••••••••••\n";
        cin >> answer;

        if (answer == 1){
            for(int i = 0; i<=5; i++){
            
                if (golds[0] < golds[i]){
                    players[0] = players[i];
                    golds[0] = golds[i];
                }
            }
        cout << "•••••••••••••••••••••••••••••••••••\nThe player with the most golds is " << players[0] << " with " << golds[0] << " golds\n";
        }
        else if (answer == 2){
        
            for(int i = 0; i<=5; i++){
            
                if (golds[0] > golds[i]){
                    players[0] = players[i];
                    golds[0] = golds[i];
                }
            }
        cout << "•••••••••••••••••••••••••••••••••••\nThe player with the most golds is " << players[0] << " with " << golds[0] << " golds\n";
        }
        else if (answer == 3){
    
            for (int x=0;x<=5;x++)
                sum+=golds[x];
            cout << "The average of all players is " << sum/6 << " golds\n";
        }
        else if (answer == 4){      
            cout << "•••••••••••••••••••••••••••••••••••\nChoose which player to search by entering 1-6: \n";
                
                for(int i = 0; i<=5; i++)
                    cout << players[i] << "\n";
            cin >> a;
            a--;
            cout << players[a] << " has " << golds[a] << " golds\n";
        }
        else if (answer == 5){
            cout << "•••••••••••••••••••••••••••••••••••\n";       
            
            for (int x=0;x<=5;x++)
                cout << players[x] << " has won " << golds[x] << " golds\n";
            cout <<"•••••••••••••••••••••••••••••••••••\n\n";
        }
        else if (answer == 6)
            loopOn = 0;
        else
            cout << "Please enter in an option between 1-6.\n\n";        
    }
}
