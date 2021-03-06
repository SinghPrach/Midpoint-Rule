#include <iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

double function(double x)
{
    double f = sqrt(1+x*x);
    return f;
}

int main()
{
    double a,b,n,i,N,t,delx,integral,a1,a2,m;
    cout<<"Function is f = sqrt(1+x*x)"<<endl;
    //cout<<"Enter the value of first boundary:";
    //cin>>a;
    //cout<<"Enter the value of second boundary:";
    //cin>>b;
    //since the upper and lower boundaries are fixed
    a = 1;
    b = 4;
    cout<<"Enter the minimum number of intervals:";
    cin>>n;
    cout<<"Enter the maximum number of intervals:";
    cin>>N;
    cout<<"Number of intervals \t Integral Value"<<endl;
    for(;n<=N;n++)
    {
        a1 = 0;
        a2 = 0;
        m = 0;
        t = a;
        delx = (b-a)/n;
        integral = 0;
     for (i = 1; i <= n; i++)
        {
            a1 = t;
            a2 = t+delx;
            m = (a1+a2)/2.0;
            integral = integral+delx*function(m);
            //error = fabs(integral - actualvalue);
            t = t+delx;
            //cout<<"a1="<<a1<<"\ta2="<<a2<<"\tm="<<m<<"\t t="<<t<<endl;
        }
     cout <<n<< "\t \t \t" << integral <<endl;
    }

    return 0;
}
