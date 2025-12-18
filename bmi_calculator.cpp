 * Student Name: Rinzin Sherpa
 * Date: 12/18/2025

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double weight, height, bmi;

    // Greet the user
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "This program will calculate your Body Mass Index." << endl;
    cout << endl;

    // Ask for the user to enter their weight in kilograms
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    // Ask for the user to enter their height in meters
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI usring the formula: BMI = weight (kg) / (height (m))^2
    bmi = weight / (height * height);

    // Display the BMI to the user
    cout << "\nYour BMI is: " << bmi << endl;

    // Determine BMI category
    if (bmi < 18.5)
    {
        cout << "BMI Category: Underweight" << endl;
    }
    else if (bmi < 25)
    {
        cout << "BMI Category: Normal weight" << endl;
    }
    else if (bmi < 30)
    {
        cout << "BMI Category: Overweight" << endl;
    }
    else
    {
        cout << "BMI Category: Obese" << endl;
    }

    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}


