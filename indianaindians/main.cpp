#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    //Variables
    string lastName = " ";
    int pplCt, fCh, fCt, fTot, rCh, rtSt, rtEnd, rtTot, rentAmt, allDay, hrCt, hrCt2, hrTot, hrs = 0;
    char choice = ' ';
    
    //People Count and Last Name Input
    cout << "[---------------------------------]\n" << 
    "[ Customer's Last Name: ";
    cin >> lastName;
    cout << "[ Number of People: ";
    cin >> pplCt;
    cout << "[---------------------------------]\n";
    
    //Food Served
    cout << "Would they like food served [Y or N]: ";
    cin >> choice;
    choice = toupper(choice);

    if (choice == 'Y'){
        cout << "\nFood Choices:\n" << 
        "\t1. Perfect Game\n" <<
        "\t2. Ballpark BBQ\n" <<
        "\t3. Double Play\n" <<
        "\t4. Safe at Third\n" <<
        "\t5. The Lead Off\n\n" <<
        "[1-5]: ";
        cin >> fCh;

        if (fCh > 5 || fCh < 1){
            do {
                cout << "Please enter in a number from 1-5.\n";
                cout << "Food Choices:\n" << 
                "\t1. Perfect Game\n" <<
                "\t2. Ballpark BBQ\n" <<
                "\t3. Double Play\n" <<
                "\t4. Safe at Third\n" <<
                "\t5. The Lead Off\n\n" <<
                "[1-5]: ";
                cin >> fCh;
            } while (fCh > 5 || fCh < 1);
        }

                switch (fCh) {
            case 1:
                fCh = 225;
            break;
            case 2:
                fCh = 120;
            break;
            case 3:
                fCh = 125;
            break;
            case 4:
                fCh = 120;
            break;
            case 5:
                fCh = 100;
            break;
        }
        
        //Food Order Count
        cout << "How many orders of the food (each order serves about 8 people): ";
        cin >> fCt;
        cout << endl;

        fTot = fCh * fCt;
    }
    cout << "[---------------------------------]\n";
    
    //Rental Choice
    cout << "\nRental Choice Facilities:\n" << 
    "\t1. The Cove (seated) - 125 capacity\n" <<
    "\t2. The Cove (non-seated) - 150 capacity\n" << 
    "\t3. The Picnic Area (seated) - 500 capacity\n" << 
    "\t4. The Picnic Area (non-seated) - 1000 capacity\n" <<
    "\t5. The Cove plus Picnic Area (seated) - 625 capacity\n" <<
    "\t6. The Cove plus Picnic Area (non-seated) - 1200 capacity\n" <<
    "[1-6]: ";
    cin >> rCh;

    if (rCh > 6 || rCh < 1){ 
        do {
            cout << "Please enter a number from 1-6.\n";
            cout << "Rental Choice Facilities: " << 
            "\t1. The Cove (seated) - 125 capacity\n" <<
            "\t2. The Cove (non-seated) - 150 capacity\n" << 
            "\t3. The Picnic Area (seated) - 500 capacity\n" << 
            "\t4. The Picnic Area (non-seated) - 1000 capacity\n" <<
            "\t5. The Cove plus Picnic Area (seated) - 625 capacity\n" <<
            "\t6. The Cove plus Picnic Area (non-seated) - 1200 capacity\n" <<
            "[1-6]: ";
            cin >> rCh;
        } while (rCh > 6 || rCh < 1);
    }

    switch (rCh){
        case 1:
            rentAmt = 125;
            allDay = 2000;
            hrCt = 1000;
            hrCt2 = 1500;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 2:
            rentAmt = 150;
            allDay = 2000;
            hrCt = 1000;
            hrCt2 = 1500;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 3:
            rentAmt = 500;
            allDay = 2500;
            hrCt = 1500;
            hrCt2 = 2000;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 4:
            rentAmt = 1000;
            allDay = 2500;
            hrCt = 1500;
            hrCt2 = 2000;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 5:
            rentAmt = 625;
            allDay = 3500;
            hrCt = 2000;
            hrCt2 = 2500;
            hrTot = (hrs - 3) * 750 + hrCt;
    }
    
    while (rentAmt < pplCt){
        cout <<"Party size is too large, please re-enter:\n";
        cout << "\nRental Choice Facilities:\n" << 
    "\t1. The Cove (seated) - 125 capacity\n" <<
    "\t2. The Cove (non-seated) - 150 capacity\n" << 
    "\t3. The Picnic Area (seated) - 500 capacity\n" << 
    "\t4. The Picnic Area (non-seated) - 1000 capacity\n" <<
    "\t5. The Cove plus Picnic Area (seated) - 625 capacity\n" <<
    "\t6. The Cove plus Picnic Area (non-seated) - 1200 capacity\n" <<
    "[1-6]: ";
        cin >> rCh;
        
        switch (rCh){
        case 1:
            rentAmt = 125;
            allDay = 2000;
            hrCt = 1000;
            hrCt2 = 1500;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 2:
            rentAmt = 150;
            allDay = 2000;
            hrCt = 1000;
            hrCt2 = 1500;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 3:
            rentAmt = 500;
            allDay = 2500;
            hrCt = 1500;
            hrCt2 = 2000;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 4:
            rentAmt = 1000;
            allDay = 2500;
            hrCt = 1500;
            hrCt2 = 2000;
            hrTot = (hrs - 3) * 500 + hrCt;
        case 5:
            rentAmt = 625;
            allDay = 3500;
            hrCt = 2000;
            hrCt2 = 2500;
            hrTot = (hrs - 3) * 750 + hrCt;    
    }
    cout << "Your party is able to be seated." << endl;
    
    cout << "[---------------------------------]\n";
        
    cout << "Do they want the space for all day? [Y or N]: ";
    cin >> choice;
    choice = toupper(choice);

    while (choice != 'Y' && choice != 'N'){
        cout << "Invalid answer, try again.";
        cout << "Do they want the space for all day? [Y or N]: ";
    cin >> choice;
    choice = toupper(choice);
    } 
        
    if (choice == 'N'){
        cout << "Rental Time Start (military format – can only start/stop on the hour): ";
        cin >> rtSt;
        cout << "Rental Time Stop (military format – can only start/stop on the hour): ";
        cin >> rtEnd;
    }
    cout << "\n[---------------------------------]\n";

    //Day Requested
    choice = ' ';
    cout << "Is the day requested for the rental on a Monday, Tuesday, Wednesday, Thursday [Y or N]: ";
    cin >> choice;    
    choice = toupper(choice);

    if (choice != 'Y' && choice == 'N'){
        do {
            cout << "Please enter Y or N.\n";
            cout << "Is the day requested for the rental on a Monday, Tuesday, Wednesday, Thursday [Y or N]: ";
            cin >> choice;    
            choice = toupper(choice);
        } while (choice != 'Y' && choice == 'N');
    }

    if (choice == 'Y')
        
    cout << "\n[---------------------------------]\n";
}  
