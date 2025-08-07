#include<iostream>
using namespace std;

int main() {
    int a, b, c, largest;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    cout << "The largest number is: " << largest << endl;

    return 0;
}
