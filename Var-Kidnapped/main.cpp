#include <iostream>
#include <cmath> 
#include <string>

using namespace std;

int main() {
    double l, wi,
           cot, mpg,
           pay, hours, hwage,
           cpg, gallons, cost, roundcost,
           h, m = 0.0;
    string name = " ";
    int    s, n, totS = 0;

    cout << "Scenario 1: Abduction!" << endl;
    cout << "Input length and width: ";
    cin >> l >> wi;    
    cout << "Your total area is " << l*wi << " and your total perimeter is " << (l+wi)*2 << endl << endl;

    
    cout << "Scenario 2: Find the right car!" << endl;
    cout << "Enter the capacity of the gas tank in gallons, as well as the MPG: ";
    cin >> cot >> mpg;
    cout << "You can drive for " << cot * mpg << " miles without refueling.\n\n";

    
    cout << "Scenario 3: Getting a minimum wage job!" << endl;
    cout << "Input your pay recieved and hours worked, as well as your name: ";
    cin >> pay >> hours >> name;
    if ((pay/hours) == 1)
        cout << name << ", your hourly wage is " << pay/hours << " dollar an hour.\n\n";
    else
        cout << name << ", your hourly wage is " << pay/hours << " dollars an hour.\n\n";
    
    cout << "Scenario 4: Buying gas!" << endl;
    cout << "Enter in cost per gallon and amount of gallons: ";
    cin >> cpg >> gallons;
    cout << "Cost: " << cpg * gallons << endl;
    cout << "Rounded Cost: " << round(cpg*gallons) << endl << endl;

    
    cout << "Scenario 5: IT'S TIME TO DU-DU-DU-DU-DU DUEL!" << endl;
    cout << "Input hours, minutes, and seconds: ";
    cin >> h >> m >> s;
    totS = (h*3600) + (m*60) + s;
    if (totS == 1)
        cout << "That is " << (h*3600) + (m*60) + s << " second.\n\n";
    else
        cout << "That is " << (h*3600) + (m*60) + s << " seconds.\n\n";


    cout << "Scenario 6: ...ugh!" << endl;   
    cout << "Enter how many Ninja Turtle Action Figures there are: ";
    cin >> n;   
    cout << "Crates needed: " << n/20 << endl << "Leftover Turtles: " << n%20 << endl << endl;

    
    cout << "Scenario 7: It's time to go." << endl;

    h = 0; m = 0; s = 0;
    
    cout << "Enter in amount of seconds: ";
    cin >> s;
   
    h = s/3600; m = (s % 3600) / 60; s = s % 3600 % 60;

    cout << "That is " << h << " hours, " << m << " minutes, and " << s << " second(s)." << endl;
}
