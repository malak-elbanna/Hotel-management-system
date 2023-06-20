#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

#include "Review.h"
#include "RoomAvailable.h"
#include "events.h"
#include "Revenue.h"
#include "laundry.h"
#include "HouseKeeping.h"
#include "Payment.h"
#include "guest.h"
#include "staff.h"
#include "staff_attendance.h"
#include "staff_salaries.h"
#include "lostFound.h"
#include "FoodItem.h"
#include "Facility.h"
#include "ServicesStaff.h"
#include "Promotion.h"


using namespace std;


// This function reads employee data from a file with the given filename and returns a vector of ServicesStaff objects that represent the employees.
vector<ServicesStaff> readEmployeeData(string filename) {
    // Declare an empty vector that will store the ServicesStaff objects representing the employees.
    vector<ServicesStaff> employees;
    // Create an input file stream and open the file with the given filename.
    ifstream file(filename);

    // Check if the file was successfully opened.
    if (file) {
        string line;

        // Read each line of the file into a string variable.
        while (getline(file, line)) {
            // Create a stringstream object and initialize it with the contents of the line string.
            stringstream ss(line);

            // Declare variables for the employee's name, job title, and ID, and read each comma-separated value from the stringstream into separate variables.
            string name, jobTitle, employeeID;
            getline(ss, name, ',');
            getline(ss, employeeID, ',');
            getline(ss, jobTitle, ',');

            // Create a new ServicesStaff object using the values of the name, job title, and ID variables, and add it to the end of the employees vector.
            employees.push_back(ServicesStaff(name, jobTitle, employeeID));
        }
        file.close();
    }
    return employees;
}

