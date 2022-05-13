#include <iostream>

using namespace std;

int main() {
    int pennies, remainder, quarters, nickles, dimes, amtBack;
    double amtGive, amtDue;

    //Scenario 1
    cout << "Scenario 1\n";

    cout << "Input amount of pennies: ";
    cin >> pennies;
    
    if (pennies/100 == 1)
        cout << "You get back " << pennies/100 << " dollar, ";
    else
        cout << "You get back " << pennies/100 << " dollars, "; 
        
        remainder = pennies % 100;
        quarters = remainder / 25;
        
        if (quarters == 1)
            cout << quarters << " quarter, ";
        else
            cout << quarters << " quarters, ";
        
        remainder = remainder % 25;
        dimes = remainder / 10;
        
        if (dimes == 1)
            cout << dimes << " dime, ";
        else
            cout << dimes << " dimes, ";
        
        remainder = remainder % 10;
        nickles = remainder / 5;

        if (nickles == 1)
            cout << nickles << " nickel, ";
        else
            cout << nickles << " nickles, ";
        
        remainder = remainder % 5;

        if (remainder == 1)
            cout << "and " << remainder << " penny." << endl;
        else
            cout << "and " << remainder << " pennies." << endl;

    //Scenario 2
    cout << "Scenario 2 \n";

    cout << "Amount due: ";
    cin >> amtDue;
    
    amtDue = amtDue * 100;
    amtBack = -1;
    
    while (amtBack < 0){
        cout << "Pay here: ";
        cin >> amtGive;
        amtGive = amtGive * 100;
    
        amtBack = amtGive - amtDue;
    
        if (amtBack < 0)
            cout << "Invalid! Payment does not reach required amount due.\n";
        else {
            if (amtBack/100 == 1)
                cout << "You get back " << amtBack/100 << " dollar, ";
            else
                cout << "You get back " << amtBack/100 << " dollars, "; 
            
            remainder = amtBack % 100;
            quarters = remainder / 25;
            
            if (quarters == 1)
                cout << quarters << " quarter, ";
            else
                cout << quarters << " quarters, ";
            
            remainder = remainder % 25;
            dimes = remainder / 10;
            
            if (dimes == 1)
                cout << dimes << " dime, ";
            else
                cout << dimes << " dimes, ";
            
            remainder = remainder % 10;
            nickles = remainder / 5;
    
            if (nickles == 1)
                cout << nickles << " nickel, ";
            else
                cout << nickles << " nickles, ";
            
            remainder = remainder % 5;
    
            if (remainder == 1)
                cout << "and " << remainder << " penny." << endl;
            else
                cout << "and " << remainder << " pennies." << endl; 
        }
    }
}
