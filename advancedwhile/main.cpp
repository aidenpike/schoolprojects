#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int numer, denom,
    pNum,
    location, total,
    years, totalWeeks, totalEmployees;
    string out = " ";
    bool loop = true;
    char letter = ' ';

    cout << "Scenario 1\n\n";
    do { 
        cout << " Enter in a numerator and denominator: ";
        cin >> numer; cin >> denom;
        out = (numer % denom == 0) ? "You got it, they are evenly divisble -- Thanks!\n" : "Try Again -- not evenly divisble\n";
  }while(numer % denom != 0); 


    cout << "\nScenario 2 \n\n";
    while (loop){
        cout << "Enter in Number: (-1 to stop): ";
        cin >> pNum;
        if (pNum == 44)
            cout << "\nPlayer: Bojan Bogdanovic\n\n";
        else if (pNum == 12)
            cout << "\nPlayer: Tyreke Evans\n\n";
        else if (pNum == 4)
            cout << "\nPlayer: Victor Oladipo\n\n";
        else if (pNum == 33)
            cout << "\nPlayer: Myles Turner\n\n";
        else if (pNum >= 1000)
            cout << "\nWhat kind of insane person are you?\n\n";
        else if (pNum == -1)
    loop = false;
        else
            cout << "I don't have that player in my program \n\n";
    }


    cout << "\nScenario 3 \n\n";
    cout << "\nWhere would you like to sit?\nBalcony (1)\nPavilion (2)\nLawn (3)\n";
    cin >> location;
    while (location != 0){
        if (location == 1){
            cout << "Ticket Price: $75\n";
            total = total + 75;
    } 
    else if (location == 2){
        cout << "Ticket Price: 30\n";
        total = total + 30;       
    }       
    else {
        if (location != 0)
            cout << "Please enter a number from the list above.\n";        
    }
        cout << "Total price so far: " << total;
        cout << "\nWhere would you like to sit?\nBalcony (1)\nPavilion (2)\nLawn (3)\nFinish Order (0)\n";
        cin >> location;
    }
    cout << "Final price: " << total;      


    cout << "\nScenario 4\n\n";
    cout << "\nEnter in a letter (# to stop): ";
    cin >> letter;
    while (letter != '#') {
        if (letter == 'a' ||  letter == 'b' || letter == 'c') 
            cout << "Phone digit: 2";
        else if (letter == 'd' || letter == 'e' || letter == 'f')
            cout << "Phone digit: 3";
        else if (letter == 'g' || letter == 'h' || letter == 'i')
            cout << "Phone digit: 4";
        else if (letter == 'j' || letter == 'k'  || letter == 'l') 
            cout << "Phone digit: 5";
        else if (letter == 'm' || letter == 'n' || letter == 'o') 
            cout << "Phone digit: 6";
        else if (letter == 'p' || letter == 'q' || letter == 'r' || letter == 's') 
            cout << "Phone digit: 7";  
        else if (letter == 't' || letter == 'u' || letter == 'v') 
            cout << "Phone digit: 8";
        else if (letter == 'w' || letter == 'x' || letter == 'y' || letter == 'z') 
            cout << "Phone digit: 9";
        else
            cout << "Please enter a letter within the array. ";
        cout << "\nEnter another letter (type # to stop): ";
        cin >> letter;
    }


    cout << "\nScenario 5\n\n";   
    cout << "\nHow many years have the employees worked for the company? ";
    cin >> years;
    while (years >= 1) {
        totalEmployees++;
        if (years == 1) {
            cout << "Employee " << totalEmployees << " should receive 1 week of vacation\n";
            totalWeeks++;
        }
        else if (years >= 2 && years <= 5) {
            cout << "Employee " << totalEmployees << " should receive 2 weeks of vacation\n";
            totalWeeks = totalWeeks + 2;
        } 
        else if (years >= 6 && years <= 15) {
            cout << "Employee " << totalEmployees << " should receive 3 weeks of vacation\n";
            totalWeeks = totalWeeks + 3;
        }
        else {
            cout << "Employee " << totalEmployees << " should receive 4 weeks of vacation\n";
            totalWeeks = totalWeeks + 3;
        }
        cout << "\nHow many years have they worked for the company? (-1 to stop) ";
        cin >> years;
    }
    cout << "Total weeks of vacation: " << totalWeeks << endl;
    cout << "Total employees: " << totalEmployees << endl;
    cout << "Average vacation time: " << double(totalWeeks) / double(totalEmployees) << " weeks";
}
