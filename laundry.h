#ifndef LAUNDRY_H
#define LAUNDRY_H

#include <string>

using namespace std;

class Laundry {
private:
    bool laundry_need;
    long int room_num;
    bool finished;
    string guest_name;
    bool isExpress;
public:
    void setLaundry_need(bool laundry);
    void setRoom_num(long int room);
    bool isLaundryStaff(bool available);
    bool getLaundry();
    long int getRoom();
    void setFinished(bool finish);
    bool getFinished();
    void setGuest_name(string guest_name);
    string getGuest_name();
    void setExpress(bool isExpress);
    bool getExpress();
};

#endif