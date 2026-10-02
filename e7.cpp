#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, dx, dy, distance;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    dx = x2 - x1;
    dy = y2 - y1;
    distance = sqrt(pow(dx, 2) + pow(dy, 2));

    cout << fixed << setprecision(3);
    cout << "Distance: " << distance << endl;
    cout << "Rounded Distance: " << round(distance) << endl;

    return 0;
}
