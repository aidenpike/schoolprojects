#include <iostream>
#include <algorithm>

using namespace std;

int main() {
//Arrays
    string teamName[5] = {"Heat", "Jazz", "Magic", "Grizzlies", "Pacers"};
    double teamScores[5] = {105.7, 111.7, 107.3, 103.5, 108.0};
    double scoreAverage = (teamScores[0] + teamScores[1] + teamScores[2] + teamScores[3] + teamScores[4]) / 5;

    for (int i = 0; i < 5; i++){
        cout << teamName[i] << "\t" << teamScores[i] << endl;
    }

    cout << "The average points per game: " << scoreAverage << endl;
    cout << "Lower than Average PPG: " << endl;
        
    for (int i = 0; i < 5; i++){
        if (teamScores[i] < scoreAverage)
            cout << teamName[i]  << endl;
    }
//Functions

//Strings
}
