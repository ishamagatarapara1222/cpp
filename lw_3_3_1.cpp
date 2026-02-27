#include <iostream>
#include <string>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue; // per year
    int comp_import_raw_diamonds; // per year
    int comp_export_diamonds;     // per year
    string comp_ceo;

public:
    // Parameterized Constructor
    DiamondCompany(int id, string name, int staff, double revenue,
                   int import_raw, int export_dia, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = import_raw;
        comp_export_diamonds = export_dia;
        comp_ceo = ceo;
    }

    // Display Function
    void display()
    {
        cout << "\n----- Company Details -----\n";
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue (per year): " << comp_revenue << endl;
        cout << "Imported Raw Diamonds (per year): " 
             << comp_import_raw_diamonds << endl;
        cout << "Exported Diamonds (per year): " 
             << comp_export_diamonds << endl;
        cout << "CEO Name: " << comp_ceo << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of Diamond Companies: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, staff, import_raw, export_dia;
        double revenue;
        string name, ceo;

        cout << "\nEnter details for Company " << i + 1 << endl;

        cout << "Company ID: ";
        cin >> id;

        cin.ignore(); // to clear newline

        cout << "Company Name: ";
        getline(cin, name);

        cout << "Staff Quantity: ";
        cin >> staff;

        cout << "Revenue (per year): ";
        cin >> revenue;

        cout << "Imported Raw Diamonds (per year): ";
        cin >> import_raw;

        cout << "Exported Diamonds (per year): ";
        cin >> export_dia;

        cin.ignore();

        cout << "CEO Name: ";
        getline(cin, ceo);

        // Creating object using Parameterized Constructor
        DiamondCompany company(id, name, staff, revenue,
                               import_raw, export_dia, ceo);

        company.display();
    }

    return 0;
}
