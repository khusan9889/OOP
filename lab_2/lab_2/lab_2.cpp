// name:    Kadirov Khusan
// ID: U2110155

#include <iostream>
#include"Header_lab2.h"
#include <cmath>
using namespace std;
//Task 1
class Person
{
private:
    string name;
    int age;
public:
    Person() { age = 18; name = "Xusan"; }
    Person(int age1) { age = age1; }
    void Display() {
        cout << "age = " << age << " and my name is " << name << endl;
    }
};
//Task 2
class Records {
private:
    string name;
    float salary;
    string date_of_birth;
public:
    Records() {
        name = "Jack Wilson";
        salary = 1500;
        date_of_birth = "30 of Febuary";
    }
    Records(int salary1, string name1, string date_of_birth1) {
        salary = salary1;
        name = name1;
        date_of_birth = date_of_birth1;
    }
    void setName();
    void setBirth();
    void setSalary();
    void getValue();
};
void Records::getValue() {
    cout << "Name: " << name << endl << "Date of birth: " << date_of_birth << endl << "Salary: " << salary << endl;
}
void Records::setName() {
    cout << "Enter your name: " << endl;
    cin >> name;
}
void Records::setBirth() {
    cout << "Enter your birth date: " << endl;
    cin >> date_of_birth;
}
void Records::setSalary() {
    cout << "Enter your salary: " << endl;
    cin >> salary;
}
//Task 3
class Account {
private:
    string name;
    string account_number;
    float balance;
public:
    Account() {
        name = "Xusan"; account_number = "U2110155"; balance = 1000;
        cout << "Your bank account is created :" << endl;
        cout << "Your name is " << name << endl;
        cout << "Your account number is :" << account_number << endl;
        cout << "Your balance is: $" << balance << endl << endl << endl << endl;
    }
    ~Account() {
        cout << "Your bank account is destroyed" << endl;
    }
};
//Task 4
class Box {
private:
    double width;
public:
    void setWidth() {
        cout << "Input the width of the triangle:" << endl;
        cout << "Width :"; cin >> width;
    }
    friend void printWidth(Box box);
};
void printWidth(Box box) {
    cout << "The width of the box is: " << box.width;
}
int main() {
    Person i1;
    i1.Display();
    Records r1;
    Records* r2 = &r1;
    r1.setName();
    r1.setBirth();
    r1.setSalary();
    r1.getValue();
    Account object;
    object.~Account();
    cout << "Input the base and the height of the triangle:" << endl;
    Triangle height;
    height.setHeight();
    height.setBase();
    height.Display();
    cout << endl << endl << "Task - 5" << endl << endl;
    Box box;
    box.setWidth();
    printWidth(box);
    cout << endl << endl << endl;
}