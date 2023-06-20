#include "Promotion.h"
#include <iostream>
using namespace std;

Promotion::Promotion() : promotionPercentage(0) {};
double Promotion::PriceAfterPromotion(double promotionPercentage, double price) {
	priceAfterPromotion = price - ((promotionPercentage / 100) * price);
	return priceAfterPromotion;
}
void Promotion::setPercentage(double promotionPercentage) {
	this->promotionPercentage = promotionPercentage;
}
double Promotion::getPercentage() {
	return promotionPercentage;
}
void Promotion::Code(string code) {
    if (code == "A2066L") {
        setPercentage(15.0);
    }
    else if (code == "M2102s") {
        setPercentage(30.0);
    }
    else if (code == "N5121s") {
        setPercentage(20.0);
    }
    else if (code == "A1151s") {
        setPercentage(25.0);
    }
}