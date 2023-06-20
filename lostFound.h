#pragma once
#include <string>

using namespace std;

class lostFound {
private:
    bool lost;
    bool found;
    int lostItemsCount;
    string lostType;
    string lostName;
    string dayAvailable;
    string guestName;
    long int roomNumber;

    public:
    lostFound();
    bool isLost();
    void setLost(bool isLost);
    bool isFound();
    void setFound(bool isFound);
    int getLostItemsCount();
    void setLostItemsCount(int count);
    string getLostType();
    void setLostType(string type);
    string getLostName();
    void setLostName(string name);
    string getDayAvailable();
    void setDayAvailable(string day);
    string getGuestName();
    void setGuestName(string name);
    long int getRoomNumber();
    void setRoomNumber(long int room);
    void display();
    void reportLost(string name, string type, int count, string guest_name, long int room);
    void reportFound(string name, string type, string day);
    void returnLost();
    void claimFound(string guest, long int room);
};
