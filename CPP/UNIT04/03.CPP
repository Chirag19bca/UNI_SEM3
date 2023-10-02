#include <iostream.h>
#include <conio.h>
class cel//celcius
{
	public:
		float c;
		void get()
		{
			cout<<"\n Enter temperature in celcius: ";
			cin>>c;
		}
		void dis()
		{
			cout<<"\n Celcius value: "<<c;
		}
		float getcel()
		{
			return c;
		}

};
class fah //farenhit
{
	public:
		float f;
		fah()
		{
			cout<<"\n hello";
		}
		fah(cel t)
		{
			float ctemp;
			ctemp=t.getcel();
			f=(9.0/5.0) * ctemp + 32;
		}
		void getf()
		{
			cout<<"\n Enter temperature in farenhit: ";
			cin>>f;
		}
		void disf()
		{
			cout<<"\n farenhit value: "<<f;
		}
};
int main()
{
	cel c1;
	fah f1;
	clrscr();
	c1.get();
	f1=c1;
	f1.disf();
	getch();
	return 0;
}