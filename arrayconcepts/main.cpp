#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main(){
//Scen 1
    int arr[18] = {23,45,78,77,41,40,52,55,78,61,10,21,17,15,60,31,32,50};
    int month[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int scores[8] = {34,56,76,98,88,23,58,90};
    double prices[10] = {10.5,25.5,9.75,6.0,35.0,100.4,10.65,0.56,14.75,4.78};
    int testScores[20] = {90, 54, 23, 75, 67, 89, 99, 100, 34, 99, 97, 76, 73, 72, 56, 73, 72, 20, 86, 99};
    int cancer[50] = {26027, 2697, 28611, 15702, 164830, 22496, 21362, 5569, 3098, 109123, 47279, 7076, 7643, 66953, 32848, 17473, 15022, 26550, 24764, 8708, 29041, 37484, 53693, 28790, 15494, 32710, 5588, 9246,7898, 50734, 8975, 110766, 50009, 3685, 61726, 19245, 20228, 78385, 6347, 25692, 4312, 35175, 103369, 9878, 3674, 37431, 35945, 11383, 31000, 2586};
    int mNum, min, max, count;
    int sum = 0;
    double priceUp;
    string out; 
    
    cout << "Scenario 1\n\n";
    
    for (int x=1;x<=18;x=x+1){
        
        if (arr[x]%2)
            cout << arr[x] << endl;
    }  

//Scen 2
    cout << "\n\nScenario 2\n\n";
    cout << "Enter in month number: ";
    cin >> mNum;
    
    mNum = month[mNum - 1];

    out = (mNum == 2) ? "Number of days: 28" : "Number of days: 31";
    cout << out << endl;

//Scen 3
    cout << "\n\nScenario 3\n\n";
    
    for(int i = 0; i<=7; ++i){
    
        if(scores[0] > scores[i])
            scores[0] = scores[i];
  }
    cout << "Lowest number found: " << scores[0] << endl;

//Scen 4
    cout << "\n\nScenario 4\n\n";
    cout << "Enter in the price $: ";
    cin >> priceUp;

    for(int x=0;x<=9;x=x+1){
        cout << "New prices: ";
        cout << prices[x] + priceUp << endl;
    }      

//Scen 5
    cout << "\n\nScenario 5\n\n";
    cout << "Enter in minimum and maximum score: ";
    cin >> min >> max;

    for(int i = 0; i<=19; i++){
    
        if (testScores[i] >=min &&testScores[i]<=max)
        count++;
    
    }
    cout << "Number of students in that range: " << count << endl;

//Scen 6
    cout << "\n\nScenario 6\n\n";
    
    for(int i = 0; i<=49; i++){
        
        if(cancer[0] < cancer[i])
            cancer[0] = cancer[i];
    }
    cout << "Highest number found: " << cancer[0] << endl;;

    for(int i = 0; i<=49; i++){
   
        if(cancer[0] > cancer[i])
        cancer[0] = cancer[i];
    }
    cout << "Lowest number found: " << cancer[0] << endl;

    for(int i = 0; i<=49; i++)
        sum+=cancer[i];
    
    cout << "Total of all incidents in the United States as of 1999-2021: " << sum << endl;
    cout << "Average of all incidents: " << sum/50 << endl;
}
