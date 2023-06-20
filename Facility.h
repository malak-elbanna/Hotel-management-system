#pragma once
#include <string>
using namespace std;
class Facility {
private:
	string Name;
	int price;
public:
	Facility() {};
	void setPrice(double money);
	double getPrice();
	enum FacilityType {
		Gym,
		Transportation,
		swimmingPool
	};
	void facilities();
	void orderFacility(FacilityType facilitytype);
};