void guestHotel() {
    // Room availability
    long int room_number;
    bool room_found = false;

    // Create a RoomAvailable object to check room availability until a room is found.
    RoomAvailable room;
    while (!room_found) {
        // Prompt the user to enter the room number they want to book.
        cout << "Enter the number of the room you want to book: ";
        cin >> room_number;
        cout << endl;

        // Set the room number in the RoomAvailable object and check if it's available.
        room.setRoom(room_number);
        if (room.isAvailable()) {
            // If the room is available, prompt the user to enter the room type and view, set these in the RoomAvailable object, and display the room details.
            int roomType;
            cout << "Enter the room type (0 for Single, 1 for Double, 2 for Suite): ";
            cin >> roomType;
            room.setType(static_cast<RoomAvailable::roomType>(roomType));

            int roomView;
            cout << "Enter the room view (0 for SeaView, 1 for GardenView, 2 for BayView, 3 for MountainView): ";
            cin >> roomView;
            room.setView(static_cast<RoomAvailable::roomView>(roomView));

            cout << "The room " << room_number << " is available for booking!" << endl;
            cout << "Details:" << endl;
            cout << "Type: " << room.getType() << endl;
            cout << "View: " << room.getView() << endl;
            cout << "Price: " << room.getPrice() << endl;

            // Set the room number in the RoomAvailable object and indicate that a room has been found.
            room.setRoom(room_number);
            room_found = true;
        }
        else {
            // If the room is not available, display a message and prompt the user to enter another room number.
            cout << "Sorry! This room isn't available" << endl;
        }
    }

    // guest info
    string guest_name, contact_num;
    long int natID;

    // Create a guest object to store guest information.
    guest guest1;

    // Prompt the user to enter the guest's name, contact number, and ID, and set these in the guest object.
    cout << "Enter the guest's name: ";
    cin >> guest_name;
    cout << "Enter the guest's contact number: ";
    cin >> contact_num;
    cout << "Enter the guest's ID: ";
    cin >> natID;

    guest1.set_name(guest_name);
    guest1.set_contactNum(contact_num);
    guest1.set_ID(natID);

    // Display the guest's information and the room number they booked.
    cout << endl << "Here is your info ......" << endl;
    cout << endl << "Guest Name: " << guest1.getName() << endl << "Contact Number: " << guest1.getContactNumber() << endl <<
        "Guest ID: " << guest1.get_ID() << endl << "Guest Room: " << room.getRoomNum() << endl;

    //Promotions
    string promo;

    // Prompt the user to enter whether they have a promotion code.
    cout << "Do you have a promotion code? (yes/no)";
    cin >> promo;
    
    // If the user has a promotion code, create a Promotion object and prompt the user to enter their code.
    if (promo == "yes") {
        Promotion person5;
        string promoCode;
        cin >> promoCode;

        // Check the promo code and display the discount percentage.
        if (promoCode == "A2066L") {
            person5.Code(promoCode);
            cout << "Your code is A2066L with a " << person5.getPercentage() << "% OFF"<<endl;
        }
        else if (promoCode == "M2102s") {
            person5.Code(promoCode);
            cout << "Your code is M2102s with a " << person5.getPercentage() << "% OFF" << endl;
        }
        else if (promoCode == "N5121s") {
            person5.Code(promoCode);
            cout << "Your code is N5121s with a " << person5.getPercentage() << "% OFF" << endl;
        }
        else if (promoCode == "A1151s") {
            person5.Code(promoCode);
            cout << "Your code is A1151s with a " << person5.getPercentage() << "% OFF" << endl;
        }
        else {
            cout << "The code is invalid." << endl;
        }
        double percent;
        double price_After_code;
        percent = person5.getPercentage();
        price_After_code = person5.PriceAfterPromotion(percent, room.getPrice());//cost of the room)
    }

    // payment
    int amountt;
	int id;
	string method;
	payment person;

    // Prompt the user to enter the payment ID and method, and set these in a payment object.
    cout << "\nEnter the paymentID ";
	cin >> id;
	person.setPaymentID(id);
	cout << "\nEnter payment Method to complete the process , cash or creditcard ";
	cin>>method;
	person.setPaymentMethod(method);
	cout<< endl << "The ID = " << person.getPaymentID() << endl << "The Method is: " << person.getPaymentMethod()<<endl;

    vector<ServicesStaff> employees = readEmployeeData("employees.txt");
    // housekeeping 
    houseKeeping person1;
	string need;
	int num;
	int tota;

    // Prompt the user to enter whether they want housekeeping and set this in a houseKeeping object.
    cout << "Do you want the house keeping (yes/no)?" << endl;
	cin >> need;
	person1.setHouseKeepingNeed(need);
	bool check = person1.getHouseKeeping();

    // If the user wants housekeeping, prompt them to enter the room number and assign a housekeeper to the task.
	if (check == true) {
		cout << "enter the room number: ";
		cin >> num;

		
        bool foundHousekeeper = false;
        // Iterate through the employees to find an available housekeeper and assign the task to them.
        for (ServicesStaff& employee : employees) {
            if (employee.getJobTitle() == "Housekeeper" && !employee.isBusy()) {
                employee.addTask("Housekeeping for room " + to_string(num)); 
                employee.setRoomNumber(num);
                employee.displayCost();
                employee.setBusy(true);
                foundHousekeeper = true;
                break;
            }
        }

        // If no housekeepers are available, inform the user.
        if (!foundHousekeeper) {
            cout << "Sorry, no housekeepers are available at the moment." << endl;
        }
	}

    // laundry

    Laundry laundry;
    laundry.isLaundryStaff(true);
    string laundry_need;

    // Prompt the user to enter whether they want laundry and set this in a Laundry object.
    cout << "Do you need laundry today?(Y/N)  ";
    cin >> laundry_need; cout << endl;
    if (laundry_need == "Y" || laundry_need == "y") {
        laundry.setLaundry_need(true);

    
        bool foundLaundryAttendant = false;
        // Iterate through the employees to find an available laundryattendant and assign the task to them.
        for (ServicesStaff& employee : employees) {
            if (employee.getJobTitle() == "Laundry" && !employee.isBusy()) {
                employee.addTask("Laundry for room " + to_string(room.getRoomNum())); 
                employee.setRoomNumber(laundry.getRoom());
                employee.displayCost();
                employee.setBusy(true);
                foundLaundryAttendant = true;
                break;
            }
        }

        // Prompt the user to enter whether they want express service and set this in the Laundry object.
        string express;
        cout << "Do you want to use the express service?(Y/N)  ";
        cin >> express; cout << endl;
        if (express == "Y" || express == "y") laundry.setExpress(true);
        else laundry.setExpress(false);

        // display laundry ticket info
        cout << "Room " << room.getRoomNum() << " laundry status: "
            << (laundry.getLaundry() ? "Needed" : "Not Needed") << endl;
        cout << "Guest name: " << guest1.getName() << endl;
        cout << "Laundry is " << (laundry.getFinished() ? "Finished" : "Not Finished") << endl;
        cout << "Express: " << (laundry.getExpress() ? "Yes" : "No") << endl;
        cout << "\n\nThank you for using our laundry service!" << endl;

        // If no laundry attendants are available, inform the user.
        if (!foundLaundryAttendant) {
            cout <<"Sorry, no laundry attendants are available at the moment." << endl;
        }

    }
    else {
        laundry.setLaundry_need(false);
        cout << "\nRemeber that we are always available" << endl;
    }

    // events

    cout << "\nEvent Registration\n";
    events new_year("New Year Party", "Friday");
    string registered_str, paid_str;
    bool registered, paid;
    cout << "\nPlease enter your name: ";
    cin >> guest_name; cout << endl;
    long int guest_room = room.getRoomNum();

    cout << "Did you register for our New Year's Party? ";
    cin >> registered_str; cout << endl;
    if (registered_str == "yes") {
        registered = true;
    } else if (registered_str == "no") {
        registered = false;
        cout << "If you want to attend, register for the event either on our website or by going to the reception"<<endl;
        cout << "Do you want to register now? ";
        string response;
        cin >> response;
        if (response == "yes") {
            registered = true;
        } else if (response == "no") {
            registered = false;
            cout << "You can't attend the event without registering." << endl;
            
        } else {
            cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
            
        }
    } else {
        cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
    }
    if (registered) {
        cout << "Did you pay the fees? ";
        cin >> paid_str; cout << endl;
        if (paid_str == "yes") {
            paid = true;
        } else if (paid_str == "no") {
            paid = false;
        } else {
            cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
        }
        new_year.payment(paid, guest_name, guest_room);
    }

    // food items

    int wantFood;
    cout << "Do you want any of our special food options?(yes=1, no=0) ";
    cin >> wantFood;
    FoodItem person3;
    double price;

    if (wantFood == 1) {
        person3.menu();
        int itemChoice;
        cout << "\nEnter your choice 1 , 2 or 3: ";
        cin >> itemChoice;
        switch (itemChoice) {
        case 1:
            person3.orderFood(FoodItem::Meat);
            break;
        case 2:
            person3.orderFood(FoodItem::Chicken);
            break;
        case 3:
            person3.orderFood(FoodItem::Fish);
            break;
        default:
            cout << "\nInvalid choice." << endl;
            break;
        }
        price = person3.getPrice();
        cout << "\nThe price of your order is: " << price << " EGP" << endl;
    }
    else cout << "\nHope you try it soon!" << endl;

    // hotel facilities
    //Facilities
	Facility person4;
	person4.facilities();
	int itemChoice2;
	cout << "\nEnter your choice 1 , 2 or 3";
	cin >> itemChoice2;
	switch (itemChoice2) {
	case 1:
		person4.orderFacility(Facility::Gym);
		break;
	case 2:
		person4.orderFacility(Facility::Transportation);
		break;
	case 3:
		person4.orderFacility(Facility::swimmingPool);
		break;
	default:
		cout << "\nInvalid choice." << endl;
		break;
	}
	double price2 = person4.getPrice();
	//payment
	tota =  person1.getCost() + price + price2 + room.getPrice();
	cout << "\nThe total amount to pay = " << tota;

    // Lost and found
    int lost1;
    cout << "\nDid you lose any of your stuff in our hotel?(yes=1, no =0) " << endl;
    cin >> lost1; cout << endl;

    if (lost1 == 1) {
        lostFound item;

        cout << "Enter information about the lost item(s):" << endl;
        string lostName, lostType, guestName;
        int lostItemsCount;
        long int roomNumber;

        cout << "Number of lost items: ";
        cin >> lostItemsCount;


        for (int i = 0; i < lostItemsCount; i++) {
                cout << "Item " << i+1 << " Name: ";
                cin.ignore();
                getline(cin, lostName);
                cout << "Item " << i+1 << " Type: ";
                getline(cin, lostType);
                cout << "Item " << i+1 << " Guest Name: ";
                getline(cin, guestName);
                cout << "Item " << i+1 << " Room Number: ";
                cin >> roomNumber;
                cout << endl;

                item.reportLost(lostName, lostType, 1, guestName, roomNumber);
                cout << endl;

                cout << "Searching for the found item..." << endl;
                cout << "================================================================" <<endl;
                item.returnLost(); cout << endl;
                cout << "Enter the day available for pickup: ";
                string foundName = lostName, foundType = lostType, dayAvailable; 
                cin >> dayAvailable;
                item.reportFound(foundName, foundType, dayAvailable);
                item.display(); cout << endl;

            }


        cout << "Enter information about claiming the found item/s:" << endl;
        string claimGuestName;
        long int claimRoomNumber;
        cout << "Guest Name: ";
        cin.ignore();
        getline(cin, claimGuestName);
        cout << "Room Number: ";
        cin >> claimRoomNumber;

        item.claimFound(claimGuestName, claimRoomNumber);cout<<endl;
    }
    else cout << "Remeber that we're always here for you!" << endl;

    // review
    int checkout;
    cout << "Do you want to checkout?(yes=1, no=0) " << endl;
    cin >> checkout; cout << endl;
    
    if (checkout == 1) {
        cout << "\nWe hope you enjoyed our services! We want to hear from you so that we can improve in the future.\n";
        int wantReview;
        cout << "\nDo you want to provide a review for our hotel?(yes=1,no=0) ";
        cin >> wantReview; cout <<endl;
        
        if (wantReview == 1) {
            Review review1;
            long int reviewID=1, bookingID;
            int rating;
            string reviewText;
            cout << "\nPlease enter you booking id: ";
            cin >> bookingID;
            cout << "\nPlease enter you rating out of 5: ";
            cin >> rating;
            cout << "\nPlease enter you review in text: ";
           cin.ignore();
            getline(cin, reviewText);
            review1.setRating(rating);
            review1.setReviewID(reviewID);
            review1.setReview(reviewText);
            review1.setBookingID(bookingID);

            // Open the file for appending
            ofstream outFile("reviews.txt", ios::app);

            // Write the employee data to the file
            outFile << review1.getRating() << ","
                    << review1.getReviewID() << ","
                    << review1.getReview() << ","
                    << review1.getBookingID() << "," <<endl;

            // Close the file
            outFile.close();

            cout << "\nThank you! Your feedback is valuable and it's in full consideration.";
            cout << "\n----------------------------------------------------------------";

            cout << "\n\nThank you for choosing our hotel! Hope to see you here soon :)";
        }
        else cout << "\n\nThank you for choosing our hotel! Hope to see you here soon :)";
    }
    else cout << "\nWe are happy you decided to stay with us longer :)";

}

