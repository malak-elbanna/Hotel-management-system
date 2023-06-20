#include "Facility.h"
using namespace std;
#include <iostream>
void Facility::facilities()
{
    cout << "The facilities we have: "<<endl<<" \" Note:The reservation fee is paid monthly \" "<<endl;
    cout << "1. Gym" << endl << "2.Transportation" << endl << "3. swimming pool"<<endl;

}
void Facility::orderFacility(FacilityType facilitytype)
{
    switch (facilitytype) {
    case Gym:
        cout << "You booked a month in the gym, The price is 300$ " << endl;
        setPrice(300.0);
        break;
    case Transportation:
        cout << "You booked a month in the transportation, The price is 200$" << endl;
        setPrice(200.0);
        break;
    case swimmingPool:
        cout << "You booked a month in the swimmingpool, The price is 250$" << endl;
        setPrice(250.0);
        break;
    default:
        cout << "Invalid facility type." << endl;
        break;
    }
}
double Facility::getPrice()
{
    return price;
}


void Facility::setPrice(double money)
{
    price = money;
}