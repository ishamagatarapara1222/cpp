#include <iostream>
#include <string>
using namespace std;

class FastFoodCafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;      // rooftop or normal
    int cafe_rating;       // 1 to 5
    string cafe_location;  // city name
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // Default Constructor
    FastFoodCafe()
    {
        cafe_id = 0;
        cafe_name = "";
        cafe_type = "";
        cafe_rating = 0;
        cafe_location = "";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    // Function to take input
    void input()
    {
        cout << "\nEnter Cafe ID: ";
        cin >> cafe_id;

        cin.ignore();

        cout << "Enter Cafe Name: ";
        getline(cin, cafe_name);

        cout << "Enter Cafe Type (rooftop/normal): ";
        getline(cin, cafe_type);

        cout << "Enter Cafe Rating (1-5): ";
        cin >> cafe_rating;

        cin.ignore();

        cout << "Enter Cafe Location (City): ";
        getline(cin, cafe_location);

        cout << "Enter Establish Year: ";
        cin >> cafe_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    // Display Function
    void display()
    {
        cout << "\n----- Cafe Details -----\n";
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << " Star" << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Establish Year: " << cafe_establish_year << endl;
        cout << "Staff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of Cafes: ";
    cin >> n;

    FastFoodCafe cafe[n];  // Array of objects

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Cafe " << i + 1 << endl;
        cafe[i].input();
    }

    cout << "\n\n=== Cafe Information ===\n";

    for (int i = 0; i < n; i++)
    {
        cafe[i].display();
    }

    return 0;
}