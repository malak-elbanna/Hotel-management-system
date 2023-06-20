#include "staff.h"

staff::staff() {};
void staff::setSalary(double s)
{
	salary = s;
}

void staff::setSection(string s)
{
	section = s;
}

int staff::getID()
{
	return staffID;
}

string staff::getName()
{
	return name;
}

string staff::getPosition()
{
	return position;
}

double staff::getSalary()
{
	return salary;
}

string staff::getSection()
{
	return section;
}

void staff::setID(long int ID)
{
	staffID = ID;
}

void staff::setName(string n)
{
	name = n;
}

void staff::setPosition(string p)
{
	position = p;
}
