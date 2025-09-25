#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    int max = 0;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if (a>=b && a>=c) {
        cout <<"max = a which is "<< a <<endl;
    }
    else if (b>=a && b>=c) {
        cout <<"max = b which is "<< b <<endl;
    } else {
        cout <<"max = c which is "<< c <<endl;
    }

    return 0;
}
