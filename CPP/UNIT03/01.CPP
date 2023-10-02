#include <iostream.h>
#include <conio.h>
class vehicle
{
	int vno;
	long int chno;
	public:
		virtual void dis()
		{
			cout<<"\n It is vehicle class";
		}
		void set()
		{
			cout<<"\n Enter vehicle no: ";
			cin>>vno;
			cout<<"\n Enter chassis no: ";
			cin>>chno;
		}
};
class scooter:public vehicle
{
	int wno;//wheels no
	char company[20];
	public:
		void dis()
		{
			cout<<"\n ---It is vehicle Scooter---\n";
		}
		void set_scooter()
		{
			cout<<"\n Enter no of wheels: ";
			cin>>wno;
			cout<<"\n Enter Company name: ";
			cin>>company;
		}
		void dis_scooter()
		{
			cout<<"\n No of wheels: "<<wno;
			cout<<"\n Company name: "<<company;
		}
};
class car:public vehicle
{
	long int price;
	char company[20];
	public:
		void dis()
		{
			cout<<"\n ---It is vehicle car---\n";
		}
		void set_car()
		{
			cout<<"\n Enter price of car: ";
			cin>>price;
			cout<<"\n Enter Company name: ";
			cin>>company;
		}
		void dis_car()
		{
			cout<<"\n Price of car: "<<price;
			cout<<"\n Company name: "<<company;
		}
};
int main()
{
	clrscr();
	vehicle *p;
	scooter s1,*p1;
	car c1,*p2;
	p=&s1;
	p1=&s1;
	p->dis();
	p->set();
	p1->set_scooter();
	p1->dis_scooter();
	getch();
	clrscr();
	p=&c1;
	p2=&c1;
	p->dis();
	p->set();
	p2->set_car();
	p2->dis_car();
	getch();
	return 0;
}