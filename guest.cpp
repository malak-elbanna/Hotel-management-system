#include "guest.h"
using namespace std;

guest::guest() {};
void guest::set_name(string n)
{
	name = n;
}

void guest::set_ID(long int nid)
{
	natID = nid;
}

void guest::set_contactNum(string num)
{
	contact_num = num;
}

string guest::getName()
{
	return name;
}

string guest::getContactNumber()
{
	return contact_num;
}

int guest::get_ID()
{
	return natID;
}
long int guest::getRoom() {
 	return getRoomNum();
} 