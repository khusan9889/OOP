#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

const int ROWS = 9;
const int COLUMNS = 9;
int tickets = 0;
int row = 0;

string vip_seat = "200.000 UZS";
string exclusive = "150.000 UZS";
string standard = "100.000 UZS";
string day;
string filmname;
string seat_type;
string timef;
string seat_price;

void ticket_booking_system();
void greeting();
void main_menu();
void korzinka();
void tickets_booked();
void deleting();
void film_name();
void dates();
void time();
void seatType();
void choosing_seat();
void next();

void ticket_booking_system()
{

	greeting();

}

void greeting()
{

	cout << setw(78);
	cout << "--------------- Welcome to ---------------" << endl;
	cout << setw(78);
	cout << "|                                        |" << endl;
	cout << setw(78);
	cout << "|          Ticket Booking System         |" << endl;
	cout << setw(78);
	cout << "|                                        |" << endl;
	cout << setw(78);
	cout << "------------------------------------------" << endl;

	cout << endl;


	while (tickets == 0)
	{
		cout << "========================================================================================================================" << endl;
		cout << setw(83);
		cout << "Keep in mind that you can not book more tan one ticket" << endl;
		cout << "========================================================================================================================" << endl;
		cout << endl;
		break;

	}

	main_menu();
}

void main_menu()
{

	cout << setw(77);
	cout << "---------------------------------------" << endl;
	cout << setw(77);
	cout << "|              Main Menu              |" << endl;
	cout << setw(77);
	cout << "|                                     |" << endl;
	cout << setw(77);
	cout << "|         1. Book a ticket            |" << endl;
	cout << setw(77);
	cout << "|         2. Shoplist                 |" << endl;
	cout << setw(77);
	cout << "|         3. Leave the system         |" << endl;
	cout << setw(77);
	cout << "|                                     |" << endl;
	cout << setw(77);
	cout << "---------------------------------------" << endl;

	while (true)
	{
		int choice;
		cin >> choice;
		if (choice == 1)
			film_name();
		else if (choice == 2)
			korzinka();
		else if (choice == 3)
		{
			cout << "========================================================================================================================" << endl;
			cout << setw(72);
			cout << "Thank you for using our system" << endl;
			cout << "========================================================================================================================" << endl;
			cout << endl;
			break;
		}
		else
		{
			while (choice != 1 && choice != 2 && choice != 3)
			{
				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;
				main_menu();
			}
		}
	}
}

void korzinka()
{

	cout << setw(80);
	cout << "---------------------------------------------" << endl;
	cout << setw(80);
	cout << "|                  SHOPLIST                 |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|              1. Booked tickets            |" << endl;
	cout << setw(80);
	cout << "|              2  Remove ticket             |" << endl;
	cout << setw(80);
	cout << "|              3. Main Menu                 |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "---------------------------------------------" << endl;

	while (true)
	{
		int choice;
		cin >> choice;
		if (choice == 1)
			tickets_booked();

		else if (choice == 2)
		{
			if (tickets == 1)
			{
				deleting();
			}
			else
			{
				cout << "________________________________________________________________________________________________________________________" << endl;
				cout << endl;
				cout << setw(75);
				cout << "You have not booked any ticket yet" << endl;
				cout << "________________________________________________________________________________________________________________________" << endl;
				main_menu();
			}
		}
		else if (choice == 3)
			main_menu();

		else
		{
			while (choice != 1 && choice != 2 && choice != 3)
			{
				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;
				korzinka();
			}
		}
	}
}

void tickets_booked()
{

	if (tickets == 0)
	{
		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << setw(75);
		cout << "You have not booked any ticket yet" << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;

	}
	else if (tickets == 1)
	{
		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << "Day:                                                                                                " << day << endl;
		cout << endl;
		cout << "Time:                                                                                               " << timef << endl;
		cout << endl;
		cout << "Seat No. :                                                                                          " << row << endl;
		cout << endl;
		cout << "Film:                                                                                               " << filmname << endl;
		cout << endl;
		cout << "SEAT TYPE:                                                                                          " << seat_type << endl;
		cout << endl;
		cout << "Price:                                                                                              " << seat_price << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;
	}

	int choice;


	while (true)
	{
		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << setw(71);
		cout << "Press 1 to go to main menu" << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;
		cin >> choice;
		if (choice == 1)
			main_menu();
		else
		{

			while (choice != 1)
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				tickets_booked();

			}
		}
	}
}

