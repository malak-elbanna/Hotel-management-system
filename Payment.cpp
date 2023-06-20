#include "payment.h"
#include <iostream>
using namespace std;

void payment::setPaymentID(int ID)
{
	paymentID = ID;
}

int payment::getPaymentID()
{
	return paymentID;
}

payment::payment(){}

void payment::setPaymentMethod(const string& paymentMethodd)
{
	paymentMethod = paymentMethodd;
}

string payment::getPaymentMethod()
{
	return paymentMethod;
}