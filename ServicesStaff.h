#pragma once
#include <string>
#include <vector>

using namespace std;

class ServicesStaff {

    private:
    string name;
    string jobTitle;
    string employeeID;
    vector<string> tasks;
    bool busy;
    double hourlyRate;
    int roomNumber;

    public:
    ServicesStaff(string name, string jobTitle, string employeeID);
    void addTask(string task);
    void displayTasks();
    void displayCost();
    bool isBusy();
    void setBusy(bool busy);
    string getJobTitle();
    void setRoomNumber(int roomNumber);
};