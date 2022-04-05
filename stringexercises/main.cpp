#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using std::getline;

int main() {
    string word, word2, digit, item, color, p, p2 = " ";
    string alphabet = "abcdefghijklmnopqrustuvwxyz";
    int count, x;
    char letter = ' ';

    cout << "Enter in one or more words:\n";
    cin.ignore();
    getline(cin, word);
    count = word.length();
    count++;

    for (x = 0; x < count; x++)
        cout << "*";


    word = " ";
    cout << "\nEnter in one last name, then enter in another last name: ";
    cin >> word; cin >> word2;
    transform(word.begin(),word.end(),word.begin(),::toupper);
    transform(word2.begin(),word2.end(),word2.begin(),::toupper);

    x = word.compare(0,word.length(), word2);
    if (x == 0)
        cout << "They are the same.\n";
    else if (x == -1)
        cout << word << " comes before " << word2;
    else if (x == 1)
        cout << word2 << " comes before " << word;


    cout << "Enter in a letter: ";
    cin >> letter;

    letter = tolower(letter);
    
    x = alphabet.find(letter, 0);
    x++;
    cout << "That is in the place of " << x;


    cout << "\nEnter in a 5 digit number: ";
    cin >> digit;

    count = digit.length();
    if (count != 5)
        cout << "That is not a 5 digit number.\n";
    else {
        item = digit.substr(0,3);
        color = digit.substr(3);
        cout << "Item number: " << item << "\nColor: " << color << endl;
    }


    cout << "Enter in a phone number: ";
    cin.ignore();
    getline(cin, p);

    while(x != -1){
        p.erase(p.find("-",0),1);
        x = p.find("-",0);
    }

    cout << p;
}
