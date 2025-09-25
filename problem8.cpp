#include <iostream>;
using namespace std;
int main () {
    char Letter;
    cout << "Write a letter: ";
    cin >> Letter;

    if (Letter >= 'A' && Letter <= 'Z') {
        cout << "Uppercase alphabet";
    }
    else if (Letter >= 'a' && Letter <= 'z') {
        cout << "Lowercase alphabet";
    }
    else {
        cout << "Not an alphabet";
    }


    return 0;
}
