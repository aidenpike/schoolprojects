#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;
using std::ios;
using std::ofstream;
using std::ifstream;

int main() {
    ifstream randNums;
    ofstream evenNums;
    string num;
    
    randNums.open("numbers.txt");

    if(randNums.is_open()){
        while (getline(randNums,num)){  
            if ((stoi(num) % 2) == 0)
                cout << num << endl;
        }
    }
    else 
        cout << "File refused to open. ";
    randNums.close();
}
