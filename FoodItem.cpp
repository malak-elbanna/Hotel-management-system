#include "FoodItem.h"


double FoodItem::getPrice()
{
    return price;
}


void FoodItem::setPrice(double money)
{
    price = money;
}

void FoodItem::menu() {
	cout << "Food Menu:" << endl;
	cout << "1. Meat" << endl;
	cout << "2. Chicken" << endl;
	cout << "3. Fish" << endl;
}
void FoodItem::orderFood(FoodType foodType)
{
    switch (foodType) {
    case Meat:
        cout << "You ordered meat." << endl;
        setPrice(100.0);
        break;
    case Chicken:
        cout << "You ordered chicken." << endl;
        setPrice(95.0);
        break;
    case Fish:
        cout << "You ordered fish." << endl;
        setPrice(90.0);
        break;
    default:
        cout << "Invalid food type." << endl;
        break;
    }
}