#include <iostream>

#include "lostFound.h"

using namespace std;

int main() {
    lostFound item;

    cout << "Enter information about the lost item(s):" << endl;
    string lostName, lostType, guestName;
    int lostItemsCount;
    long int roomNumber;

    cout << "Number of lost items: ";
    cin >> lostItemsCount;


    for (int i = 0; i < lostItemsCount; i++) {
        cout << "Item " << i+1 << " Name: ";
        cin.ignore();
        getline(cin, lostName);
        cout << "Item " << i+1 << " Type: ";
        getline(cin, lostType);
        cout << "Item " << i+1 << " Guest Name: ";
        getline(cin, guestName);
        cout << "Item " << i+1 << " Room Number: ";
        cin >> roomNumber;
        cout << endl;

        item.reportLost(lostName, lostType, 1, guestName, roomNumber);
        cout << endl;

        cout << "Searching for the found item..." << endl;
        cout << "================================================================" <<endl;
        item.returnLost(); cout << endl;
        cout << "Enter the day available for pickup: ";
        string foundName = lostName, foundType = lostType, dayAvailable; 
        cin >> dayAvailable;
        item.reportFound(foundName, foundType, dayAvailable);
        item.display(); cout << endl;

    }


    cout << "Enter information about claiming the found item/s:" << endl;
    string claimGuestName;
    long int claimRoomNumber;
    cout << "Guest Name: ";
    cin.ignore();
    getline(cin, claimGuestName);
    cout << "Room Number: ";
    cin >> claimRoomNumber;

    item.claimFound(claimGuestName, claimRoomNumber);cout<<endl;
    return 0;
}