void deleting()
{
	while (tickets == 1)
	{
		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << setw(74);
		cout << "removing ticket from the system" << endl;
		cout << setw(74);
		cout << "Are you sure with your decision" << endl;
		cout << setw(69);
		cout << "press 1 or type Yes " << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;
		string decision;
		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << setw(93);
		cout << "Press any other key to main menu if you dont want to remove your ticket" << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;
		cin >> decision;
		if (decision == "1" || decision == "yes" || decision == "Yes")
		{
			cout << "________________________________________________________________________________________________________________________" << endl;
			cout << endl;
			cout << setw(77);
			cout << "Your ticket has been deleted succesfully" << endl;
			cout << "________________________________________________________________________________________________________________________" << endl;
			tickets = tickets - 1;
			main_menu();
		}
		else
		{
			main_menu();
		}
	}
}

void film_name()
{

	while (tickets == 1)
	{

		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << setw(78);
		cout << "You have reached your ticket booking limit" << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;
		main_menu();
		break;

	}

	int choice;
	cout << setw(80);
	cout << "---------------------------------------------" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|   CHOOSE A FILM WHICH YOU WANT TO WATCH   |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|               1. Avatar                   |" << endl;
	cout << setw(80);
	cout << "|               2. Star Wars                |" << endl;
	cout << setw(80);
	cout << "|               3. Titanic                  |" << endl;
	cout << setw(80);
	cout << "|               4. Justice League           |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|              5. Go back to main menu      |" << endl;
	cout << setw(80);
	cout << "---------------------------------------------" << endl;

	while (true)
	{
		cin >> choice;
		if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5)
		{
			switch (choice)
			{

			case 1:
				filmname = "Avatar";
				dates();
				break;
			case 2:
				filmname = "Star Wars";
				dates();
				break;
			case 3:
				filmname = "Titanic";
				dates();
				break;
			case 4:
				filmname = "Justice League";
				dates();
				break;
			case 5:
				main_menu();

			}
		}

		else
		{
			while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				film_name();

			}
		}

	}

}

void dates()
{

	string date;
	cout << setw(80);
	cout << "--------------- Choose a date ---------------" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|              1. 3rd December              |" << endl;
	cout << setw(80);
	cout << "|              2. 29th November             |" << endl;
	cout << setw(80);
	cout << "|              3. 15th December             |" << endl;
	cout << setw(80);
	cout << "|              4. 7th January               |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|              5. Choose another film       |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|              6. Main Menu                 |" << endl;
	cout << setw(80);
	cout << "---------------------------------------------" << endl;

	while (true)
	{
		cin >> date;
		if (date == "1" || date == "3rdDecember" || date == "3rddecember")
		{
			day = "3rd December";
			time();
		}
		else if (date == "2" || date == "29thNovember" || date == "29thnovember")
		{
			day = "29th November";
			time();
		}
		else if (date == "3" || date == "15thDecember" || date == "15thdecember")
		{
			day = "15th December";
			time();
		}
		else if (date == "4" || date == "7thJanuary" || date == "7thjanuary")
		{
			day = "7th January";
			time();
		}
		else if (date == "5")
		{
			film_name();
		}
		else if (date == "6")
		{
			main_menu();
		}
		else
		{
			while (date != "1" && date != "2" && date != "3" && date != "4" && date != "3rdDecember" && date != "3rddecember" && date != "29thNovember" && date != "29thnovember" && date != "15thDecember" && date != "15thdecember" && date != "7thJanuary" && date != "7thjanuary" && date != "5" && date != "6")
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				dates();

			}
		}
	}
}

