#include <iostream.h>
#include <conio.h>
//using namespace std;
void area(int x,int y);
void area(int x=9);
void area(float s);
int main()
{
        int l,b;
        float r=4;
        clrscr();
        cout<<endl<<"enter value of l:";
        cin>>l;
        cout<<endl<<"enter value of b:";
        cin>>b;
        area(r);
        area(l,b);
        area();
        area(l);
        getch();
        return 0;
}
void area(float s)
{
	float ans;
	ans=3.14*s*s;
	cout<<endl<<"area of circle: "<<ans;
}
void area(int x)
{
	int ans;
	ans=x*x;
	cout<<endl<<"area of squre: "<<ans;
}
void area(int x,int y)
{
        int ans;
        ans=x*y;
        cout<<endl<<"area of rectangle: "<<ans;
}

