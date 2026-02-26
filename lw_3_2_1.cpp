#include <iostream>
using namespace std;

class Hotel {
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_rating;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

    static string hotel_location;   // ? static variable (given list me se)

public:
    void setData() {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;

        cout << "Enter Hotel Name: ";
        cin.ignore();
        getline(cin, hotel_name);

        cout << "Enter Hotel Type (Hotel/Motel): ";
        getline(cin, hotel_type);

        cout << "Enter Hotel Rating (1 to 7 Star): ";
        cin >> hotel_rating;

        cout << "Enter Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Room Quantity: ";
        cin >> hotel_room_quantity;
    }

    void getData() {
        cout << "\n--- Hotel Details ---\n";
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel Rating: " << hotel_rating << " Star" << endl;
        cout << "Hotel Location: " << hotel_location << endl; // ? static output
        cout << "Establish Year: " << hotel_establish_year << endl;
        cout << "Staff Quantity: " << hotel_staff_quantity << endl;
        cout << "Room Quantity: " << hotel_room_quantity << endl;
    }
};

// ? static variable initialization with fixed value
string Hotel::hotel_location = "Rajkot";

int main() {
    int n;

    cout << "Enter number of hotels: ";
    cin >> n;

    Hotel h[n];   // array of objects

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Hotel " << i + 1 << endl;
        h[i].setData();
    }

    for (int i = 0; i < n; i++) {
        h[i].getData();
    }

    return 0;
}