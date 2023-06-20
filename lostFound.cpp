#include "lostFound.h"

#include <iostream>
#include <string>

using namespace std;

lostFound::lostFound() {};

bool lostFound::isLost() {
    return lost;
}

void lostFound::setLost(bool isLost) {
    lost = isLost;
}

bool lostFound::isFound() {
    return found;
}

void lostFound::setFound(bool isFound) {
    found = isFound;
}

int lostFound::getLostItemsCount() {
    return lostItemsCount;
}

void lostFound::setLostItemsCount(int count) {
    lostItemsCount = count;
}

string lostFound::getLostType() {
    return lostType;
}

void lostFound::setLostType(string type) {
    lostType = type;
}
string lostFound::getLostName() {
    return lostName;
}

void lostFound::setLostName(string name) {
    lostName = name;
}

string lostFound::getDayAvailable() {
    return dayAvailable;
}

void lostFound::setDayAvailable(string day) {
    dayAvailable = day;
}

string lostFound::getGuestName() {
    return guestName;
}

void lostFound::setGuestName(string name) {
    guestName = name;
}

long int lostFound::getRoomNumber() {
    return roomNumber;
}

void lostFound::setRoomNumber(long int room) {
    roomNumber = room;
}

void lostFound::display() {
    cout << "Lost and Found Item:" << endl;
    cout << "---------------------" << endl;
    cout << "Lost: " << (lost ? "Yes" : "No") << endl;
    cout << "Found: " << (found ? "Yes" : "No") << endl;
    cout << "Lost Items Count: " << lostItemsCount << endl;
    cout << "Lost Type: " << lostType << endl;
    cout << "Lost Name: " << lostName << endl;
    cout << "Day Available: " << dayAvailable << endl;
    cout << "Guest Name: " << guestName << endl;
    cout << "Room Number: " << getRoomNumber() << endl;
}

void lostFound::reportLost(string name, string type, int count, string guest, long int room) {
    lost = true;
    found = false;
    lostName = name;
    lostType = type;
    lostItemsCount = count;
    guestName = guest;
    roomNumber = room;
    cout << "Lost item reported: " << name << endl;
}

void lostFound::reportFound(string name, string type, string day) {
    found = true;
    lost = false;
    lostName = name;
    lostType = type;
    dayAvailable = day;
    cout << "Found item reported: " << name << endl;
}

void lostFound::returnLost() {
    if (lost && !found) {
        lost = false;
        lostName = "";
        lostType = "";
        lostItemsCount = 0;
        guestName = "";
        roomNumber = 0;
        cout << "Lost item returned" << endl;
    }
    else {
        cout << "This item is not lost or has already been found" <<endl;
    }
}

void lostFound::claimFound(string guest, long int room) {
    if (found && !lost) {
        found = false;
        guestName = guest;
        roomNumber = room;
        cout << "Found item claimed by " << guest << endl;
    }
    else {
        cout << "This item is not found or has already been claimed" << endl;
    }
}