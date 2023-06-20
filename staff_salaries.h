#pragma once
using namespace std;
class staff_salaries
{
private:
	double bonus, tax, gross, net;
public:
	double get_bonus();
	double get_tax();
	double get_gross();
	double get_net();
	void set_bonus(double b);
	void set_tax(double t);
	void set_gross(double g);
	void set_net(double n);
	staff_salaries();
	

};
