#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "This is an Even number." << endl;
    else
        cout << "This is an Odd number." << endl;

    return 0;
}
