#include <iostream>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;
using std::pow;

//Scenario 1 Prototype
double divide(double);

//Scenario 2 Prototype
double answer(double, double, double);

//Scenario 3 Prototype
string AreYouaWinner(int);

//Scenario 4 Prototype
bool isVowel(char);

//Scenario 5 Prototypes
double getSales(double);
double calcBonus(double);

int main() {

//Scenario 1
    int divided = 0;
    double result = 0.0;

    cout << "Enter an integer: "; 
    cin >> divided;
    
    result = divide(divided);
    
    cout << "Answer: " << result << endl;

//Scenario 2
    double input1, input2, input3 = 0.0;
    double ans = 0.0;
    cout << "Enter 3 doubles: ";
    cin >> input1 >> input2 >> input3;

    ans = answer(input1, input2, input3);

    cout << "Answer: " << ans << endl;

//Scenario 3 FIX
    int winner = 0;
    string hasWon = AreYouaWinner(winner);

    for (int i = 0; i < 5; i++){
        srand(int(time(0)));
        winner = 1 + rand()%(2 - 1 + 1);
        cout << hasWon << " (" << winner << ")"<< endl;
    }

//Scenario 4
    char letter = ' ';

    cout << "Enter a letter: ";
    cin >> letter;

    bool vowelCheck = isVowel(letter);

    cout << "Is it a vowel: " << vowelCheck << endl;

//Scenario 5
    double sales; 
    double yearlySales;
    cout << getSales(sales);
}

//Scenario 1 Function
double divide(double divider){
    return divider/2.0;
}

//Scenario 2 Function
double answer(double answer1, double answer2, double answer3){
    return (answer1 + answer2) * answer3;
}

//Scenario 3 Function
string AreYouaWinner(int win){
    if (win == 1)
        return "Nope, not a winner";
    else
        return "Yes you are a winner!";
}

//Scenario 4 Function
bool isVowel(char letter){
    return (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') ? true : false;
}

//Scenario 5 Functions
double getSales(double salesValue){
    cout << "Enter in sales for the year: ";
    cin >> salesValue;
    cout << "Your bonus is ";
    return calcBonus(salesValue);
}

double calcBonus(double bonus){
    return bonus * .1;
}