void time()
{

	string ttw;

	cout << setw(80);
	cout << "---------------------------------------------" << endl;
	cout << setw(80);
	cout << "|                CHOOSE TIME                |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|                1. 9 a.m                   |" << endl;
	cout << setw(80);
	cout << "|                2. 12 a.m                  |" << endl;
	cout << setw(80);
	cout << "|                3. 3 p.m                   |" << endl;
	cout << setw(80);
	cout << "|                4. 6 p.m                   |" << endl;
	cout << setw(80);
	cout << "|                5. 9 p.m                   |" << endl;
	cout << setw(80);
	cout << "|                6. 12 p.m                  |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|                7. Vhange date             |" << endl;
	cout << setw(80);
	cout << "|                                           |" << endl;
	cout << setw(80);
	cout << "|                8. Main Menu               |" << endl;
	cout << setw(80);
	cout << "---------------------------------------------" << endl;

	while (true)
	{
		cin >> ttw;
		if (ttw == "1" || ttw == "10am")
		{
			timef = "10 a.m";
			seatType();
		}
		else if (ttw == "2" || ttw == "12am")
		{
			timef = "12 a.m";
			seatType();
		}
		else if (ttw == "3" || ttw == "3pm")
		{
			timef = "3 p.m";
			seatType();
		}
		else if (ttw == "4" || ttw == "6pm")
		{
			timef = "6 p.m";
			seatType();
		}
		else if (ttw == "5" || ttw == "10pm")
		{
			timef = "10 p.m";
			seatType();
		}
		else if (ttw == "6" || ttw == "12pm")
		{
			timef = "12 a.m";
			seatType();
		}
		else if (ttw == "7")
		{
			dates();
		}
		else if (ttw == "8")
		{
			main_menu();
		}
		else
		{
			while (ttw != "1" && ttw != "2" && ttw != "3" && ttw != "4" && ttw != "5" && ttw != "6" && ttw != "7" && ttw != "8" && ttw != "9am" && ttw != "12am" && ttw != "3pm" && ttw != "6pm" && ttw != "9pm" && ttw != "12pm")
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				time();

			}
		}
	}

}

void seatType()
{

	string i_got_the_point;

	cout << setw(90);
	cout << "--------------------------- SEAT TYPES --------------------------" << endl;
	cout << setw(90);
	cout << "|                        VIP-200.000 UZS                        |" << endl;
	cout << setw(90);
	cout << "|                          SEATS 11-29                          |" << endl;
	cout << setw(90);
	cout << "|                     Exclusive-150.000 UZS                     |" << endl;
	cout << setw(90);
	cout << "|                          SEATS 31-59                          |" << endl;
	cout << setw(90);
	cout << "|                     Standard-100.000 UZS                      |" << endl;
	cout << setw(90);
	cout << "|                          SEATS 61-99                          |" << endl;
	cout << setw(90);
	cout << "|                                                               |" << endl;
	cout << setw(90);
	cout << "|                    1. Choose another time                     |" << endl;
	cout << setw(90);
	cout << "|                                                               |" << endl;
	cout << setw(90);
	cout << "|                                                               |" << endl;
	cout << setw(90);
	cout << "|                       2. Go to main menu                      |" << endl;
	cout << setw(90);
	cout << "-----------------------------------------------------------------" << endl;

	while (true)
	{
		cout << "________________________________________________________________________________________________________________________" << endl;
		cout << endl;
		cout << setw(83);
		cout << "As you acknowledge with price list type OK or ok" << endl;
		cout << setw(79);
		cout << "If you want to choose another time prees 1" << endl;
		cout << setw(75);
		cout << "If you want to go main menu prees 2" << endl;
		cout << "________________________________________________________________________________________________________________________" << endl;
		cin >> i_got_the_point;
		if (i_got_the_point == "ok" || i_got_the_point == "OK")
		{
			choosing_seat();
		}
		else if (i_got_the_point == "1")
		{
			time();
		}
		else if (i_got_the_point == "2")
		{
			main_menu();
		}
		else
		{

			while (i_got_the_point != "1" || i_got_the_point != "2" || i_got_the_point != "ok" || i_got_the_point != "OK")
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				seatType();
			}

		}
	}

}

