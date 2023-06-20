#pragma once

class Revenue
{
private:
	double revenue;
	double income;
	double cost;
	bool isProfitable;
public:
	Revenue(double income, double cost);
	double getIncome();
	double getCost();
	void setRevenue(double income, double cost);
	bool getIsProfitable();
	double getRevenue();
};

