
#include <iostream>;
using namespace std;
int main () {
    double a,b,c;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    cout<<"Enter c=";
    cin>>c;
    cout<<endl;
    if (a<0 || b<0 || c<0)
        cout <<"The side of a triangle cannot be a negative number";
    else
        if (a+b>c && a+c>b && b+c>a)
            cout<<"The triangle is valid";
        else {
            cout<<"The triangle is invalid";
        }


    return 0;
}
