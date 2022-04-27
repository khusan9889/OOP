//id: U2110155
//name: Kadirov Khusan
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Person {
    string name;
    int age;
public:
    void getname(string n, int a) {
        cout << "Please enter name and age of person: " << endl;
        cin >> n >> a;
        name = n;
        age = a;
    }
    string printname() {
        return name;
    }
    int printage() {
        return age;
    }
};
void input() {
    Person h;
    fstream file;
    h.getname("hh", 17);
    file.open("cpp.dat", ios::app | ios::binary);
    file.write((char*)(&h), sizeof(h));
    file.close();
}

int main()
{
    fstream iffile;
    fstream ffile;
    ffile.open("temp.dat", ios::app | ios::out | ios::in | ios::binary);
    Person h;
    string name1;
    int j, age1, pos;
    //input();
    fstream infile;
    infile.open("cpp.dat", ios::in | ios::app | ios::binary | ios::out);
    cout << "Please enter: " << endl;
    cout << "1.To Determine the age of the specified person." << endl;
    cout << "2.To Determine the name if age is known." << endl;
    cout << "3.To Delete a record." << endl;
    cout << "4.To add a recor to a specific position." << endl;
    cout << "5.To exit program." << endl;
    cin >> j;
    switch (j)
    {
    case 1:

        cout << "Please enter the name of person to see age: ";
        cin >> name1;
        infile.seekg(0);
        while (infile.read((char*)(&h), sizeof(h)))
        {
            if (h.printname() == name1)
            {
                cout << name1 << "'s age: " << h.printage() << endl;
            }
        }
        return main();
    case 2:
        cout << "Please enter the age of person to see name: ";
        cin >> age1;
        infile.seekg(0);
        while (infile.read((char*)(&h), sizeof(h))) {
            if (h.printage() == age1) {
                cout << h.printname() << " is " << age1 << " years old" << endl;
            }
        }
        return main();
    case 3:

        int n;
        cout << "Please enter 1 if you want to delete record by age and 2 if you want ro delete recor by name: ";
        cin >> n;
        if (n == 1) {
            cout << "Please enter the age of person: ";
            cin >> age1;
            infile.seekg(0);
            while (infile.read((char*)(&h), sizeof(h))) {
                if (h.printage() != age1) {

                    ffile.write((char*)&h, sizeof(h));
                }
            }
            ffile.close();
            remove("cpp.dat");
            rename("temp.dat", "cpp.dat");
        }
        if (n == 2) {
            cout << "Please enter the name of person: ";
            cin >> name1;
            infile.seekg(0);
            while (infile.read((char*)(&h), sizeof(h))) {
                if (h.printname() != name1) {

                    ffile.write((char*)&h, sizeof(h));
                }
            }
            ffile.close();
            remove("cpp.dat");
            rename("temp.dat", "cpp.dat");
        }
        return main();
    case 4:
        cout << "Please enter desired position to add a record: ";
        cin >> pos;

        h.getname("hh", 17);
        iffile.seekp((pos - 1) / sizeof(h));
        iffile.open("cpp.dat", ios::app | ios::binary);
        iffile.write((char*)(&h), sizeof(h));
        iffile.close();
        return main();
    case 5:
        break;
    default:
        cout << "You have entered wrong number please try again(" << endl;
        return main();
    }
    infile.close();
    return 0;
}