
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;              // constants of equation
    float x1,x2;            

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;

    int D;
    D= b*b - 4*a*c;                     // determinant

    if(D>=0){                           //nature of roots
        if(D==0)
            cout<<"Roots are real and equal: ";
        else
            cout<<"Roots are real and distinct: ";

        x1=(-b+ sqrt(D))/(2*a);             // roots calculation by quadratic formula
        x2=(-b- sqrt(D))/(2*a);

        cout<<x1<<", "<<x2;
    }
    else
        cout<<"Roots are imaginary!";

    return 0;
}
