#include <iostream.h>
#include <conio.h>
class cel
{
	float c;
	public:
		cel()
		{
			c=0;
		}
		cel(float val)
		{
			c=val;
		}
		void set_cel()
		{
			cout<<"\n Enter data in celsius: ";
			cin>>c;
		}
		float ret_cel()
		{
			return (c);
		}
		void print_cel()
		{
			cout<<"\n Celsius is "<<c;
		}
};
class fah
{
	float f;
	public:
		fah()
		{
			f=0.0;
		}
		fah(cel c11)
		{
			f=(((c11.ret_cel())*1.8)+32.0);
		}
		void set_fah()
		{
			cout<<"\n enter data in fahrenheit: ";
			cin>>f;
		}
		void print_fah()
		{
			cout<<"\n fahrenheit is "<<f;
		}
		operator cel()
		{
			float c;
			c=(f-32.0)/1.8;
			return (c);
		}
};
int main()
{
	clrscr();
	cel c1;
	fah f1;
	//conversion of celsius to fahrenheit
	c1.set_cel();
	f1=c1;
	f1.print_fah();
	//conversion of fahrenheit to celsius
	f1.set_fah();
	c1=f1;
	c1.print_cel();
	getch();
	return 0;
}