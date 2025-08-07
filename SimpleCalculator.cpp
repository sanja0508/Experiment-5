#include<iostream>
using namespace std;

int main() {
    float a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nSelect Operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Sum = " << a + b << endl;
            break;
        case 2:
            cout << "Difference = " << a - b << endl;
            break;
        case 3:
            cout << "Product = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Quotient = " << a / b << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid input. Please choose between 1 to 4." << endl;
    }

    return 0;
}
