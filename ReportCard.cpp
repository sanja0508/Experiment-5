#include<iostream>
using namespace std;

int main() {
    int choice;

    cout << ":: REPORT CARD MENU ::" << endl;
    cout << "1. Physics\n2. Chemistry\n3. Maths\n4. Hindi\n5. English\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Marks in Physics: 98" << endl;
            break;
        case 2:
            cout << "Marks in Chemistry: 99" << endl;
            break;
        case 3:
            cout << "Marks in Maths: 97" << endl;
            break;
        case 4:
            cout << "Marks in Hindi: 96" << endl;
            break;
        case 5:
            cout << "Marks in English: 95" << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 to 5." << endl;
    }

    return 0;
}
