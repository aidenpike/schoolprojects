#include <iostream>
#include <algorithm>

using namespace std;
using std::transform;

int main() {
    string word, x;
    int l, v;

    while (word != "opstay"){
        cout << "Enter in a word, or say stop in pig latin to stop: ";
        getline(cin, word);

        transform(word.begin(), word.end(), word.begin(),::tolower);
        x = word.substr(0, 1);
        l = word.length();
    
        if (word != "opstay"){
            if (x == "a" || x == "e" || x == "i" || x == "o" || x == "u")
                word.insert(l, "ay");
            else {
                word.erase(0,1);
                word = word + x + "ay";
            }
            cout << word << endl;
        }
    }
}
