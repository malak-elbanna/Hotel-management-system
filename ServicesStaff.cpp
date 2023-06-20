#include "ServicesStaff.h"
#include <iostream>

ServicesStaff::ServicesStaff(string name, string jobTitle, string employeeID)
        : name(name), jobTitle(jobTitle), employeeID(employeeID), busy(false), hourlyRate(20.0), roomNumber(0) {}

void ServicesStaff::addTask(string task) {
    tasks.push_back(task);
}

void ServicesStaff::displayTasks() {
    cout << "Tasks for " << name << ":" << endl;
    for (const auto& task : tasks) {
        cout << "- " << task << endl;
    }
}

void ServicesStaff::displayCost() {
    double cost = tasks.size() * hourlyRate;
    cout << "Total cost for " << name << " is " << cost << " EGP" << endl;
}

bool ServicesStaff::isBusy() {
    return busy;
}

void ServicesStaff::setBusy(bool busy) {
    this->busy = busy;
}

string ServicesStaff::getJobTitle() {
    return jobTitle;
}

void ServicesStaff::setRoomNumber(int roomNumber) {
    this->roomNumber = roomNumber;
}