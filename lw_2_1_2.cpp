#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void getData()
    {
        cout << "\nEnter Car ID: ";
        cin >> car_id;

        cout << "Enter Company Name: ";
        cin >> car_company_name;

        cout << "Enter Car Color: ";
        cin >> car_color;

        cout << "Enter Car Model: ";
        cin >> car_model;

        cout << "Enter Release Year: ";
        cin >> car_release_year;
    }

    void displayData()
    {
        cout << "\nCar ID: " << car_id << endl;
        cout << "Company Name: " << car_company_name << endl;
        cout << "Car Color: " << car_color << endl;
        cout << "Car Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
    }
};

int main()
{
    Car car[4];   // Array of 4 car objects

    // Input data
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter details for Car " << i + 1 << endl;
        car[i].getData();
    }

    // Display data
    cout << "\n\n----- Car Records -----\n";
    for (int i = 0; i < 4; i++)
    {
        car[i].displayData();
    }

    return 0;
}