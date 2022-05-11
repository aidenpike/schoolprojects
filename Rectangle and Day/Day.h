#include <iostream>

using namespace std;

class Day {
    public: 
        Day();
        void assignInfo(string);
        string returnDay(string);
        string nextDay(string);
        string prevDay(string);

    private:
        string dayofWeek;
};

Day::Day(){
    string dayofWeek;
}

void Day::assignInfo(string day){
    dayofWeek = day;
    
    returnDay(day);
    nextDay(day);
    prevDay(day);
}

string Day::returnDay(string day){
    return "The day is " + day;
}

string Day::nextDay(string day){
    if (day == "Monday")
        return "Tomorrow is Tuesday";
    else if (day == "Wednesday")
        return "Tomorrow is Thursday";
    return 0;
}

string Day::prevDay(string day){
    if (day == "Monday")
        return "Yesterday was Sunday";
    else if (day == "Wednesday")
        return "Yesterday was Tuesday";
    return 0;
}
