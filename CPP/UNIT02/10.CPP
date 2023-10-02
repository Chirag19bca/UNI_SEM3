#include<iostream.h>
#include<conio.h>

class employee
{
  protected:
  int id;
  char name[50];
  float sal,m_sal;
};

class male:public employee
{
   private:
   int days;
   int hours;

   public:
   void get()
   {
     char c;

     cout<<"\n \033[1;34menter Employee Id: ";
     cin>>id;

     cout<<"\n enter the Name: ";
     cin>>name;

     cout<<"\n \n press 'd' for days or 'h' for hours to calculate salary:  ";
     cin>>c;
       if(c=='d'||c=='d')
	{
	  cout<<"\n enrter the days: ";
	  cin>>days;
	  hours=0;
	}
       else
	{
	   cout<<"\n enter hours: ";
	   cin>>hours;
	   days=0;
	}

   }

   void computepay()
   {
     if(hours==0)
      {
	cout<<"\n \n enter salary margin in days: ";
	cin>>m_sal;
	sal=(days)*m_sal;
      }
     else
      {
	cout<<"\n \n enter salary margin in hours: ";
	cin>>m_sal;
	sal=(hours)*m_sal;
      }
   }

   void put()
   {
      cout<<"\n\n Employe Id : "<<id;
      cout<<"\n Name: "<<name;
      cout<<"\n work in days: "<<days;
      cout<<"\n work in hours: "<<hours;
      cout<<"\n salary : "<<sal;
   }
};


class female:private employee
{
    public:

   void get()
   {
     char c;

     cout<<"\n\n\n  enter Employee Id: ";
     cin>>id;

     cout<<"\n enter the Name: ";
     cin>>name;


   }

   void computepay()
   {
	cout<<"\n \n enter salary margin: ";
	cin>>m_sal;
	sal=40*m_sal;

   }

   void put()
   {
      cout<<"\n\n Employe Id : "<<id;
      cout<<"\n Name: "<<name;
      cout<<"\n salary : "<<sal;
   }
};

void main()
{
  male m;
  female f;
  clrscr();

  m.get();
  m.computepay();
  m.put();

  f.get();
  f.computepay();
  f.put();

  getch();
}