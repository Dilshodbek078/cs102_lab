#include <iostream>;
using namespace std;
int main() {
    int Year;
    cout<<"The year= ";
    cin>>Year;
    if (Year%100!=0 && Year%4==0 || Year%400==0) {
        cout<<"The year is a leap year";

    }else {
        cout<<"The year is not a leap year";
    }
        return 0;

}
