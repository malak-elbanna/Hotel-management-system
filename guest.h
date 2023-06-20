#pragma once
#include <string>
#include "RoomAvailable.h"
using namespace std;
class guest : public RoomAvailable
{
private:
    string name, contact_num; //contact num is a string to include country code
    long int natID;
public:
    guest();
    void set_name(string n);
    void set_ID(long int nid);
    void set_contactNum(string num);
    string getName();
    string getContactNumber();
    int get_ID();
    long int getRoom();
};

