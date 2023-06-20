#ifndef ROOMAVAILABLE_H
#define ROOMAVAILABLE_H

#include <iostream>
#include<string>
using namespace std;

class RoomAvailable {
    public:

    enum roomType { Single, Double, Suite };
	enum roomView{ SeaView, GardenView, BayView, MountainView };

    RoomAvailable(long int room_number);
    RoomAvailable();
    bool isAvailable();
    void setRoom(long int room_number);
    long int getRoomNum();
    void setType(roomType type);
	string getType();
	double getPrice();
    void setView(roomView view);
	string getView();

    protected:
    long int room_number;
    long int availableRooms[15] = {101, 103, 110, 115, 130, 200, 213, 220, 245, 301, 
    307, 330, 402, 410, 412};
    roomType type;
    string typeRoom;
    roomView view;
    string viewRoom;
    double price;

};

#endif