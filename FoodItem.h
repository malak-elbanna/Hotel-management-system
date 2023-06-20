#pragma once
#include <iostream>
#include <string>
#include "payment.h"
using namespace std;
class FoodItem {
private:
	string itemName;
	double price;
public:
	FoodItem(){};
	double getPrice();
	void setPrice(double money);
	void menu();
	enum FoodType {
		Chicken,
		Meat,
		Fish
	};
	void orderFood(FoodType foodType);
};