#include <iostream>
using namespace std;

int main() {
	//Problem-1

	int array[3] = { 5 , 8, 2003 };
	int i = 0;
	for (int i = 0; i < 3; ++i) {
		cout << array[i] << " ";
	}
    cout << "" << endl;
	//Ptoblem-2

    int numbers, j;
    float num[100], sum = 0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> numbers;

    while (numbers > 100 || numbers <= 0)
    {
        cout << "Error! number should in range of (1-100)." << endl;
        cout << "Enter the number again: "; 
        cin >> numbers;
    }

    for (j = 0; j < numbers; ++j)
    {
        cout << j + 1 << ". Enter number: ";
        cin >> num[j];
        sum += num[j];
    }

    average = sum / numbers;
    cout << "Average = " << average;

    cout << "" << endl;
    //Problem-3

    int array1[50], array2[50], array_Merge[100];
    int sizeOne, sizeTwo, sizeMerge, z, x, temp;
    cout << "Enter the Size for First Array: ";
    cin >> sizeOne;
    cout << "Enter the Size for Second Array: ";
    cin >> sizeTwo;
    cout << "\nEnter " << sizeOne << " Elements for First Array: ";
    for (z = 0; z < sizeOne; z++)
        cin >> array1[z];
    cout << "\nEnter " << sizeTwo << " Elements for Second Array: ";
    for (z = 0; z < sizeTwo; z++)
        cin >> array2[z];
    // merging the two arrays
    for (z = 0; z < sizeOne; z++)
    {
        array_Merge[z] = array1[z];
    }
    for (x = 0; x < sizeTwo; x++)
    {
        array_Merge[z] = array2[x];
        z++;
    }
    sizeMerge = z
        ;
    for (x = 0; x < (sizeMerge - 1); x++)
    {
        for (z = 0; z < (sizeMerge - 1); z++)
        {
            if (array_Merge[z] > array_Merge[z + 1])
            {
                temp = array_Merge[z];
                array_Merge[z] = array_Merge[z + 1];
                array_Merge[z + 1] = temp;
            }
        }
    }
    cout << "\nThe New MERGED Array:\n";
    for (z = 0; z < sizeMerge; z++)
    {
        if (z == (sizeMerge - 1))
            cout << array_Merge[z];
        else
            cout << array_Merge[z] << " ";
    }
    cout << endl;



	return 0;
}




