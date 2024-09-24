#include <iostream>

using namespace std;

int main() {
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R; // радіус кола

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    if ((x <= 0 && y >= 0 && (x * x + y * y <= R * R)) || 
        (x >= 0 && y <= 0 && (x * x + y * y <= R * R)))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
