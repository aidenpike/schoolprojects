#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int num = 15;
    char q = ' ';

    cout << "Scenario 1\n";
    
    while (num < 40){
        cout << num << endl;
        num = num + 5;
    }  
    
    cout << endl;


    cout << "Scenario 2\n";
    
    num = 30;

    while (num > 20){
        cout << num << endl;
        num = num - 2;
    }  
    cout << endl;

    cout << "Scenario 3\n";

    num = 50;
    
    while (num > 1){
        cout << num << endl;
        num = num / 2;        
    }  
    cout << endl;
    
    
    cout << "Scenario 4\n";

    num = 3;
    while (num <= 6561){
        cout << num << endl;
        num = num * num;        
    }  
    cout << endl;;


    cout << "Scenario 5\n";
        q = 'Y';

        while (q == 'Y'){
            cout << "Would you like to continue the loop? (Y for Yes, N for No) ";
            cin >> q;
            q = toupper(q);
            cout << "Yay!\n";
        }                 
} 
