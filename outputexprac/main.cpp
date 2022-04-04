#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;
using std::ofstream;
using std::ios;

int main(){
    ofstream outRR;
    int rating, num, x; string name; double miles; char ans1, ans2;
	
    outRR.open("rr.txt",ios::app);
    
    if(outRR.is_open()){
	    cout << "Enter in a restaurant name and its rating: ";
        cin >> name >> rating;
        
        do {
	        outRR << name << "#" << rating << endl;
            cout << "Enter in a restaurant name and its rating, or enter X to skip to output: ";
            cin >> name >> rating;
        } while (name != "X");  
    }   
    else 
        cout << "The file failed to open";
    outRR.close();
    
    ofstream outTimes;

    outTimes.open("multiply.txt",ios::out);

    if(outTimes.is_open()){
        cout << "Enter a number: ";
        cin >> num;
        
        for (x = 0; x <= 10; x++)
            outTimes << num << "#" << x << "#" << num * x << endl;

        outTimes.close();
    }
    else 
        cout << "The file failed to open";

    ofstream outKM;

    outKM.open("mileskilo.txt",ios::out);
    
    if(outKM.is_open()){
        cout << "Enter in a number of miles: ";
        cin >> miles;

        while (miles > 0){
            outKM << miles * 1.609 << endl;
            cout << "Enter in a number of miles, or enter in a negative number to stop: ";
            cin >> miles;           
        }
    }
    else 
        cout << "The file failed to open";

    ofstream outQ;

    outQ.open("quiz.txt",ios::app);
        
    if (outQ.is_open()){
        cout << "Enter in your name: ";
        cin >> name;
        cout << "How many colors does the Turkmenistan flag have?\n a. 4\n b. 7\n c. 23\n d. 2\n";
        cin >> ans1;
        ans1 = toupper(ans1);
        cout << "Which is the highest voice part?\n a. Baritone\n b. Tenor\n c. Alto\n d. Soprano\n";
        cin >> ans2;
        ans2 = toupper(ans2);
        outQ << name << "#1#" << ans1 << "#2#" << ans2 << endl;
    }
}
