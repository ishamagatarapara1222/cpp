#include <iostream>
using namespace std;

// Parent Class
class Arithmetic {
    
};


class Calculator : public Arithmetic {
public:
   
    void calculate(double a, double b) {
        if (b != 0) {
            cout << "Division (2 arguments): " << a << " / " << b << " = " << (a / b) << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }

    void calculate(double a, double b, double c) {
        cout << "Subtraction (3 arguments): " << a << " - " << b << " - " << c << " = " << (a - b - c) << endl;
    }

    void calculate(double a, double b, double c, double d) {
        cout << "Multiplication (4 arguments): " << a << " * " << b << " * " << c << " * " << d << " = " << (a * b * c * d) << endl;
    }

    void calculate(double a, double b, double c, double d, double e) {
        cout << "Addition (5 arguments): " << a << " + " << b << " + " << c << " + " << d << " + " << e << " = " << (a + b + c + d + e) << endl;
    }
};

int main() {
    // Creating an object of the child class
    Calculator calc;

    cout << "--- Method Overloading Calculator ---" << endl;

    calc.calculate(100.0, 5.0);

    calc.calculate(50.0, 15.0, 5.0);

    calc.calculate(2.0, 3.0, 4.0, 5.0);

    calc.calculate(10.0, 20.0, 30.0, 40.0, 50.0);

    return 0;
}