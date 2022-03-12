/*name:Kadirov Khusan
id:U22110155
*/
#include <iostream>
using namespace std;



void radius_of_circle(){
    float pi = 3.14;
    float radius, answ; 
    cout << "enter value for radius:";
    cin >> radius;
   

    answ = pi * radius * radius; //formula to calculate the radius of circle
    cout << answ << endl;

}


int swap()
{
    int z;
    int a, b;
    cout << "Enter the Two Numbers to Swap: ";
    cin >> a >> b;
    cout << "\nAfter Swapping: ";
    /*Extra veriable for storing the value of first or second variable*/
    z = a;
    /*Copying the first variable value to the tempriory variable*/
    a = b;
    /*Copying the second variable value to the first variable*/
    b = z;
    /*Copying the tempriory variable value to the second variable*/
    cout << " " << a << "   " << b << endl;
    return 0;

}


void time_converter() {
	/*Get arguements and converts them into minutes and sum all given values*/

	int hour, minute, second;
	double result_min, con_hour, con_second;

	cout << "Enter hours, minutes and seconds";
	cin >> hour >> minute >> second;
	//calculate time
	con_hour = hour * 60;
	con_second = second / 60;
	result_min = con_hour + con_second + minute;
	cout << result_min<<endl;
}

void sum() {
	int n;
	double sum = 0;
	cout << "Number:";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		double  mult = 1, x = 1, fact = 1, y = 1;
		double fraction;
		while (x <= i) {
			mult *= i;
			x++;
		}
		while (y <= i) {
			fact *= y;
			y++;
		}
		fraction = mult / fact;
		sum = sum + fraction;
	}

	cout<< sum;
}




int main()
{
	//Requesting for functions which were used higher
    //1st question
    radius_of_circle();

    //2nd question
    swap();

	//3rd question
	time_converter();	

	//4th question
	sum();


    return 0;
}


