#include <iostream>

using namespace std;

//Declaration Section
class Dragon {
    public:
        Dragon();
        void assignInfo(string, int);
        void breathFire(string);
        void fly();
        void kill();
        int returnWeight(int);
        void summonLightning();

    private:
        string dragonName;
        int dragonWeight;
};

//Implentation Section
Dragon::Dragon(){
    dragonName = "";
    dragonWeight = 0;
    
    cout << "A dragon is born!" << endl;
}

void Dragon::assignInfo(string drName, int drWeight){
    dragonName = drName;
    dragonWeight = drWeight;
    
    cout << "What is the dragon's name? ";
    getline(cin, drName);
    cout << "And what is its weight? ";
    cin >> drWeight;

    breathFire(drName);
}

void Dragon::breathFire(string drName){
    cout << drName << " unleashed its fire!" << endl;
}

int Dragon::returnWeight(int drWeight){
    return drWeight;
}
