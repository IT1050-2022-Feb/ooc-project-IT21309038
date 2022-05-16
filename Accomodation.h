#pragma once 
#include <iostream> 
#include <string> 
#include "Trip.h" 
using namespace std;

class Accomodation : public Trip {
private:
    string foodType;
    int guestCount;
    string duration;
public:
    void setValues(string date, string type, int count, string time)
    {
        reserveDate = date;
        foodType = type;
        guestCount = count;
        duration = time;
    }
    void displayAccomodation()
    {
        cout << "******************************************************************************************************" << endl;
        cout << "Trip sheduled on" << reserveDate << "your accomodation details will be" << endl;
        cout << "You choosed food type : " << foodType << endl;  	 	cout << "For " << guestCount << " person" << endl;
        cout << "The days of trip will be : " << duration << endl;
        cout << "******************************************************************************************************" << endl;
    }
};

