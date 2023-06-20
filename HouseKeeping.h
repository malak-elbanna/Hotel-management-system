#pragma once
#include <string>
using namespace std;
class houseKeeping
{
protected:
	int RoomNumber;
	double cost;
	bool HouseKeepingNeed;
public:
	houseKeeping();
	//To check if you need the house keeping or not 
	void setHouseKeepingNeed(string need);
	bool getHouseKeeping();
	//return the room number
	int getRoomNumber();
	void setRoomNumber(int number);
	//to display the cost of house keeping
	void displayCost();
	//to get the cost to add it in the payment
	int getCost();
};

