#include <iostream>
using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity; // in years
    string cust_telecom_brand_name;

public:
    // Setter functions
    void setCustId(int id) {
        cust_id = id;
    }

    void setCustName(string name) {
        cust_name = name;
    }

    void setCustAge(int age) {
        cust_age = age;
    }

    void setCustCity(string city) {
        cust_city = city;
    }

    void setCustMobileNumber(string mobile) {
        cust_mobile_number = mobile;
    }

    void setCustSimcardValidity(int validity) {
        cust_simcard_validity = validity;
    }

    void setCustTelecomBrandName(string brand) {
        cust_telecom_brand_name = brand;
    }

    // Getter functions
    int getCustId() {
        return cust_id;
    }

    string getCustName() {
        return cust_name;
    }

    int getCustAge() {
        return cust_age;
    }

    string getCustCity() {
        return cust_city;
    }

    string getCustMobileNumber() {
        return cust_mobile_number;
    }

    int getCustSimcardValidity() {
        return cust_simcard_validity;
    }

    string getCustTelecomBrandName() {
        return cust_telecom_brand_name;
    }
};

int main() {
    Customer customers[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Customer " << i + 1 << endl;

        int id, age, validity;
        string name, city, mobile, brand;

        cout << "Customer ID: ";
        cin >> id;
        customers[i].setCustId(id);
        cin.ignore();

        cout << "Customer Name: ";
        getline(cin, name);
        customers[i].setCustName(name);

        cout << "Customer Age: ";
        cin >> age;
        customers[i].setCustAge(age);
        cin.ignore();

        cout << "Customer City: ";
        getline(cin, city);
        customers[i].setCustCity(city);

        cout << "Customer Mobile Number: ";
        getline(cin, mobile);
        customers[i].setCustMobileNumber(mobile);

        cout << "Simcard Validity (in years): ";
        cin >> validity;
        customers[i].setCustSimcardValidity(validity);
        cin.ignore();

        cout << "Telecom Brand Name (e.g., Jio, Airtel, Vi): ";
        getline(cin, brand);
        customers[i].setCustTelecomBrandName(brand);
    }

    cout << "\n\n----- Customer Records -----\n";

    for (int i = 0; i < 5; i++) {
        cout << "\nCustomer " << i + 1 << " Details:\n";
        cout << "ID: " << customers[i].getCustId() << endl;
        cout << "Name: " << customers[i].getCustName() << endl;
        cout << "Age: " << customers[i].getCustAge() << endl;
        cout << "City: " << customers[i].getCustCity() << endl;
        cout << "Mobile Number: " << customers[i].getCustMobileNumber() << endl;
        cout << "Simcard Validity (years): " << customers[i].getCustSimcardValidity() << endl;
        cout << "Telecom Brand: " << customers[i].getCustTelecomBrandName() << endl;
    }

    return 0;
}