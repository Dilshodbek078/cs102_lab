
#include <iostream>
using namespace std;
int main() {
    double weight1, price1, weight2, price2;
    cout << "Enter weight and price for package 1: ";
    cin >> weight1 >> price1;
    cout << "Enter weight and price for package 2: ";
    cin >> weight2 >> price2;

    double cost1 = price1 / weight1;
    double cost2 = price2 / weight2;
    cout << "Cost of weight of package 1 = " << cost1 << endl;
    cout << "Cost of weight of package 2 = " << cost2 << endl;

    if (cost1 < cost2) {
        cout << "Package 1 has a better price" << endl;
    }
    else if (cost2 < cost1) {
        cout << "Package 2 has a better price" << endl;
    }
    else {
        cout << "Both packages have the same price" << endl;
    }
    return 0;
}
