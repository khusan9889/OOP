//id: U2110155
//name: KAdirov Khusan
#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Adding Two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if (j == c - 1)
                cout << endl;
        }


    int salesmen[5][3];
    for (int i = 0; i < 5; i++)
    {
        cout << "Please insert how many your " << i + 1 << " salesman has sold of:\n";
        for (int j = 0; j < 3; j++)
        {
            cout << j + 1 << " item: ";
            cin >> salesmen[i][j];
        }
    }
    cout << endl << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " salesman has sold:\n";
        for (int j = 0; j < 3; j++)
        {
            cout << salesmen[i][j] << " (pcs) of item " << j + 1 << endl;
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += salesmen[j][i];
        }
        cout << sum << " (pcs) of item " << i + 1 << "were sold by five salesmen\n";
    }
    system("pause");

    return 0;
}