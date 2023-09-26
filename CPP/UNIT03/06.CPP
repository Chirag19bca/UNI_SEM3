#include <iostream.h>
#include <conio.h>
class distance
{
	int feet,inch;
	public:
	distance()
	{
		feet=0;
		inch=0;
	}
	distance(int f,int i)
	{
		feet=f;
		inch=i;
	}
	void operator ==(distance d0)
	{
		int d1=(feet*12)+inch;
		int d2=(d0.feet*12)+d0.inch;
		if(d1==d2)
		{
			cout<<"\n both distance are same";
		}
		else
		{
			cout<<"\n both distance are not same";
		}
	}
	int operator < (distance d0)
	{
		int d1=(feet*12)+inch;
		int d2=(d0.feet*12)+d0.inch;
		if(d1<d2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
};
int main()
{
	clrscr();
	distance d1(1,2),d2(2,4);
	cout<<"\n == operator: ";
	d1==d2;
	cout<<"\n < operator: ";
	if(d1<d2)
	{
		cout<<"\n d1 is less";
	}
	else
	{
		cout<<"\n d2 is less";
	}
	getch();
	return 0;
}