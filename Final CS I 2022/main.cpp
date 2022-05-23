#include <iostream>
#include <algorithm>

using namespace std;
using std::transform;

void guess();
void correct();

int num = 0; 

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
    guess();
    correct();
//Strings
    string lastName;
    
    cout << "Enter in your last name: ";
    cin >> lastName;
    
    transform(lastName.begin(), lastName.end(), lastName.begin(),::toupper);
    
    if (lastName[0] == 'T')
        cout << "Congratulations it is FREE!!!" << endl;
    else if (lastName == "WISEMAN")
        cout << "Congratualtions you get a 50% discount!" << endl;
    else if (lastName < "Hassett") 
        cout << "Sorry you have to pay $15 more this year." << endl;
    else
        cout << "You have to pay the same as last year.";
}

void guess(){
    cout << "Guess a number between 1-10: ";
    cin >> num;
}

void correct(){
    srand(int(time(0)));
    int numCorrect = 1 + rand() % (10 + 1 - 1);
    
    if (numCorrect > num)
        cout << "Too low of a guess." << endl;
    else if (numCorrect < num)
        cout << "Too high of a guess." << endl;
    else 
        cout << "That is correct!" << endl;

    cout << "The number was " << numCorrect << endl;
}
