#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
//Variables
        int x, y, choice = 0;
        char letter= ' ';
        char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char cipher[26] = {'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b'};
        char encodedWord [10] = {' '};
        char decodedWord [10] = {' '};
//Input
    cout << "CHOOSE:\n [1] Encode\n [2] Decode\n";
    cin >> choice;
        
    if (choice == 1){
        y = 0;
        
        do {
            cout << "Enter letter to encode (only 1 character of the word, enter 9 when done): ";
            cin >> letter;
            
            for (int x=0; x<26; x++){
                if (letter==alphabet[x]){
                    encodedWord[y] = cipher[x];
                    y++;
                }
            }
            cout << "\nWord so far is ";
            
            for (int x=0; x<y; x++)
                cout << encodedWord[x] ;
            cout << endl;
        } while (letter != '9');
        cout << "\nFinal encrypted word is ";
        
        for (x=0; x<y; x++)
            cout << encodedWord[x];
        cout<<endl;
    } 
    
    if (choice == 2){
        y = 0;
        
        do {
            cout << "Enter letter to decode (only 1 character of the word, enter 9 when done): "; 
            cin >> letter;
            
            for (int x=0; x<26; x++){
                if (letter==cipher[x]){
                decodedWord[y] = alphabet[x];
                y++;
                }
            }
            cout << "Word so far is ";
            
            for (int x=0; x<y; x++)
                cout << decodedWord[x];
            cout << endl;
        } while (letter != '9');
        cout << "Final decrypted word is ";
        
        for (int x=0; x<y; x++){
            cout << decodedWord[x];
        }
    }
}
