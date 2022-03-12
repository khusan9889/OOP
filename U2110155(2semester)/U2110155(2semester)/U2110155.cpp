#include<iostream>
#include<string.h>
#include "employee.h"

using namespace std;

// Problem 1

class FirstStudent {
private:
    string Student_ID, Student_Name;
    double OOP2_Score, Maths_Score, English_Score, Total_Score;

    double ctotal() {
        return OOP2_Score + Maths_Score + English_Score;
    }

public:

    void Getdata() {

        cin >> Student_ID;
        cin >> Student_Name;
        cin >> OOP2_Score;
        cin >> Maths_Score;
        cin >> English_Score;
        Total_Score = ctotal();
    }

    void ShowData() {
        cout << Student_ID << endl;
        cout << Student_Name << endl;
        cout << OOP2_Score << endl;
        cout << Maths_Score << endl;
        cout << English_Score << endl;
        cout << Total_Score << endl;

    }
};


class SecondStudent {
private:
    string Student_ID, Student_Name;
    double OOP2_Score, Maths_Score, English_Score;

public:

    void setStudent_ID(string Studentid) {
        Student_ID = Studentid;
    }
    string getStudent_ID() {
        return Student_ID;
    }
    void setStudent_Name(string Studendname) {
        Student_Name = Studendname;
    }
    string getStudent_Name() {
        return Student_Name;
    }
    void setOOP2_Score(double oopSc) {
        OOP2_Score = oopSc;
    }
    double getOOP2_Score() {
        return OOP2_Score;
    }
    void setMaths_Score(double mathSc) {
        Maths_Score = mathSc;
    }
    double getMaths_Score() {
        return Maths_Score;
    }
    void setEnglish_Score(double engSc) {
        English_Score = engSc;
    }
    double getEnglish_Score() {
        return English_Score;
    }
    double getAverage_Score() {
        return double(English_Score + Maths_Score + OOP2_Score) / 3.0;
    }
    double getTotal_Score() {
        return English_Score + Maths_Score + OOP2_Score;
    }

};

int main() {

    FirstStudent student;
    student.Getdata();
    student.ShowData();

    Employee employee;

    string empID, empName;
    int Hours, rate;

    cin >> empID;
    employee.setEmployee_ID(empID);

    cin >> empName;
    employee.setEmployee_Name(empName);

    cin >> Hours;
    employee.setNO_Of_Hours_Work(Hours);

    cin >> rate;
    employee.setRate_per_Hour(rate);
    cout << employee.getEmployee_ID() << endl;
    cout << employee.getEmployee_Name() << endl;
    cout << employee.getNO_Of_Hours_Work() << endl;
    cout << employee.getRate_per_Hour() << " $" << endl;
    cout << employee.getTotal_Monthly_Salary() << endl;


    SecondStudent Inhastud;
    string StId, StName;
    double oop_Sc, math_Sc, English_Sc;

    cin >> StId;
    Inhastud.setStudent_ID(StId);

    cin >> StName;
    Inhastud.setStudent_Name(StName);

    cin >> oop_Sc;
    Inhastud.setOOP2_Score(oop_Sc);

    cin >> math_Sc;
    Inhastud.setMaths_Score(math_Sc);

    cin >> English_Sc;
    Inhastud.setEnglish_Score(English_Sc);

    cout << Inhastud.getStudent_ID() << endl;
    cout << Inhastud.getStudent_Name() << endl;
    cout << Inhastud.getOOP2_Score() << endl;
    cout << Inhastud.getMaths_Score() << endl;
    cout << Inhastud.getEnglish_Score() << endl;
    cout << Inhastud.getAverage_Score() << endl;
    cout << Inhastud.getTotal_Score() << endl;

    return 0;
}