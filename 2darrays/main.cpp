#include <iostream>
#include <cstring>

using namespace std;

int main() {
//NOTE: ROW (Vertical) FIRST, COLUMN (Horizontal) SECOND
//Scen 1
    int sum,
        absences, presents,
        msngAsm = 0;
    int fries[2][7] = {{6,9,22,34,1,90,0},
                       {39,2,4,5,7,44,21}};
    string students[5][4] = {{"Kirsten","A","P","A"},
                             {"Evan","P","A","P"},
                             {"Rylan","P","P","P"},
                             {"Joe","A","P","P"},
                             {"Collin","P","P","P"}};
    int scores[10][2] = {{78,90},
                         {87,88},
                         {65,70},
                         {56,100},
                         {74,72},
                         {33,47},
                         {87,88},
                         {73,73},
                         {79,83},
                         {95,89}};
    double averages[28] = {0.0};
    int grades[28][5] = 
        {{ 14,22,13,24,17 },
        { 13,22,18,24,18 },
        { 12,18,18,24,15},
        { 8,22,18,21, 11},
        { 9,22,0,23, 0},
        { 15,22,18,24,18},
        { 15,22,18,23,20},
        { 15,22,18,24,19},
        { 13,22,18,24,19},
        { 11,22,17,20,19},
        { 14,0,9,15,14},
        { 12,0,16,17,10 },
        { 14,22,18,23,19},
        { 12,22,18,24,18},
        { 8,15,14,20,14},
        { 13,14,18,22,0},
        { 14,22,16,24,0},
        { 15,22,18,23,17},
        { 13,22,16,22,12},
        { 15,22,18,24,18},
        { 10,22,18,24,14},
        { 15,22,18,24,19},
        { 15,22,18,24,20},
        { 15,22,0,21,13},
        { 15,22,18,24,19},
        { 15,22,18,24,20},
        { 15,22,18,24,17 },
        { 14,21,18,24,18 }};
    
    for (int x = 0; x < 7; x++){
        for (int y = 0; y < 2; y++){
            sum += fries[y][x];
        }
    }
        
    cout << "Total number of fries of eaten: " << sum << endl;

//Scen 2
    absences = 0;
    presents = 0;
    
    for (int x = 1; x < 4; x++){
        for (int y = 0; y < 5; y++){
            if (students[y][x] == "A")
                absences++;
            else if (students[y][x] == "P")
                presents++;
        }
    }

        cout << "There are " << presents << " present and " << absences << " absent students." << endl;

//Scen 3 
    for(int x = 0; x<10; x++){
    //Midterm
        for(int y = 0; y<1; y++){
            if(scores[0][0] < scores[x][y]){
                scores[0][0] = scores[x][y];
            }       
        }
    //Final
        for(int y = 0; y<2; y++){
            if(scores[0][1] < scores[x][y]){
                scores[0][1] = scores[x][y];
            }       
        }
    }
    cout << "Highest midterm score: " << scores[0][0] << endl;
    cout << "Highest final score: " << scores[0][1] << endl;

//Scen 4        
    for (int x = 0; x < 28; x++){
       for (int y = 0; y < 5; y++)
            sum += grades[x][y];
        averages[x] = sum / 5.0;
        cout << sum / 5.0 << endl;
        sum = 0; 
    }

    for (int x = 0; x < 28; x++){
        if (averages[0] < averages[x]){
            averages[0] = averages[x];
        }
    }
    cout << "Highest average in the class: " << averages[0] << endl;
                
        for (int x = 0; x < 28; x++){
            for (int y = 0; y < 5; y++){
                if (grades[x][y] == 0){
                    msngAsm++;
                }
            }
        }
    cout << "Total assignments missing: " << msngAsm << endl;
}
