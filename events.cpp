#include "events.h"
using namespace std;

events::events(string event_name, string eventDay) {
    this->event_name = event_name;
    this->eventDay = eventDay;
    this->numberAttendees = 0;
}

void events::set_attend(bool attend) {
    this->attend = attend;
}
//void events::set_registered(bool registered) {
    //this->registered = registered;
//}
void events::set_paid(bool paid) {
    this->paid = paid;
}
string events::get_event_name() {
    return this->event_name;
}
string events::get_event_day() {
    return this->eventDay;
}
bool events::get_attend() {
    return this->attend;
}
bool events::get_registered() {
    return this->registered;
}
bool events::get_paid() {
    return this->paid;
}
void events::payment(bool paid, string guest_name, long int guest_room) {
    if (paid) {
        this->attend = true;
        cout << "Payment completed for the event "<<this->event_name<<endl;
        cout << "The payment is registered for "<<guest_name<<endl;
        cout << "Confirm your attendance at the reception to get your tickets delivered to room "<<guest_room<<endl;
        this->numberAttendees += 1;
        cout << "Now you're number " << this->numberAttendees << " in our event :)"<<endl;
    }
    else {
        this->attend = false;
        cout << "Payment failed for the event "<<this->event_name<<endl;        
    }
}
long int events::getRoom() {
    return getRoomNum();
}