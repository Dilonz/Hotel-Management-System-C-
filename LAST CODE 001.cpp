#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <windows.h>

using namespace std;


void mainMenu();
void receptionistsMenu ();
void userMenu();
void displayRoomTypes();
void addlist();
void viewList();
void removeInfo();
void editInfo();
void searchInfo();
void moonHotelinfo();
void calculateBill();


void loadingbar();




int main(){


mainMenu();
return 0;
}


void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


void loadingbar(){



cout<<"\n\n\n\n\n\n\t\tLOADING, PLEASE WAIT";

setColor(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

char x = 219;
for  (int i = 0; i < 27; i++)

{
    Sleep (100);
    cout <<x;
}

    cout<< "\n\n\n\n LOADING..PLEASE WAIT !"<<endl;
    system("cls");


    return;


}



void mainMenu() {
    while (true) {
        char userType;

        // Set text color to light blue
        setColor(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

        std::cout << "\n";
        std::cout << "\n";
        std::cout << "  ________________________________________________________________________ " << std::endl;
        std::cout << " |                                                                        |" << std::endl;
        std::cout << " |                .::  Welcome to the Moon Hotel Main Menu ::.            |" << std::endl;
        std::cout << " |________________________________________________________________________|" << std::endl;
        std::cout << " |                                                                        |" << std::endl;
        std::cout << " |                (R) - Receptionists Menu                                |" << std::endl;
        std::cout << " |                (U) - User Menu                                         |" << std::endl;
        std::cout << " |                (M) - Moon Hotel Info                                   |" << std::endl;
        std::cout << " |                (E) - Exit                                              |" << std::endl;
        std::cout << " |                                                                        |" << std::endl;
        std::cout << " |                                                                        |" << std::endl;
        std::cout << " |                                                                        |" << std::endl;
        std::cout << " |________________________________________________________________________|" << std::endl;
        std::cout << " |________________________________________________________________________|" << std::endl;
        std::cout << std::endl;
        std::cout << "\n";
        std::cout << "SELECT USER TYPE: ";
        std::cin >> userType;

        // Reset text color to default
        setColor(FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);

        switch (userType) {
            case 'R':
            case 'r':
                system("cls");
                receptionistsMenu();
                break;

            case 'U':
            case 'u':
                system("cls");
                userMenu();
                break;

            case 'M':
            case 'm':
                system("cls");
                moonHotelinfo();
                break;

            case 'E':
            case 'e':
                std::cout << "Thank you for using the program. Exiting..." << std::endl;
                return;

            default:
                std::cout << "The selection is not recognized. Please choose a valid option." << std::endl;
                break;
        }
    }
}


void receptionistsMenu (){


string username;
string password;

system("cls");

loadingbar();

  cout<<"\n";
  cout<<"\n";
  cout<<"\n";
  cout<<">>>>>>>>>>>>>............RECEPTIONISTS MENU LOG IN.............<<<<<<<<<<<<<<"<<endl;
  cout<<"\n";
  cout<<"\n";
  cout<<"ENTER THE USER NAME :"<<endl;
  cin>>username;
  cout<<"\n";
  cout<<"ENTER THE PASSWORD :"<<endl;
  cin>>password;

 if (username == "dilzz" && password == "123456") {
        cout << "You have successfully logged in!" << endl;

    } else {
        cout << "Login unsuccessful. Please try again." << endl;
        return;
    }

system("cls");

   while (true) {

    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout << " ***********************************************************************" << endl;
    cout << " *                                                                     *" << endl;
    cout << " *                     WELCOME RECEPTIONISTS MENU!                     *" << endl;
    cout << " *                                                                     *" << endl;
    cout << " *        1. View available type of rooms                              *" << endl;
    cout << " *        2. Reserve a room                                            *" << endl;
    cout << " *        3. Review customer information                               *" << endl;
    cout << " *        4. Remove customer information                               *" << endl;
    cout << " *        5. Edit customer information                                 *" << endl;
    cout << " *        6. Prepare the room bill                                     *" << endl;
    cout << " *        7. Return to the main menu                                   *" << endl;
    cout << " *                                                                     *" << endl;
    cout << " *                                                                     *" << endl;
    cout << " ***********************************************************************" << endl;
    cout<<"\n";
    cout << "Please make your selection: ";
        int choice;
        cin >> choice;

   switch (choice) {

         case 1:
            system("Cls");
            displayRoomTypes();
            break;

         case 2:
            system("cls");
            addlist();
            break;

         case 3:
            system("cls");
            viewList();
            break;

         case 4:
            system("cls");
            removeInfo();
            break;

         case 5:
            system("cls");
            editInfo();
            break;

         case 6:
            system("cls");
            calculateBill();
            break;


         case 7:
             system("cls");
            cout << "Returning to main menu." << endl;
            return;

         default: cout << "The selection is not recognized. Please choose a valid option." << endl;
         break;


    }
  }

}


void userMenu(){

string username;
string password;

system("cls");

loadingbar();

  cout <<"\n";
  cout <<"\n";
  cout <<"\n";
  cout<<">>>>>>>>>>>>>>................USER MENU LOG IN...............<<<<<<<<<<<<<<<<<"<<endl;
  cout <<"\n";
  cout <<"\n";
  cout<<"ENTER THE USER NAME :"<<endl;
  cin>>username;
  cout <<"\n";
  cout<<"ENTER THE PASSWORD :"<<endl;
  cin>>password;

 if (username == "drz" && password == "123") {
        cout << "You have successfully logged in!" << endl;

    } else {
        cout << "Login unsuccessful. Please try again." << endl;
        return;
    }

system("cls");

 while (true) {
cout <<"\n";
cout <<"\n";
    cout << " **************************************************************************" << endl;
    cout << " *                            WELCOME USER MENU!                          *" << endl;
    cout << " *                                                                        *" << endl;
    cout << " *                                                                        *" << endl;
    cout << " *         1. View available type of rooms                                *" << endl;
    cout << " *         2. Reserve a room                                              *" << endl;
    cout << " *         3. Review customer information                                 *" << endl;
    cout << " *         4. Search customer information                                 *" << endl;
    cout << " *         5. The cost of room booking                                    *" << endl;
    cout << " *         6. Return to the main menu                                     *" << endl;
    cout << " *                                                                        *" << endl;
    cout << " **************************************************************************" << endl;

    cout << "Please make your selection: ";
        int choice;
        cin >> choice;

        switch (choice) {

        case 1:
            system("cls");
            displayRoomTypes();
            break;

        case 2:
            system("cls");
            addlist();
            break;

        case 3:
            system("cls");
            viewList();
            break;

        case 4:
            system("cls");
            searchInfo();
            break;


        case 5:
            system("cls");
            calculateBill();
            break;


        case 6:
            system("cls");
            cout << "Returning to main menu." << endl;
            return;


        default:
            cout << "Incorrect input." << endl;
            break;
        }
    }

}



void displayRoomTypes() {
    cout << left << "==Room No==" << "\t""===rooms types====" << "\t""===Room Price(LKR)===" << endl;

    fstream RoomTypesfile;
    RoomTypesfile.open("roomtypes.txt", ios::in); //read mode

    if (!RoomTypesfile.is_open()) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    while (getline(RoomTypesfile, line)) {
        cout << line << endl;
    }

    RoomTypesfile.close();

    cout << "Press (E) Return to menu : ";
    char choice;
    cin >> choice;

    switch (choice) {
        case 'E':
        case 'e':

            return;
        default:
            cout << "Incorrect input." << endl;
            break;
    }
}


void addlist(){

ofstream booking;
booking.open("bookingfile.txt");

 cout<<"\n";

if (!booking){

    cerr<<"Failed to open the file for adding"<<endl;
    cout<<"\n";
    return;

}

char roomNo[20],name[20],address[20],nationality[20],age[20],phoneno[20],email[20],ArrivalDate[20],departureDate[20];
char choice;

do {
  system("cls");
  cout <<"\n";
  cout <<"\n";
cout << "  ////////////////////////////////////////////////////////////////////////////" << endl;
cout << " //                       .::ENTER CUSTOMER DETAILS::.                     //" << endl;
cout << "////////////////////////////////////////////////////////////////////////////" << endl;
cout <<"\n";
cout<<"ENTER THE ROOM NUMBER :"<<endl;
cin>>roomNo;
cout<<"ENTER YOUR NAME :"<<endl;
cin>>name;
cout<<"ENTER YOUR ADDRESS :"<<endl;
cin>>address;
cout<<"ENTER YOUR NATIONALITY :"<<endl;
cin>>nationality;
cout<<"ENTER YOUR AGE :"<<endl;
cin>>age;
cout<<"ENTER YOUR PHONENO :"<<endl;
cin>>phoneno;
cout<<"ENTER YOUR EMAIL :"<<endl;
cin>>email;
cout<<"ENTER THE ARRIVAL DATE :"<<endl;
cin>>ArrivalDate;
cout<<"ENTER THE DEPARTURE DATE :"<<endl;
cin>>departureDate;


booking <<roomNo<<' '<<name<<' '<<address<<' '<<nationality<<' '<<age<<' '<<phoneno<<' '<<email<<' '<<ArrivalDate<<' '<<departureDate;


cout<<"The room has been successfully booked"<<endl;
cout<<"To exit the program, press 'E'."<<endl;


cin>>choice;

}while (choice != 'e');


booking.close();


}



void viewList(){

ifstream bookinglist;
bookinglist.open("bookingfile.txt");



if (!bookinglist){

    cout<<"Failed to open the file for adding"<<endl;
    return;
}


char roomNo[20],name[20],address[20],nationality[20],age[20],phoneno[20],email[20],ArrivalDate[20],departureDate[20];


cout << "ROOM\tNAME\tADDRESS\tPHONENUMBER\tNATIONALITY\tEMAIL\tPERIOD\tARRIVALDATE\n";
cout << "--------------------------------------------------------------------------------\n";

while (bookinglist >> roomNo >> name >> address >> nationality >> age >> phoneno >> email >> ArrivalDate >> departureDate){

    cout<<roomNo <<'\t'<<name<<'\t'<<address<<'\t'<<nationality<<'\t'<<age<<'\t'<<phoneno<<'\t'<<email<<'\t'<<ArrivalDate<<'\t'<<departureDate<<endl;
}


bookinglist.close();

}

void removeInfo(){

ifstream bookinglist("bookingfile.txt");
ofstream booking ("temp.txt");


 if (!bookinglist || !booking) {
        cerr << "Failed to open the file." << endl;
        return;
    }

char roomnum[20];
    cout << "Please provide the room number of the hotel to be remove info from the database:\n";
    cin >> roomnum;

bool found = false;

char roomNo[20],name[20],address[20],nationality[20],age[20],phoneno[20],email[20],ArrivalDate[20],departureDate[20];

while (bookinglist >> roomNo >> name >> address >> nationality >> age >> phoneno >> email >> ArrivalDate >> departureDate){

    if (strcmp(roomNo, roomnum) != 0) {

        booking <<roomNo <<' '<<name<<' '<<address<<' '<<nationality<<' '<<age<<' '<<phoneno<<' '<<email<<' '<<ArrivalDate<<' '<<departureDate<<endl;
}else  {

found = true;

}

}

   if (!found) {
        cout << "No matching record list found" << endl;
    } else {
        cout << "Successfully cleared record list!" << endl;
    }

    bookinglist.close();
    booking.close();
    remove("bookingfile.txt");
    rename("temp.txt", "bookingfile.txt");

}


void editInfo(){

ifstream bookinglist("bookingfile.txt");
ofstream booking ("temp.txt");


 if (!booking || !bookinglist) {
        cerr << "Failed to open the file." << endl;
        return;
    }


char roomnum[20];
    cout << "Please provide the room number of the customer to edit details:\n";
    cin >> roomnum;

    bool found = false;

char roomNo[20],name[20],address[20],nationality[20],age[20],phoneno[20],email[20],ArrivalDate[20],departureDate[20];


while (bookinglist >> roomNo >> name >> address >> nationality >> age >> phoneno >> email >> ArrivalDate >> departureDate) {
        if (strcmp(roomNo, roomnum) == 0) {
            found = true;

            cout << "Please provide updated information:\n";
            cout<<"ENTER YOUR NAME :"<<endl;

cin>>name;
cout<<"RE ENTER YOUR ADDRESS :";
cin>>address;
cout<<"RE ENTER YOUR NATIONALITY :";
cin>>nationality;
cout<<"RE ENTER YOUR AGE :";
cin>>age;
cout<<"RE ENTER YOUR PHONENO :";
cin>>phoneno;
cout<<"RE ENTER YOUR EMAIL :";
cin>>email;
cout<<"RE ENTER THE ARRIVAL DATE :";
cin>>ArrivalDate;
cout<<"REENTER THE DEPARTURE DATE :";
cin>>departureDate;

 booking <<roomNo <<' '<<name<<' '<<address<<' '<<nationality<<' '<<age<<' '<<phoneno<<' '<<email<<' '<<ArrivalDate<<' '<<departureDate<<endl;
}else {

booking  <<roomNo <<' '<<name<<' '<<address<<' '<<nationality<<' '<<age<<' '<<phoneno<<' '<<email<<' '<<ArrivalDate<<' '<<departureDate<<endl;

}

}


   if (!found) {
        cout << "Requested Customer could not be found!" << endl;
    } else {
        cout << "Record updated successfully!" << endl;
    }

bookinglist.close();
booking.close();
remove("bookingfile.txt");
rename("temp.txt", "bookingfile.txt");

}


void searchInfo(){


ifstream bookinglist;
bookinglist.open("bookingfile.txt");

    if (!bookinglist) {
        cerr << "Failed to open the file." << endl;
        return;
    }


char roomnum[20];
    cout << "Please provide the room number of the customer to search details:\n";
    cin >> roomnum;


bool found = false;

char roomNo[20],name[20],address[20],nationality[20],age[20],phoneno[20],email[20],ArrivalDate[20],departureDate[20];

while (bookinglist>> roomNo >> name >> address >> nationality >> age >> phoneno >> email >> ArrivalDate >> departureDate) {
        if (strcmp(roomNo, roomnum) == 0) {
            found = true;


            cout << "===========================================" << endl;
            cout << "|             Record Found                |" << endl;
            cout << "===========================================" << endl;
            cout << "Room Number:   " << roomNo << endl;
            cout << "Name:          " << name << endl;
            cout << "Address:       " << address << endl;
            cout << "Nationality:   " << nationality << endl;
            cout << "Age:           " << age << endl;
            cout << "Phone Number:  " << phoneno << endl;
            cout << "Email:         " << email << endl;
            cout << "Arrival Date:  " << ArrivalDate << endl;
            cout << "Departure Date:" << departureDate << endl;
            cout << "===========================================" << endl;

            break;
        }
    }

    if (!found) {
        cout << "Requested Customer could not be found!" << endl;
    }

    bookinglist.close();

}


void calculateBill() {
    int type;
    int days;
    int withAC;
    char op;
    double price_per_day = 0.0;

    while (true) {
      cout << " ____________________________________________ " << endl;
      cout << "|           SELECT THE MOON HOTEL            |" << endl;
      cout << "|                 ROOM TYPES                 |" << endl;
      cout << "|--------------------------------------------|" << endl;
      cout << "| 1. Single Room   - Rs.2000.00              |" << endl;
      cout << "| 2. Double Room   - Rs.4000.00              |" << endl;
      cout << "| 3. Twin Room     - Rs.2000.00              |" << endl;
      cout << "| 4. Family Room   - Rs.6500.00              |" << endl;
      cout << "| 5. Standard Room - Rs.4500.00              |" << endl;
      cout << "| 6. Deluxe Room   - Rs.8500.00              |" << endl;
      cout << "|____________________________________________|" << endl;
    cout<<"Press '7' RETURN TO MAIN MENU"<<endl;
    cin >> type;


        switch (type) {
            case 1:
                price_per_day = 2000.00; // Set price for single room
                break;
            case 2:
                price_per_day = 4000.00; // Set price for double room
                break;
            case 3:
                price_per_day = 2000.00; // Set price for twin room
                break;
            case 4:
                price_per_day = 6500.00; // Set price for family room
                break;
            case 5:
                price_per_day = 4500.00; // Set price for standard room
                break;
            case 6:
                price_per_day = 8500.00; // Set price for deluxe room
                break;


            case 7:
                return;


            default:
                cout << "Invalid room type. Please select again." << endl;
                continue;
        }

        system("cls");

        cout << "----------------------------------" << endl;
        cout << "|   MOON HOTEL - Stay Period     |" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter the duration of your stay (in days): ";
        cin >> days;

        system("cls");

       cout << "================================" << endl;
       cout << "|   MOON HOTEL - Air Options   |" << endl;
       cout << "================================" << endl;
       cout << "Select your air conditioning preference:" << endl;
       cout << "1. With A/C" << endl;
       cout << "2. Non A/C" << endl;
        cin >> withAC;

        double total_amount = price_per_day * days;

        if (withAC == 1) {
            total_amount += (1200.00 * days); // Additional charge for AC
        }
  system("cls");

        cout << "======================================" << endl;
        cout << "|   MOON HOTEL - Billing Information |" << endl;
        cout << "======================================" << endl;
        cout << "Total amount for your stay: Rs." << total_amount << endl;
        cout << "======================================" << endl;
        cout << "Do you want to calculate the bill for booking a room? (y/n): ";
        cin >> op;

        if (op == 'y' ) {
            ofstream booking;
            booking.open("bookingfile.txt");

            if (!booking) {
                cerr << "Failed to open the file for adding" << endl;
                cout << "\n";
                return;
            }

            char roomNo[20], name[20], address[20], nationality[20], age[20], phoneno[20], email[20], ArrivalDate[20], departureDate[20];
            char choice;

            do {
                system("cls");
                cout << "******************************************************" << endl;
                cout << "|          ENTER CUSTOMER DETAILS FOR BOOKING         |" << endl;
                cout << "******************************************************" << endl;
                cout << "ENTER THE ROOM NUMBER :" << endl;
                cin >> roomNo;
                cout << "ENTER YOUR NAME :" << endl;
                cin >> name;
                cout << "ENTER YOUR ADDRESS :" << endl;
                cin >> address;
                cout << "ENTER YOUR NATIONALITY :" << endl;
                cin >> nationality;
                cout << "ENTER YOUR AGE :" << endl;
                cin >> age;
                cout << "ENTER YOUR PHONENO :" << endl;
                cin >> phoneno;
                cout << "ENTER YOUR EMAIL :" << endl;
                cin >> email;
                cout << "ENTER THE ARRIVAL DATE :" << endl;
                cin >> ArrivalDate;
                cout << "ENTER THE DEPARTURE DATE :" << endl;
                cin >> departureDate;

                booking << roomNo << ' ' << name << ' ' << address << ' ' << nationality << ' ' << age << ' ' << phoneno << ' ' << email << ' ' << ArrivalDate << ' ' << departureDate;

                cout << "The room has been successfully booked" << endl;
                cout << "To exit the program, press 'E'." << endl;

                cin >> choice;

            } while (choice != 'e');

            booking.close();
        }
    }
}



void moonHotelinfo (){

setColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);

cout << "\n";
cout << "***********************************************************************" << endl;
cout << "*                     Information: Moon Hotel                         *" << endl;
cout << "*                                                                     *" << endl;
cout << "*           -  Renowned establishment in Kandy City                   *" << endl;
cout << "*           -  PHONE: +97 (0)11 77593864, +94 (0)78 60701864          *" << endl;
cout << "*           -  E-MAIL: moonhotel@gmail.com                            *" << endl;
cout << "***********************************************************************" << endl;
cout << "\n";

cout << "\n";
cout << "\n";
  cout << "Press (E) Return to main menu : ";
        int choice;
        cin >> choice;

        switch (choice) {

            case 'E':
            case 'e':
            system("cls");
            mainMenu();
            break;


        }



}




