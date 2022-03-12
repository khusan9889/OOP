// U2110155 Khusan Kadirov

#include <iostream>
using namespace std;


//TASK 4
int GCD(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a % b;
        if (c == 0)
        {
            return b;
        }
        else
        {
            c = GCD(c, b);
        }
    }
    if (a < b)
    {
        c = b % a;
        if (c == 0)
        {
            return a;
        }
        else
        {
            c = GCD(c, a);
        }
    }
    return c;
}

int largest(int x, int y, int z) {
    if (x > y && x > z) {
        if (y > z) {
            cout << "Max : " << x << endl << "Middle : " << y << endl << "Min : " << z << endl;
        }
        else {
            cout << "Max : " << x << endl << "Middle : " << z << endl << "Min : " << x << endl;

        }
    }
    if (y > z && y > x) {
        if (x > z) {
            cout << "Max : " << y << endl << "Middle : " << x << endl << "Min : " << z << endl;
        }
        else {
            cout << "Max : " << y << endl << "Middle : " << z << endl << "Min : " << x << endl;
        }
    }
    if (z > y && z > x) {
        if (y > x) {
            cout << "Max : " << z << endl << "Middle : " << y << endl << "Min : " << x << endl;
        }
        else {
            cout << "Max : " << z << endl << "Middle : " << x << endl << "Min : " << y << endl;
        }
    }
    return 0;
}

float largest(float x, float y, float z) {
    int max;
    if (x > y && x > z) {
        max = x;
        if (y > z) {
            cout << "Max : " << x << endl << "Middle : " << y << endl << "Min : " << z << endl;
        }
        else {
            cout << "Max : " << x << endl << "Middle : " << z << endl << "Min : " << x << endl;

        }
    }
    if (y > z && y > x) {
        max = y;
        if (x > z) {
            cout << "Max : " << y << endl << "Middle : " << x << endl << "Min : " << z << endl;
        }
        else {
            cout << "Max : " << y << endl << "Middle : " << z << endl << "Min : " << x << endl;
        }
    }
    if (z > y && z > x) {
        max = z;
        if (y > x) {
            cout << "Max : " << z << endl << "Middle : " << y << endl << "Min : " << x << endl;
        }
        else {
            cout << "Max : " << z << endl << "Middle : " << x << endl << "Min : " << y << endl;
        }
    }
    return max;
}
//Task 6
template <class T>
T maximum(T n1, T n2) {
    return (n1 > n2) ? n1 : n2;
}
int main() {
    // Task 4
    int x, y, c;
    cout << "x and y : ";
    cin >> x >> y;
    cout << "x = " << x << "y = " << endl;

    c = GCD(x, y);
    cout << "GCD of x and y : " << c << endl;
    // HCF is equal to x * y divided by GCD (c)
    cout << "HCF of x and y : " << x * y / c << endl;

    // Task 5
    int z;
    cout << "x:"; cin >> x;
    cout << "z:"; cin >> z;
    cout << "y:"; cin >> y;
    largest(x, y, z);
    //Task 6
    float float1, float2, float3, result2;
    cout << "Enter 3 float numbers: ";  cin >> float1;
    cin >> float2;

    cin >> float3;

    result2 = max(max(float1, float2), float3);

    cout << "The greatest number is " << result2 << endl;

    return 0;

}
