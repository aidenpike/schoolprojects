#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
        double num1, num2;
        char oper, stType = ' ';
        int tempor, crHours = 0;

        cout << "Scenario 1\n";
        cout << "Enter in first number, second number, then the operation: ";
        cin >> num1; cin >> num2; cin >> oper;

        switch (oper) {
            case '+':
                cout << num1+num2;
            break;

            case '*': 
                cout << num1*num2; 
            break;

            case '-': 
                if (num1 < num2){
                    tempor = num1; num1 = num2; num2 = tempor;
                }
                        
                cout << num1-num2;
            break;

            case '/':
                if (num1 <num2){
                    tempor = num1; num1 = num2; num2 = tempor;
                }
                cout << double(num1)/double(num2);
            break;
        }


    cout << "\n\nScenario 2\n"; 
    cout << "Enter in number of credit hours: ";
    cin >> crHours;
    
    stType = toupper(stType);
        
    if (crHours <= 0)
        cout << "Must be more than 0 credit hours. \n";
    else { 
        cout << "Enter in type of student you are (U for Undergraduate, G for Graduate, O for Out of State, and S for Special Student): ";
        cin >> stType;
    }                
    switch (stType){
        case 'U':
            cout << "You owe " << 500 * crHours;
        break;
        
        case 'G': 
            cout << "You owe " << 800 * crHours;
        break;
        
        case 'O':
            cout << "You owe " << 650 * crHours;
        break;  
        
        case 'S': 
            cout << "You owe " << 300 * crHours;
        break;
    }                             
}
