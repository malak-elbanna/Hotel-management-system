#include "houseKeeping.h"
using namespace std;
#include <iostream>
houseKeeping::houseKeeping()
{
}
void houseKeeping::setHouseKeepingNeed(string need)
{
	if (need == "yes" || need == "Yes" || need == "YES" ) {
		HouseKeepingNeed = true;
	}
	else {
		HouseKeepingNeed = false;
	}
}

bool houseKeeping::getHouseKeeping()
{
	return HouseKeepingNeed;
}

int houseKeeping::getRoomNumber()
{
	return RoomNumber;
}
void houseKeeping::setRoomNumber(int number)
{
	RoomNumber = number;
}

void houseKeeping::displayCost()
{
	cost = 20;
	cout << "\"the cost per 1 time = 20$\"" << endl;
}

int houseKeeping::getCost()
{
	return cost;
}
