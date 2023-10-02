#include <iostream.h>
#include <conio.h>
class base
{
	public:
		void virtual fun()=0;

};
class der1:public base
{
	public:
		void virtual fun()
		{
			cout<<"\n this is derived class 1";
		}
};
class der2:public base
{
	public:
		void virtual fun()
		{
		       cout<<"\n this is derived class 2";
		}
};
int main()
{
	clrscr();
	base *p;
	der1 d1;
	der2 d2;
	p=&d1;
	p->fun();
	p=&d2;
	p->fun();
	getch();
	return 0;
}