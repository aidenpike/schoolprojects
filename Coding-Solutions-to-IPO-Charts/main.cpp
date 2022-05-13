#include <iostream>

using namespace std;

int main() 
{
    //Scenario 1
    double beginningBal, depositAmt, withAmt, endBal;
    
    cout << "\x1B[32mJohn Lee's Banking\033[0m\n"; 
    cout << "Enter your checking account balance from the beginning of the month: "; 
    cin >> beginningBal;
    cout << "Enter the amount deposited during the month: ";
    cin >> depositAmt;
    cout << "Enter the withdrawn amount during the month: ";
    cin >> withAmt; 
    
    string overdraft = ((beginningBal + depositAmt - withAmt) < 0) ? "Overdraft!!!\n\n" : "\n";
    
    cout << "Your balance at the end of the month will be $" << (beginningBal + depositAmt - withAmt) << endl << endl;
    cout << overdraft;

    //Scenario 2
    double envPrice, papPrice, totalPrice;
    int envCount, papCount = 0;
    
    cout << "\x1B[32mWelcome to the Typing Salon!\033[0m\n";
    cout << "Enter the amount of envelopes and their price: ";
    cin >> envCount >> envPrice;
    cout << "Enter the amount of papers and their price: ";
    cin >> papCount >> papPrice;
  
    cout << "Your total due is $" << (envCount * envPrice) + (papCount * papPrice) << endl << endl;

    //Scenario 3
    double length, width;
    double pricePerSqFt;
    
    cout << "\x1B[33m[\033\x1B[32mThe Limited\033[0m\x1B[33m]\033[0m\n";
  
    cout << "Input length, then width, then price per square foot:\n";
    cin >> length >> width >> pricePerSqFt;

    cout << "Your total area is " << length * width << " ft² and your total price is $" << (length * width) * pricePerSqFt << endl;
}
