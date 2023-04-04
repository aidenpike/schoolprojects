#include <iostream>
#include <cmath> 

int main() {
    int length;
    int width;

    //Scenario 1
    std::cout << "Scenario 1: Abduction!\n";
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;

    int area = length * width;

    std::cout << "Your total area is " << area << " and your total perimeter is " << area * 2 << "\n\n";

    //Scenario 2
    double tankCapacity;
    double milePerGallon;

    std::cout << "Scenario 2: Find the right car!\n";
    std::cout << "Enter the capacity of the gas tank in gallons: ";
    std::cin >> tankCapacity;
    std::cout << "Enter the mile per gallon: ";
    std::cin >> milePerGallon; 
    std::cout << "You can drive for " << tankCapacity * milePerGallon << " miles without refueling.\n\n";

    //Scenario 3
    double payRecieved;
    int hoursWorked;
    std::string name;

    std::cout << "Scenario 3: Getting a minimum wage job!\n";
    std::cout << "Input your pay recieved: ";
    std::cin >> payRecieved;
    std::cout << "Enter your hours worked: ";
    std::cin >> hoursWorked;
    std::cin.ignore();
    std::cout << "Input your name: ";
    std::getline(std::cin, name);
    
    if ((payRecieved/hoursWorked) == 1)
        std::cout << name << ", your hourly wage is " << payRecieved/hoursWorked << " dollar an hour.\n\n";
    else
        std::cout << name << ", your hourly wage is " << payRecieved/hoursWorked << " dollars an hour.\n\n";

    //Scenario 4
    double costPerGallon;
    double gallons;
    
    std::cout << "Scenario 4: Buying gas!\n";
    std::cout << "Enter in cost per gallon: ";
    std::cin >> costPerGallon;
    std::cout << "Enter amount of gallons: ";
    std::cin >> gallons;
    std::cout << "Cost: " << costPerGallon * gallons << "\n";
    std::cout << "Rounded Cost: " << round(costPerGallon * gallons) << "\n\n";

    //Scenario 5
    int hours;
    int minutes;
    int seconds;
    
    std::cout << "Scenario 5: IT'S TIME TO DU-DU-DU-DU-DU DUEL!\n";
    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;
    
    int toSeconds = (hours*3600) + (minutes*60) + seconds;
    
    if (toSeconds == 1)
        std::cout << "That is " << toSeconds << " second.\n\n";
    else
        std::cout << "That is " << toSeconds << " seconds.\n\n";

    //Scenario 6
    int actionFigures;
    
    std::cout << "Scenario 6: ...ugh!\n";
    std::cout << "Enter how many Ninja Turtle Action Figures there are: ";
    std::cin >> actionFigures;
    std::cout << "Crates needed: " << actionFigures / 20 << "\nLeftover Turtles: " << actionFigures % 20 << "\n";

    //Scenario 7
    std::cout << "Scenario 7: It's time to go.\n";

    hours = 0;
    minutes = 0;
    seconds = 0;

    std::cout << "Enter in amount of seconds: ";
    std::cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 3600 % 60;

    std::cout << "That is " << hours << " hour(s), " << minutes << " minute(s), and " << seconds << " second(s).\n";
}
