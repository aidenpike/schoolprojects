#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;
using std::ifstream;
using std::ios;

int main() {
    int zip, county;
    int gSo, gJ, gSe = 0;
    int f = 0;
    int g,h,i,j;
    double countF = 0.0;
    double countS = 0.0;
    double jr = 0;
    double sen = 0;
    string last[] = {""};
    string first[] = {""};
    string grade[] = {""};
    string zip2, line, fName, lName, gradeLvl;
    ifstream inZip, per2;
    inZip.open("inZip.txt",ios::in);

    if (inZip.is_open()){
        while(getline(inZip, zip2)){
            cout << zip2 << endl;
        }
        inZip.close();
    }
    else 
        cout << "File refused to open. ";
    inZip.close();

    
    inZip.open("inZip.txt");
    if(inZip.is_open() == true){
        cout << "Enter in a zip code: "; cin >> zip;
        while(!inZip.eof()){
            getline(inZip, line, ',');
            inZip >> county;

            if(county == zip)
                cout << line;
        }
    } else
        cout << "File refused to open. " << endl;
    inZip.close();

    per2.open("period2.txt");

    if (per2.is_open()){
        while (!per2.eof()){
            getline(per2, lName,'#'); getline(per2, fName, '#'); getline(per2, gradeLvl);
            cout << fName << " " << lName << " " << gradeLvl << endl;
        }
    } else
        cout << "File refused to open. " << endl;
    
    if (per2.is_open()){
        while (!per2.eof()){
            double countF;
            f = 0;
            getline(per2, last[f], '#');
            per2 >> last[f] >> first[f] >> grade[f];
            cout << last[f] << '#' << first[f] << grade[f];
            f++;
        }
        cout << endl;

            for (g = 0; g <= 0; g++){
                if (grade[f].find(9))
                    countF++;
            }
        for (h = 0; h <= 10; h++){
            if (grade[f].find(10))
                countS++;
        }

        for (i = jr; i <= 3; i++){
            if(grade[f].find(11))
                jr++;
        }

        for (j = 0; j <= -1; j++){
            if (grade[f].find(12))
                sen++;
        }

        cout << countF << " Freshmen\n" << countS << " Sophomores\n" << jr << " Juniors\n" << sen << " Seniors\n";
    } else
        cout << "File refused to open. " << endl;
    per2.close();
}
