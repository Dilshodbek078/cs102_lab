#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Enter coordinates (x y): ";
    cin >> x >> y;
    double distance = sqrt((x*x)+(y*y));

    if (distance <= 10) {
        cout << "Point (" << x << ", " << y << ") is in circle." << endl;
    } else {
        cout << "Point (" << x << ", " << y << ") is not in circle." << endl;
    }

    return 0;
}
