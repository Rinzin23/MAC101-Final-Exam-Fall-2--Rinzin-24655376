#include <iostream>
using namespace std;

int main()
{
    // Create an array of 100 integers in random (unsorted) order
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60
    };

    // Display the first 20 elements of the array BEFORE sorting
    cout << "Array before sorting:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Sort the array using the Bubble Sort algorithm
    // The outer loop controls how many passes are made
    for (int i = 0; i < 99; i++)
    {
        // The inner loop compares adjacent elements
        for (int j = 0; j < 99 - i; j++)
        {
            // If the current number is greater than the next one,
            // swap them so the larger number moves to the right
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the first 20 elements of the array AFTER sorting
    cout << "\nArray after sorting:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // End of the program
    return 0;
}
