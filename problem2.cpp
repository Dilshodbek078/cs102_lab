#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    cout << x%2<< endl;
    if (x%2==0)
        cout <<"Even"<< endl;
    else
        cout <<"Odd"<< endl;
    return 0;
}
