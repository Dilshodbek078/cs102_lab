#include <iostream>
using namespace std;
int main() {
 int x,y;
 cout << "Enter first number: ";
 cin >> x;
 cout << "Enter second number: ";
 cin >> y;

 if (x%5==0 && y%5!=0 ) {
  cout << x <<" is divisible by 5 ";
 }else if (x%5!=0 && y%5==0 ) {
  cout <<y<<" is divisible by 5 ";
 }else if (x%5==0 && y%5==0 ) {
  cout << "both "<<x<< " and "<< y <<" are divisible by 5 ";
 }
 return 0;
}
