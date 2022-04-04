#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int s1 = 10;
    int s2, s3a, s3b, s4a;
    double s4b;

    cout << "Scenario 1\n\n";

    do {
        cout << s1 * s1 << endl;
        s1++;   
    } while ((s1 * s1) <= 400);       
    

    cout << "Scenario 2\n\n";
    do {
        cout << "Enter your age: ";
        cin >> s2;
        if (s2 >= 18)
            cout << "You can vote\n";
        else if (s2 >= 0 && s2 < 18)
            cout << "You are too young to vote\n";
        else 
            cout << "Please enter a positive number\n";
    } while (s2 >= 0);
 
    
    cout << "Scenario 3\n\n";
    s3a = 0;
    s3b = 0;

    do {
        cout << "Enter in a positive number (negative stops the loop): ";
        cin >> s3a;
        s3b = s3a + s3b;
        cout << "Sum so far is " << s3b << "\n";
    } while(s3a >= 0);

    
    cout << "Scenario 4\n\n";
    s4b = 42000;
    cout << "Years \t Salary\n";
    
    do {
        cout << s4a << "\t\t" << s4b << "\n";
        s4a++;
        s4b = (0.08 * s4b) + s4b;
    } while(s4a <= 12);
}
