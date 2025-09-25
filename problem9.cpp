#include <iostream>
using namespace std;

int main() {
    int speed;
    cout << "Enter the speed of a vehicle: ";
    cin >> speed;

    if (speed < 20) 
        cout << "Too slow" << endl;
    
    else if (speed > 80) 
        cout << "Too fast" << endl;
    
    else 
        cout << "Just right" << endl;
    

    return 0;
}
