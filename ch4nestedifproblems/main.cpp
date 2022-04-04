#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int shape, daysmiss, num[100], i, min = 0;  
    double x, y = 0.0;
    string out, z = " ";
    char hrtCond;
    
    cout << "Scenario 1\n";        
    cout << "How tall are you? (inches): ";
    cin >> x; 
    
    if (x <= 53)
        cout << "You cannot go on any roller coasters, you are too short. \n";
    else { 
        cout << "Do you have a heart condition? [Y or N]: ";
        cin >> hrtCond;                
                  
        hrtCond = toupper(hrtCond); 
                        
        out = (hrtCond == 'Y') ? "You cannot go on Rockin Roller Coaster or Tunnel of Doom.\n" : "You can ride all of the roller coasters.\n";
        cout << out;                  
    }
          
        cout << "Scenario 2\n";
        cout << "\nWhich shape do you what to see the area of (1. Circle, 2. Rectangle, 3. Triangle): ";
        cin >> shape;
        
        if (shape == 1){
            cout << "Enter in the radius of the circle: ";
            cin >> x;        
            cout << "The area is " << x * x * 3.14 << endl;
            }
        else if (shape == 2){
            cout << "Enter in the length and width of the rectangle: ";
            cin >> x; cin >> y;
            cout << "The area is " << x * y << endl;  
            }
        else if (shape == 3){      
            cout << "Enter in the height and base of the triangle: ";
            cin >> x; cin >> y;
            cout << "The area is " << (x * y)/2 << endl;
            }
        else  
            cout << "Please enter in a number between 1 and 3.\n";    


        cout << "Scenario 3 \n";
        cout << "How many days of school have you missed?: ";
        cin >> daysmiss;
        
        if (daysmiss >= 2)
            cout << "You have to take the final. \n";     
        else {
            cout << "What is your average grade?: ";
            cin >> x;
            
            out = (x >= 90) ? "You don't have to take the final. \n" : "You have to take the final. \n";                       
            
            cout << out;
        }


        cout << "Scenario 4 \n";
        cout << "Do you have a fever? (y or n): ";
        cin >> z;

        transform(z.begin( ), z.end( ), z.begin( ),::toupper); 
        
        if (z == "N"){ 
            cout << "Do you have a stuffy nose? (y or n): ";
            cin >> z;      
        
            out = (z == "Y") ? "You have a head cold. \n" : "You are a hypochondriac. \n";
            
            cout << out;
        }
        else {        
            cout << "Do you have a rash? (y or n): ";
            cin >> z;           
            
            out = (z == "Y") ? "You might have measles. \n" : "You might have the flu. \n";
        }


        cout << "Scenario 5 \n";
        cout << "Enter 3 numbers: \n";

        for(i = 0; i < 3; i++)      
            cin >> num[i];
        
        min = num[0];
        
        for(i = 0; i < 3; i++){
            if(num[i] < min)
            min = num[i];
        }
        cout << "Minimum Num: " << min;     
}
