#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
int s1, s2, s3, s4 = 0;
double s5a, s5b = 0.0;
double s6a, s6b = 1;

cout << "Scenario 1\n";
        
for(int s1 = 1; s1 <=21; s1=s1 + 2)
    cout << s1 << endl; 


cout << "\nScenario 2\n";
        
for(int s2 = 24; s2 >= 3; s2=s2 / 2)
    cout << s2 << endl;

 
cout << "\nScenario 3\n";
        
for(char s3 = 'a'; s3 < 'a' + 26; s3++)
    cout << s3 << endl;


cout << "\nScenario 4\n";

for(double s4 = 1; s4 <= 10; s4++)
    cout << 1/s4 << endl;


cout << "\nScenario 5\n";

cout << "Enter in a number: ";
cin >> s5a;

for(s5a = s5a; s5a >= 0; s5a = s5a - 1)
    s5b = s5a + s5b;
cout << s5b << endl;
        

cout << "\nScenario 6\n";
for(int s6a = 1; s6a <= 13; s6a = s6a + 2){
    s6b = s6b * s6a;
    cout<< s6a << endl;
    }             
}
