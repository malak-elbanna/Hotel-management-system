#pragma once
using namespace std;
#include <string>
class staff
{
private:
    long int staffID;
    string name;
    string position;
    double salary;
    string section;
public:
    staff();
    int getID();
    string getName();
    string getPosition();
    double getSalary();
    string getSection();
    void setID(long int ID);
    void setName(string n);
    void setPosition(string p);
    void setSalary(double s);
    void setSection(string s);
};

