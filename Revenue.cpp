#include "Revenue.h"

using namespace std;

Revenue::Revenue(double income, double cost){
	this->income = income;
	this->cost = cost;
}
double Revenue::getIncome() {
	return income;
}
double Revenue::getCost() {
	return cost;
}
void Revenue::setRevenue(double income, double cost) {
	revenue = (income - cost);
}
bool Revenue::getIsProfitable(){
	if (revenue > 0) return true;
	else return false;
}
double Revenue::getRevenue() {
	return revenue;
}