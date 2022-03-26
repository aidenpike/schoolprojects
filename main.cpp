#include <iostream>

using namespace std;

int main() 
{
    double beginningBal, depositAmt, withAmt, endBal,
           envPrice, papPrice, totalPrice,
           longness, wideness, sqPrice, lwArea, totPrice = 0.0;
    int envCount, papCount = 0;

    cout << "Below are the programs that solve the 3 scenarios from my first IPO Charts assignments\n\n";
    
    cout << "\x1B[32mJohn Lee's Banking\033[0m\n"; 
    cout << "First enter your checking account balance from the beginning of the month, then the amount deposited during the month, then the withdrawn amount during the month:\n";
    cin >> beginningBal >> depositAmt >> withAmt; 
    
    endBal = beginningBal + depositAmt - withAmt;
    
    string overdraft = (endBal < 0) ? "Overdraft!!!\n\n" : "\n";
    
    cout << "Your balance at the end of the month will be $" << endBal << endl << endl;
    cout << overdraft;
    
    cout << "\x1B[32mWelcome to the Typing Salon!\033[0m\n";
    cout << "Enter the amount of envelopes, their price, then the amount of papers, then their price:\n";
    cin >> envCount >> envPrice >> papCount >> papPrice;
    totalPrice = (envCount * envPrice) + (papCount * papPrice);
  
    cout << "Your total due is $" << totalPrice << endl << endl;
  
    cout << "\x1B[33m[\033\x1B[32mThe Limited\033[0m\x1B[33m]\033[0m\n";
  
    cout << "Input length, then width, then price per square foot:\n";
    cin >> longness >> wideness >> sqPrice;
    
    lwArea = longness * wideness, totPrice = lwArea * sqPrice;
    
    cout << "Your total area is " << lwArea << " ft² and your total price is $" << totPrice << endl;
}
