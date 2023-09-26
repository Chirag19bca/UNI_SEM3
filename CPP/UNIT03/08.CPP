#include <iostream.h>
#include <conio.h>
class coords
{
	int x,y;
	public:
	void setxy()
	{
		cout<<"\n Enter x: ";
		cin>>x;
		cout<<"\n Enter y: ";
		cin>>y;
	}
	void printxy()
	{
		cout<<"\n"<<x<<":"<<y;
	}
	void operator ++()
	{
		x=x+1;
		y=y+1;
	}

	void operator ++(int)//postfix
	{
		x=x+1;
		y=y+1;
	}
	void operator -()
	{
		x=-x;
		y=-y;
	}
};
int main()
{
	clrscr();
	coords c1,c2;
	cout<<"\n Increment operator";
	c1.setxy();
	c1++;
	c1.printxy();
	++c1;
	c1.printxy();
	cout<<"\n Decrement operator";
	c2.setxy();
	-c2;
	c2.printxy();
	getch();
	return 0;
}