#include "payment.h"
#include "houseKeeping.h"
//#include "FoodItem.h"
using namespace std;
#include <iostream>
#include <string>
int main() {
	int amountt;
	int id;
	string method;
	payment person;
	houseKeeping person1;
	string need;
	int num;
	int tota;
//To check if the user entered negative amount
	do {
		cout << "enter the amount ";
		cin >> amountt;
	} while (amountt < 0);
	person.setAmount(amountt);
	cout << "enter the paymentID ";
	cin >> id;
	person.setPaymentID(id);
	cout << "enter payment Method to complete the process , cash or credit card ";
	cin >> method;
	person.setPaymentMethod(method);
	cout<<"The payment amount = " << person.getAmount() << endl << "The ID = " << person.getPaymentID() << endl << "The Method is:" << person.getPaymentMethod()<<endl;
	cout << "Do you want the house keeping (yes/no)?" << endl;
	cin >> need;
	person1.setHouseKeepingNeed(need);
	bool check = person1.getHouseKeeping();
	if (check == true) {
		cout << "enter the room number";
		cin >> num;
		person1.setRoomNumber(num);
		person1.getRoomNumber();
		person1.displayCost();
	}
	tota = person.getAmount() + person1.getCost();
	cout << "The total amount to pay = " << endl <<tota;
}