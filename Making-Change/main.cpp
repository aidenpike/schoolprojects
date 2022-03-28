#include <iostream>

using namespace std;

int main() {
    int P, Rem, Q, N, Di, Do, amtBack = 0;
    double amtGive, amtDue = 0.00;
    
    cout << "Scenario 1\n";

    cout << "Input amount of pennies: ";
    cin >> P;
    cout << "You have " << P/100 << " dollar(s), ";

    Rem = P % 100; Q = Rem/25;
    cout << Q << " quarter(s), ";

    Rem = Rem % 25; Di = Rem/10;
    cout << Di << " dime(s), ";

    Rem = Rem % 10; N = Rem/5;
    cout << N << " nickel(s), ";

    Rem = Rem % 5;
    cout << " and " << Rem << " penny(ies).\n \n";


    cout << "Number 2 \n";

    cout << "Amount due: ";
    cin >> amtDue;
    amtDue = amtDue * 100;

    cout << "Pay here: ";
    cin >> amtGive;
    amtGive = amtGive * 100;

    amtBack = amtGive - amtDue;

    if (amtBack < 0)
        cout << "Invalid! Payment does not reach required amount due.\n";
    else {
  
    cout << "You get back " << amtBack/100 << " dollar(s), ";
    Rem = amtBack % 100;

    Q = Rem / 25;
    cout << Q << " quarter(s), ";
    Rem = Rem % 25;
    Di = Rem / 10;
    cout << Di << " dime(s), ";
    Rem = Rem % 10;
    N = Rem / 5;
    cout << N << " nickel(s), ";
    Rem = Rem % 5;
    cout << " and " << Rem << " penny(ies)." << endl;
    }
}
