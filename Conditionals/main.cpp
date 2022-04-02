#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
using std::transform;

int main() {

//Scenario 1
    string state, shorthand = " ";
    double gpa, cH, m, mCst, sc1, sc2, sc3 = 0.0;
    int pts, rbs, ast, age, mi, frLB, spd, spdLim = 0;
    
    cout << "Scenario 1\n";
    cout << "Enter your state's abbrievation: ";
    getline(cin,state);
    transform(state.begin( ), state.end( ), state.begin( ),::toupper); 

    shorthand = (state == "IN" || state == "IL") ? "We have a store there.\n" : "We do not have a store there.\n";
    cout << shorthand;

    
    cout << "Scenario 2\n";
    cout << "Enter your GPA and your credit hours: ";
    cin >> gpa >> cH;

    shorthand = (gpa >= 3.5 && cH >= 70) ? "Honors Diploma\n" : "Regular Diploma\n";
    cout << shorthand;


    cout << "Scenario 3\n";
    cout << "Enter points, rebounds, and assists: ";
    cin >> pts >> rbs >> ast;

    shorthand = (pts >= 10 && rbs >= 10 && ast >= 10) ? "Triple double!\n" : "\n";
    cout << shorthand;


    cout << "Scenario 4\n";
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter cost of meal: ";
    cin >> mCst;
    if (age >= 65 || age <= 5){
        m = .1 * mCst; mCst = mCst - m;
        cout << "You got a discount!\n";
        cout << "The cost of your meal is " << mCst << " dollars.\n";
    } else
        cout << "The cost of your meal is " << mCst << " dollars. \n";

    
    cout << "Scenario 5\n";
    cout << "Enter the mileage as well as the weight of the freight: ";
    cin >> mi >> frLB;
    
    shorthand = (mi < 400 && frLB < 1000) ? "The freight will be delivered in 3-5 days.\n" : "The freight will be delivered in 5-7 days.\n";
    cout << shorthand; 

    
    cout << "Scenario 6\n";
    cout << "Enter the driver's speed and the speed limit: ";
    cin >> spd >> spdLim;
    
    shorthand = (spd >= 15 + spdLim) ? "You owe: $200\nYou must attend traffic class.\n" : "You owe: $100\n";
    cout << shorthand;
    

    cout << "Scenario 7\n";     
    cout << "Enter scores 1, 2, and 3: ";
    cin >> sc1 >> sc2 >> sc3;
    if (sc1 >= 0 && sc2 >= 0 && sc3 >= 0)
        cout << "Average: " << (sc1 + sc2 + sc3)/3 << endl;         
    else 
        cout << "All scores must be greater than 0, no average calculated.\n\n";


    cout << "Scenario 8\n";
    cin.ignore();
    cout << "Enter your state: ";
    getline(cin,state);

    transform(state.begin( ), state.end( ), state.begin( ),::toupper); 

    shorthand = ((state == "HAWAII" || state == "HI") || (state == "OREGON" || state == "OR")) ? "Charge: $30\n" : "Charge $20\n";
    cout << shorthand;
}