void head() {

    int numOfEmployees;
    cout << "Good Day!\n How many employees are in the hotel? ";
    cin >> numOfEmployees; cout << endl;

    // staff
    for (int i = 0; i < numOfEmployees; i++) {
        staff employee;
        string name, position, section;
        long int staffID;
        double salary;

        cout << "\nPlease enter employee's name:" << endl;
        cin >> name;
        cout << "Please enter employee's position:" << endl;
        cin >> position;
        cout << "Please enter employee's section:" << endl;
        cin >> section;
        cout << "Please enter their salary:" << endl;
        cin >> salary;
        cout << "Please enter their ID:" << endl;
        cin >> staffID;

        employee.setName(name);
        employee.setID(staffID);
        employee.setPosition(position);
        employee.setSection(section);
        employee.setSalary(salary);

        // Open the file for appending
        ofstream outFile("employees.txt", ios::app);

        // Write the employee data to the file
        outFile << employee.getName() << ","
                << employee.getID() << ","
                << employee.getPosition() << ","
                << employee.getSection() << ","
                << employee.getSalary() << endl;

    
        cout << "\n----------------------------------------------------------------";
        cout << "\n\nEmployee's name:" << employee.getName() << endl;
        cout << "ID:" << employee.getID() << endl;
        cout << "Position:"<<employee.getPosition() << endl;
        cout << "Section:" << employee.getSection() << endl;
        cout << "Salary:" << employee.getSalary() << endl;

        // staff salaries
        double bonus, tax, gross, net;


        cout << "\n\nPlease enter gross salary:" << endl;
        cin >> gross;
        cout << "Please enter tax: " << endl;
        cin >> tax;
        cout << "Please enter bonus amount:" << endl;
        cin >> bonus;

        net = gross + bonus - tax;

        staff_salaries salary1;

        salary1.set_gross(gross);
        salary1.set_tax(tax);
        salary1.set_gross(bonus);
        salary1.set_gross(net);

        // Write the employee salary to the file
                outFile << gross << ","
                        << tax << ","
                        << bonus << ","
                        << bonus << ","
                        << net << endl;

        cout << "\n----------------------------------------------------------------";
        cout << "\n\nEmployee's gross salary: " << gross << endl;
        cout << "Employee's tax amount: " << tax << endl;
        cout << "Employee's bonus amount: " << bonus << endl;
        cout << "Employee's net salary: " << net << endl;

        // staff attendance
        staff_attendance a1;
        int attended, abscent, overtime;
        cout << "\n----------------------------------------------------------------";
        cout << "\n Please enter number of days attended:"<<endl;
        cin >> attended;
        cout << "Please enter number of abscence:" << endl;
        cin >> abscent;
        cout << "Please enter number of days worked overtime:" << endl;
        cin >> overtime;

        a1.set_absDays(abscent);
        a1.set_AttDays(attended);
        a1.set_OTdays(overtime);

        // Write the employee data to the file
        outFile << a1.get_AttDays() << ","
                << a1.get_absDays() << ","
                << a1.get_OTdays() << "," << endl;

        // Close the file
        outFile.close();

        cout << "\n----------------------------------------------------------------";
        cout << "\nDays attended:" << a1.get_AttDays()<<endl;
        cout << "Days abscent:" << a1.get_absDays()<<endl;
        cout << "Days worked overtime:" << a1.get_OTdays() << endl;
    }

    // revenue
    // this class is supposed to be connected with the heads class, which will be implemented later
    double cost1, income;
    cout << "\nPlease enter the hotel's costs";
    cin >> cost1;
    cout << "\n"<<"Please enter the hotel's income";
    cin >> income;
    Revenue r1(income, cost1);
    r1.setRevenue(income, cost1);
    if (r1.getIsProfitable()) {
        cout << "\n"<<"The hotel is profitable with "<< r1.getRevenue()<<" EGP revenue";
    }
    else cout << "\n" << "The hotel is not profitable with " << -1 * r1.getRevenue() << " EGP loss";
}

void menu() {
    int ans;
    cout << "Welcome to our Hotel system!\nPlease select\n[1] if you are a Guest\n[2] if you are a head\n";
    cin >> ans;
    while ((ans > 2) || (ans < 1)) {
        cout << "wrong input, please enter a valid number\n";
        cin >> ans;
    }
    if (ans == 1) guestHotel();
    else head();
}

int main(void) {   

    menu();
    return 0;
}