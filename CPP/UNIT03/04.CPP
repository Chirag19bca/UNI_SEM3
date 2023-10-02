#include <iostream.h>
#include <conio.h>
class time
{
	int hour;
	int minute;
	public:
		void set()
		{
			cout<<"\n Enter Hour: ";
			cin>>hour;
			cout<<"\n Enter minute: ";
			cin>>minute;
		}
		void dis()
		{
			cout<<"\n"<<hour<<" : "<<minute;
		}
		void operator ++()//prefix
		{
			minute=minute+1;
			if(minute>=60)
			{
				minute=minute-60;
				hour=hour+1;
			}
			hour=hour+1;
		}
		void operator ++(int)//postfix
		{
			minute=minute+1;
			if(minute>=60)
			{
				minute=minute-60;
				hour=hour+1;
			}
			hour=hour+1;
		}
		void operator --()//prefix
		{
			hour=hour-1;
			if(minute>0)
			{
				minute=minute-1;
			}
			else
			{
				hour=hour-1;
				minute=59;
			}
		}
		void operator --(int)//postfix
		{
			hour=hour-1;
			if(minute>0)
			{
				minute=minute-1;
			}
			else
			{
				hour=hour-1;
				minute=59;
			}
		}
};
int main()
{
	clrscr();
	time t1,t2;
	cout<<"\n Increment operator: ";
	t1.set();
	t1++;
	t1.dis();
	++t1;
	t1.dis();
	cout<<"\n Decrement operator: ";
	t2.set();
	t2--;
	t2.dis();
	--t2;
	t2.dis();
	getch();
	return 0;
}