#include <iostream>
#include <movie.h>
#include <Ticket.h>
#include <customer.h>
#include<time.h>
#include<MemberShip.h>

using namespace std;
int main() 
{
	movie m;
	ticket t;
	customer co;
	member me;
	me.admin();
	int x;
	int lop = 1;
	do
	{
		m.menu();
		cout << "n\t\t\tEnter your choise :";
		cin >> x;

		switch (x) {
		case 1:
		{
			cout << "\t\t\tMovie list" << endl;
			t.schedule();
			t.tickettype();
			t.display();

			break
		}
		}
	}
}


