#include <iostream>  
using namespace std;

//Task-1  
class Rectangle
{
	double length, breadth;
public:
	Rectangle() {}
	Rectangle(double l, double b)
	{
		length = l;
		breadth = b;
	}
	double getArea()
	{
		return length * breadth;
	}
	void setLenght(double)
	{
		cout << "Lenght: "; cin >> length;
	}
	void setBreadth(double)
	{
		cout << "Breadth: "; cin >> breadth;
	}
	Rectangle operator +(Rectangle& r)
	{
		r.breadth = r.breadth + breadth;
		r.length = r.length + length;
		return r;
	}
};


//Task-2  

class Distance
{
private:
	float kilometer, meter;
public:
	Distance() {}
	Distance(float k, float m)
	{
		kilometer = k;
		meter = m;
		cout << "Kilometres: ";
		cin >> kilometer;
		cout << "Metres: ";
		cin >> meter;

	}
	void ShowDistance()
	{
		cout << "m:  " << meter << endl;
		cout << "km:  " << kilometer << endl;
	}
	friend void operator ==(Distance& r, Distance& t);
};
void operator ==(Distance& r, Distance& r1)
{
	if ((r.kilometer == r1.kilometer) && (r.meter == r1.meter))
	{
		cout << "Objects are equal :)" << endl;
	}
	else
	{
		cout << "Objects are not equal :(" << endl;
	}

}
int main()
{
	int task;
	cout << "CHOOSE TASK: ";
	cin >> task;

	if (task == 1)
	{
		Rectangle r1(1.1, 1.1), r2(1.1, 1.1), r3;
		r1.setBreadth(1.1);
		r1.setLenght(1.1);
		cout << "first object: " << r1.getArea() << endl;
		r2.setBreadth(1.1);
		r2.setLenght(1.1);
		cout << "second object: " << r2.getArea() << endl;
		r3 = r1 + r2;
		cout << "third object: " << r3.getArea() << endl;
	}

	else if (task == 2)
	{
		Distance d(9.2, 5.6), d2(9.2, 50.6), d3;
		d == d2;
		d.ShowDistance();
	}
	system("pause");
	return 0;


}