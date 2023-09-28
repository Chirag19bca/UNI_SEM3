#include<iostream.h>
#include<conio.h>
class B;
class C;
class A
{
   public:
	  int n1;
	  void get()
	  {
	    cout<<"\n enter the first no: ";
	    cin>>n1;
	  }

	  void put()
	  {
	   cout<<"\n\n number 1: "<<n1;
	  }
   friend void avg();
};


class B
{
   public:
	  int n2;
	  void get()
	  {
	    cout<<"\n enter the second no: ";
	    cin>>n2;
	  }

	  void put()
	  {
	   cout<<"\n number 2: "<<n2;
	  }
   friend void avg();
};

class C
{
   public:
	  int n3;
	  void get()
	  {
	    cout<<"\n enter the third no: ";
	    cin>>n3;
	  }

	  void put()
	  {
	   cout<<"\n number 3: "<<n3;
	  }
   friend void avg();
};

void avg()
{
float avg,sum=0;
  A a;
  B b;
  C c;
  a.get();
  b.get();
  c.get();
  a.put();
  b.put();
  c.put();

  sum=a.n1+b.n2+c.n3;
  avg=sum/3;

  cout<<"\n \n avereage= "<<avg;
}

void main()
{
  clrscr();
  avg();
  getch();
}