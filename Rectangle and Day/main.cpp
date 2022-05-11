#include <iostream>
#include <algorithm>
#include "Rectangle.h"
#include "Day.h"

using namespace std;

int main() {
    //Rectangle
    double firstLength, firstWidth, secondLength, secondWidth, firstArea, secondArea;
    Rectangle firstRectangle, secondRectangle;
    
    cout << "Enter length and width of the first rectangle: ";
    cin >> firstLength >> firstWidth;

    firstRectangle.assignInfo(firstLength, firstWidth);

    cout << "The area is " << firstRectangle.area(firstLength, firstWidth) << endl
         << "The perimeter is " << firstRectangle.perimeter(firstLength, firstWidth) << endl;
    
    cout << "Enter length and width of the second rectangle: ";
    cin >> secondLength >> secondWidth;

    secondRectangle.assignInfo(secondLength, secondWidth);

    cout << "The area is " << secondRectangle.area(secondLength, secondWidth) << endl
         << "The perimeter is " << secondRectangle.perimeter(secondLength, secondWidth) << endl;
    
    if (firstRectangle.area(firstLength, firstWidth) > secondRectangle.area(secondLength, secondWidth))
        cout << "The first rectangle is bigger." << endl;
    else if (firstRectangle.area(firstLength, firstWidth) < secondRectangle.area(secondLength, secondWidth))
        cout << "The second rectangle is bigger." << endl;
    else if (firstRectangle.area(firstLength, firstWidth) == secondRectangle.area(secondLength, secondWidth))
        cout << "The rectangles are equal.\n" << endl;

    //Day
    Day monday;
    Day wednesday;
    string day;

    day = "Monday";
    monday.assignInfo(day);

    cout << monday.returnDay(day) << endl <<
            monday.prevDay(day)   << endl <<
            monday.nextDay(day)   << endl;

    cout << endl;
    
    day = "Wednesday";
    wednesday.assignInfo(day);

    cout << wednesday.returnDay(day) << endl <<
            wednesday.prevDay(day)   << endl <<
            wednesday.nextDay(day)   << endl;
}
