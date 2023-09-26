#include <iostream>
#include <conio.h>
using namespace std;
class shape
{
	double l,w;
	public:
	virtual void display_area()
	{
		cout<<"\n This function display the area of specified shape";
	}
	void get_data()
	{
		cout<<"\n Enter value of l: ";
		cin>>l;
		cout<<"\n Enter value of w: ";
		cin>>w;
	}
	int returnl()
	{
		return (l);
	}
	int returnw()
	{
		return (w);
	}

};
class rectangle:public shape
{
	void display_area()
	{
		int area;
		area=returnl() * returnw() ;
		cout<<"\n area of rectangle: "<<area;
	}
};
class triangle:public shape
{
	void display_area()
	{
		int area;
		area=(returnl() * returnw())/2;
		cout<<"\n area of triangle: "<<area;
	}
};
int main()
{
	clrscr();
	shape *p;
	rectangle r;
	triangle t;
	r.get_data();
	p=&r;
	p->display_area();
	t.get_data();
	p=&t;
	p->display_area();
	getch();
	return 0;
}
