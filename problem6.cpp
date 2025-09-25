#include <iostream>;
#include <cmath>;
using namespace std;
int main () {
double a,b,c;
    cout<<"Enter a=";
    cin>>a;
    cout<<endl;
    cout<<"Enter b=";
    cin>>b;
    cout<<endl;
    cout<<"Enter c=";
    cin>>c;
    cout<<endl;

    double D;
    D=b*b-4*a*c;
    if (D<0)
        cout<<"There's no solution since D<0";
    else if (D>0) {
        double x1,x2;
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"x1= "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;

    }else if (D==0) {
        cout<<"x1=x2="<<-b/(2*a)<<endl;
    }
    return 0;
}
