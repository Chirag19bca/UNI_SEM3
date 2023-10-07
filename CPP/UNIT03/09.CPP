#include <iostream.h>
#include <conio.h>
class paise
{
	public:
	int p;
	friend void compute();

};
class rupees
{
	public:
	int r;

		void get()
		{
			cout<<"\n Enter Rupees: ";
			cin>>r;
		}
	  friend void compute();

};
		void compute()
		{
			rupees r1;
			paise p1;
			r1.get();
			p1.p=r1.r * 100;
			cout<<"\n paise is "<<p1.p;

		}
int main()
{
	clrscr();

	compute();
	getch();
	return 0;
}
