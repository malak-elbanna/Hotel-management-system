#pragma once
#include <string>
using namespace std;
class Promotion
{
private:
	double promotionPercentage, price, priceAfterPromotion;
	string code;
public:
	Promotion();
	double PriceAfterPromotion(double promotionPercentage, double price);
	void setPercentage(double promotionPercentage);
	double getPercentage();
	void Code(string code);
};