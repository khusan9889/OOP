/*
name:Kadirov Khusan
ID:U2110155
*/
#include<iostream>
#include<string>
using namespace std;

class Day_time {
private:
    int hour, minute, second;

public:
    Day_time(int h, int m, int s)
    {
        if (h > 24)
        {
            hour = 0;
        }
        else {
            hour = h;
        }
        if (m > 60)
        {
            int val = m % 60;
            hour += m / 60;
            minute = val;
        }
        else
        {
            minute = m;
        }
        second = s;
    }
    int getHours()const {

        return hour;
    }
    int getMinute() const {
        return minute;
    }
    int getSecond() const {
        return second;
    }
    int asSeconds() const {
        return ((hour * 3600) + (minute * 60) + second);
    }
    // Daytime in seconds
    void operator++(int) {
        second++;
        cout << second;;
    }
    void operator--(int) {
        minute--;
        cout << minute;
    }
};
int main() {
    int choice, hour, minute, second;
    cout << "Enter hours: "; cin >> hour;
    cout << "" << endl;
    cout << "Enter minutes: "; cin >> minute;
    cout << "" << endl;
    cout << "Enter seconds: "; cin >> second;
    cout << "" << endl;
    Day_time D_t(hour, minute, second);
    do {
        cout << "[0]exit" << endl;
        cout << "[1]Display" << endl;
        cout << "[2]View in seconds" << endl;
        cout << "[3]Increment seconds" << endl;
        cout << "[4]Decrement minutes" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "Hours " << D_t.getHours();
            cout << "Minutes " << D_t.getMinute();
            cout << "Second " << D_t.getSecond();
            break;

        case 2:

            cout << "Time in sec: " << D_t.asSeconds();
            break;

        case 3:

            D_t++;
            break;
        case 4:
            D_t--;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;

        }


    } while (choice != 0);
    system("pause");
    return 0;
}