#include <iostream>
using namespace std;

// Parent Class
class Cricket {
public:
    
    virtual void getTotalOvers() {
        cout << "General Cricket Match: Overs are undefined." << endl;
    }
};

// Child Class 1 inheriting from Cricket
class T20Match : public Cricket {
public:
    // Overriding the base class method
    void getTotalOvers() override {
        cout << "T20 Match: Total overs are 20 per innings." << endl;
    }
};


class TestMatch : public Cricket {
public:
  
    void getTotalOvers() override {
        cout << "Test Match: Typically 90 overs are bowled per day." << endl;
    }
};

int main() {
    cout << "--- Method Overriding Example ---" << endl;

    T20Match t20;
    TestMatch test;

    t20.getTotalOvers();
    test.getTotalOvers();

    return 0;
}