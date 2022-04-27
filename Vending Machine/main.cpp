#include <iostream>

using namespace std;

void menuChoice();
string payment();
double change();

string choice[5] = {"1990 John Deere 4955", "2019 Challenger MT865E", "2015 New Holland Boomer 46D", "1980 John Deere 4840", "1978 John Deere 4840"};
double choicePrice[5] = {25000.0, 255000.0, 24500.0, 14500.0, 27500.0};
int userChoice, i;
double deposit;

int main() {
    cout << "Welcome to the Tractor Vending Machine! Choose your tractor: " << endl;

    for (i = 0; i < 5; i++){
        cout << i + 1 << ". " << choice[i] << "\t$" << choicePrice[i] << endl;
    }
    i = 0;

    cout << "Choice: ";
    cin >> userChoice; 

    //Deposit
    cout << "Enter in amount of money: $"; 
    cin >> deposit;
    cout << payment();
    if (deposit - choicePrice[userChoice - 1] < 0)
        cout << endl;
    else
        cout << "\nChange: $" << change() << endl;
}

void menuChoice(){
    cout << "You have chosen the " << choice[userChoice] << endl;
}

string payment(){
    
    if (deposit - choicePrice[userChoice - 1] < 0)
        return "Not enough money.";
    else
        return "Enjoy your " + choice[userChoice - 1] + "!";
}

double change(){
    return deposit - choicePrice[userChoice - 1];
}
