#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
double power(double m,int n=2);
int main()
{
        double m,n;
        double ans;
        char c;
        cout<<"\n Enter value of m: ";
        cin>>m;
        cout<<"\n do you want to consider default arguments?(Y/N): ";
        cin>>c;
        if(c=='Y' || c=='y')
        {
                ans=power(m);
                cout<<"\n The power of "<<m<<" is "<<ans;
        }
        else
        {
                cout<<"\n Enter value of n: ";
                cin>>n;
                ans=power(m,n);
                cout<<"\n The power of "<<m<<" is "<<ans;
        }
        getch();
        return 0;
}
double power(double m,int n)
{
        double ans;
        ans=pow(m,n);
        return ans;
}
