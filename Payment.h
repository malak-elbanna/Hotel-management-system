#pragma once

#include <string>
#include "houseKeeping.h"
using namespace std;
class payment
{
private:
	int paymentID;
	double amount;
	string paymentMethod;
	int total;
public:
	payment();
	//To get the paymentID from the user
	void setPaymentID(int ID);
	int getPaymentID();
	//To ask the user if he will pay in cash or credit card 
	void setPaymentMethod(const string& paymentMethodd);
	string getPaymentMethod();
};
