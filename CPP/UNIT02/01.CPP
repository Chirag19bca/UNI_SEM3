#include<iostream.h>
#include<conio.h>
class B;
class A
{
   public:
	  int n1;
	  void get()
	  {
	    cout<<"enter the first no: ";
	    cin>>n1;
	  }

	  void put()
	  {
	   cout<<"\n\n number 1: "<<n1;
	  }
   friend void large();
};

class B
{
   public:
	  int n2;
	  void get()
	  {
	    cout<<"\n enter the first no: ";
	    cin>>n2;
	  }

	  void put()
	  {
	   cout<<"\n number 2: "<<n2;
	  }
      friend void large();
};

void large()
{
  A a1;
  B b1;
  a1.get();
  b1.get();
  a1.put();
  b1.put();
  if(a1.n1>b1.n2)
  {
    cout<<"\n \n     !!number 1 is larger!!";
  }
  else
  {
    cout<<"\n \n !!number 2 is larger!!";
  }

}

void main()
{
    clrscr();
    large();
    getch();

}
