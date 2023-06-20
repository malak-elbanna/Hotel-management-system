#ifndef EVENTS_H
#define EVENTS_H

#include<iostream>
#include<string>
#include "RoomAvailable.h"
using namespace std;

class events : public RoomAvailable
{
    private:
    string event_name;
    string eventDay;
    bool attend;
    bool registered;
    bool paid;
    int numberAttendees;

    public:
    events(string event_name, string eventDay);
    void set_attend(bool attend);
    void set_paid(bool paid);
    bool get_attend();
    bool get_registered();
    bool get_paid();
    long int getRoom();
    string get_event_name();
    string get_event_day();
    void payment(bool paid, string guest_name, long int guest_room);
};

#endif