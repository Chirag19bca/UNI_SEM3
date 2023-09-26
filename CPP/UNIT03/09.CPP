#include <iostream.h>
#include <conio.h>
class paise
{
	int p;
	public:
		void set(int a)
		{
			p=a;
		}
		void dis()
		{
			cout<<"\n paise is "<<p;
		}

};
class rupees
{
	int r;
	public:
		rupees()
		{
			r=10;
		}
		operator paise()
		{
			paise t;
			t.set(r*100);
			return (t);
		}
};
int main()
{
	clrscr();
	rupees r1;
	paise p1;
	p1=r1;
	p1.dis();
	getch();
	return 0;
}