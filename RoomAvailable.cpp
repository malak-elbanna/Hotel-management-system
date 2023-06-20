#include "RoomAvailable.h"
using namespace std;

RoomAvailable::RoomAvailable(long int room_number) {
    this->room_number = room_number;
}

bool RoomAvailable::isAvailable() {
    for (int i = 0; i < 15; i++) {
        if (room_number == availableRooms[i]) {
            return true;
        }
    }
    return false;
}
RoomAvailable::RoomAvailable() {};
long int RoomAvailable::getRoomNum() {
    return this->room_number;
}

void RoomAvailable::setRoom(long int room_number) {
    this->room_number = room_number;
}

void RoomAvailable::setType(roomType type) {
    this->type = type;
    if (type == Single) {
        typeRoom = "Single";
        price = 50.0;
    } else if (type == Double) {
        typeRoom = "Double";
        price = 75.0;
    } else if (type == Suite) {
        typeRoom = "Suite";
        price = 150.0;
    }
}

string RoomAvailable::getType() {
    return typeRoom;
}

void RoomAvailable::setView(roomView view) {
    this->view = view;
    if (view == SeaView) {
        viewRoom = "SeaView";
        price += 10.0;
    }
    else if (view == GardenView) {
        viewRoom = "GardenView";
        price += 5.0;
    } 
    else if (view == BayView) {
        viewRoom = "BayView";
        price += 15.0;
    } 
    else if (view == MountainView) {
        viewRoom = "MountainView";
        price += 5.0;
    }
}

string RoomAvailable::getView() {
return viewRoom;
}

double RoomAvailable::getPrice() {
return price;
}