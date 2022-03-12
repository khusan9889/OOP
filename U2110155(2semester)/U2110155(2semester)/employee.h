#include<string>
using namespace std;

class Employee {
private:
    string Employee_ID, Employee_Name;
    int No_Of_Hours_Work, Rate_Per_Hour;

public:
    void setEmployee_ID(string id) {
        Employee_ID = id;
    }
    string getEmployee_ID() {
        return Employee_ID;
    }

    void setEmployee_Name(string name) {
        Employee_Name = name;
    }
    string getEmployee_Name() {
        return Employee_Name;
    }

    void setNO_Of_Hours_Work(int Work_Hours) {
        No_Of_Hours_Work = Work_Hours;
    }
    int getNO_Of_Hours_Work() {
        return No_Of_Hours_Work;
    }

    void setRate_per_Hour(int rate_per_hour) {
        Rate_Per_Hour = rate_per_hour;
    }
    int getRate_per_Hour() {
        return Rate_Per_Hour;
    }

    double getTotal_Monthly_Salary() {
        return Rate_Per_Hour * No_Of_Hours_Work * 30;
    }
};