void choosing_seat()
{

	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << endl;
	cout << setw(65);
	cout << "Choose a seat" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;

	int arraySeats[ROWS][COLUMNS] =
	{
		{11, 12, 13, 14, 15, 16, 17, 18, 19},
		{21, 22, 23, 24, 25, 26, 27, 28, 29},
		{31, 32, 33, 34, 35, 36, 37, 38, 39},
		{41, 42, 43, 44, 45, 46, 47, 48, 49},
		{51, 52, 53, 54, 55, 56, 47, 48, 49},
		{61, 62, 63, 64, 65, 66, 67, 68, 69},
		{71, 72, 73, 74, 75, 76, 77, 78, 79},
		{81, 82, 83, 84, 85, 86, 87, 88, 89},
		{91, 92, 93, 94, 95, 96, 97, 98, 99}
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << "[  " << arraySeats[i][j] << "  ]      ";
		}
		cout << endl;
	}
	cout << "________________________________________________________________________________________________________________________" << endl;

	while (true)
	{
		cin >> row;
		if (row >= 11 && row <= 29)
		{
			if (row != 20)
			{
				cout << "________________________________________________________________________________________________________________________" << endl;
				cout << endl;
				cout << setw(75);
				cout << "Ticket has been booked successfully" << endl;
				cout << "________________________________________________________________________________________________________________________" << endl;



				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;

				seat_type = "VIP";
				seat_price = vip_seat;
				++tickets;

				next();

			}
			else
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				choosing_seat();
			}
		}
		else if (row >= 30 && row <= 59)
		{
			if (row != 40 && row != 30 && row != 50)
			{
				cout << "________________________________________________________________________________________________________________________" << endl;
				cout << endl;
				cout << setw(75);
				cout << "Ticket has been booked successfully" << endl;
				cout << "________________________________________________________________________________________________________________________" << endl;


				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;

				seat_type = "Exclusive";
				seat_price = exclusive;
				++tickets;

				next();

			}
			else
			{
				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				choosing_seat();
			}
		}
		else if (row >= 60 && row <= 99)
		{
			if (row != 70 && row != 80 && row != 90 && row != 60)
			{
				cout << "________________________________________________________________________________________________________________________" << endl;
				cout << endl;
				cout << setw(75);
				cout << "Ticket has been booked successfully" << endl;
				cout << "________________________________________________________________________________________________________________________" << endl;

				cout << endl;
				cout << endl;
				cout << endl;
				cout << endl;

				seat_type = "Standard";
				seat_price = standard;
				++tickets;

				next();

			}
			else
			{
				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				choosing_seat();
			}
		}
		else
		{
			while (row > 99 || row < 11)
			{
				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;

				choosing_seat();
			}
		}
	}
}

void next()
{

	int choice;

	cout << setw(79);
	cout << "-------------------------------------------" << endl;
	cout << setw(79);
	cout << "|             Choose an option            |" << endl;
	cout << setw(79);
	cout << "|                                         |" << endl;
	cout << setw(79);
	cout << "|             1. Go to shoplist           |" << endl;
	cout << setw(79);
	cout << "|             2. Go to Main Menu          |" << endl;
	cout << setw(79);
	cout << "-------------------------------------------" << endl;

	while (true)
	{
		cin >> choice;
		switch (choice)
		{
			if (choice == 1 || choice == 2)
			{

		case 1:
			korzinka();
			break;

		case 2:
			main_menu();
			break;

			}
			else
			{

				cout << "========================================================================================================================" << endl;
				cout << setw(76);
				cout << "You have entered inappropriate value" << endl;
				cout << "========================================================================================================================" << endl;
				cout << endl;
				next();

			}

		}
	}

}




int main()
{
	system("Color A");
	ticket_booking_system();

	system("pause");
	return 0;
}
