#pragma once
class Room
{
private:
	long int roomNumber;
	enum roomType { Single, Double, Suite };
	enum roomView{ SeaView, GardenView, BayView, MountainView };
	double price;
public:
	Room();
	long int getRoomNumber();
	roomType setType();
	roomType getType();
	double getPrice();
	roomView getView();
};

