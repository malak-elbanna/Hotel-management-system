#include "laundry.h"
using namespace std;

void Laundry::setLaundry_need(bool laundry) {
    laundry_need = laundry;
}

void Laundry::setRoom_num(long int room) {
    room_num = room;
}

bool Laundry::getLaundry() {
    return laundry_need;
}

long int Laundry::getRoom() {
    return this->room_num;
}

void Laundry::setFinished(bool finish) {
    finished = finish;
}

bool Laundry::getFinished() {
    return finished;
}

void Laundry::setGuest_name(string guest_name) {
    this->guest_name = guest_name;
}

std::string Laundry::getGuest_name() {
    return guest_name;
}

void Laundry::setExpress(bool isExpress) {
    this->isExpress = isExpress;
}

bool Laundry::getExpress() {
    return isExpress;
}

bool Laundry::isLaundryStaff(bool available) {
    return available;
}