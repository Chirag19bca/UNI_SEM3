#include <iostream.h>
#include <conio.h>
class shape
{
	double l,w;
	public:
	virtual void display_data()
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
		cout<<"\n area of rectangle: ";
		int area=returnl() * returnw();
		cout<<"\n area is "<<area;
	}
};
class triangle:public shape
{
	void display_area()
	{
		cout<<"\n area of triangle: ";
		int area=(returnl() * returnw())/2;
		cout<<"\n area is "<<area;
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
	p->display_data();
	t.get_data();
	p=&t;
	p->display_data();
	getch();
	return 0;
}