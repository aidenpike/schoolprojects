#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int row, incr = 0;

    cout << "Scenario 1\n";
    
    for (int row = 8; row >= 0; row--) {
        for (int col = 0; col <= row; col++)
            cout << "*";
        cout << endl;
    }


    cout << "\nScenario 2\n";
    
    for (int row = 1; row <= 5; row++){
        for (int col = row * 2; col >= 1; col--)
            cout << "*";   
        cout << "\n";       
    }
  

    cout << "\nScenario 3\n";
    cout << "Enter number the of rows, then the increment value: ";
    cin >> row; cin >> incr;
   
    for (int x = 1; x <= row; x++){
        for (int y = x * incr; y >= 1; y--)
            cout << "*";       
    cout << endl;
    }


    cout << "\nScenario 4\n";
    for (int x =1; x <= 15; x++){
        for (int y = x; y >= 1; y--)
            cout << " ";
    cout << "*\n";       
    }
}
