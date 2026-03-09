#include <iostream>
#include <cstring>
using namespace std;

/* =======================
   Train Class
   ======================= */
class Train {
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];

    static int trainCount;

public:
    // Default Constructor
    Train() {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
        trainCount++;
    }

    // Parameterized Constructor
    Train(int no, const char* name, const char* src,
          const char* dest, const char* time) {
        trainNumber = no;
        strcpy(trainName, name);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
        trainCount++;
    }

    // Destructor
    ~Train() {
        trainCount--;
    }

    // Input Train Details
    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();

        cout << "Enter Train Name: ";
        cin.getline(trainName, 50);

        cout << "Enter Source: ";
        cin.getline(source, 50);

        cout << "Enter Destination: ";
        cin.getline(destination, 50);

        cout << "Enter Train Time: ";
        cin.getline(trainTime, 10);
    }

    // Display Train Details
    void displayTrainDetails() {
        cout << "\nTrain Number: " << trainNumber;
        cout << "\nTrain Name: " << trainName;
        cout << "\nSource: " << source;
        cout << "\nDestination: " << destination;
        cout << "\nTrain Time: " << trainTime << endl;
    }

    int getTrainNumber() {
        return trainNumber;
    }

    static int getTrainCount() {
        return trainCount;
    }
};

int Train::trainCount = 0;

/* =======================
   RailwaySystem Class
   ======================= */
class RailwaySystem {
private:
    Train trains[100];
    int totalTrains;

public:
    RailwaySystem() {
        totalTrains = 0;
    }

    void addTrain() {
        if (totalTrains >= 100) {
            cout << "Train storage full!\n";
            return;
        }
        trains[totalTrains].inputTrainDetails();
        totalTrains++;
        cout << "Train record added successfully!\n";
    }

    void displayAllTrains() {
        if (totalTrains == 0) {
            cout << "No train records available.\n";
            return;
        }
        for (int i = 0; i < totalTrains; i++) {
            cout << "\nTrain " << i + 1 << " Details:";
            trains[i].displayTrainDetails();
        }
    }

    void searchTrainByNumber(int number) {
        for (int i = 0; i < totalTrains; i++) {
            if (trains[i].getTrainNumber() == number) {
                cout << "\nTrain found:";
                trains[i].displayTrainDetails();
                return;
            }
        }
        cout << "\nTrain with number " << number << " not found!\n";
    }
};

/* =======================
   Main Function
   ======================= */
int main() {
    RailwaySystem system;
    int choice;

    do {
        cout << "\n--- Railway Reservation System Menu ---";
        cout << "\n1. Add New Train Record";
        cout << "\n2. Display All Train Records";
        cout << "\n3. Search Train by Number";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system.addTrain();
            break;

        case 2:
            system.displayAllTrains();
            break;

        case 3: {
            int num;
            cout << "Enter Train Number to search: ";
            cin >> num;
            system.searchTrainByNumber(num);
            break;
        }

        case 4:
            cout << "Exiting the system. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}