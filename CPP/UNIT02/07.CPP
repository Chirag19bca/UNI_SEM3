#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

class scheme
{
  protected:

  int s_id;
  char s_name[100];
  float out_r;
  float mess_r;
  float bill;

  public:

  void get()
  {
    cout<<"\n  Enter scheme Id: ";
    cin>>s_id;

    cout<<"\n Enter scheme name: ";
    gets(s_name);

   cout<<"\n Enter the outgoing Rate: ";
   cin>>out_r;

   cout<<"\n Enter the message Rate: ";
   cin>>mess_r;
  }
  void put()
  {
    cout<<"\n\n\n Scheme Id: "<<s_id;
    cout<<"\n Scheme Nmae: ";
    puts(s_name);
    cout<<"\n Outgoing Rate: "<<out_r;
    cout<<"\n Message Rate:  "<<mess_r;
    getch();
  }

  void show()
  {
    cout<<"\n  Bill Is: "<<bill;
    getch();
  }

  void Bill()
  {
    int msg,call;

    cout<<"\n No of Messages: ";
    cin>>msg;

    cout<<"\n Number of Call: ";
    cin>>call;

    bill=(msg*mess_r)+(call*out_r);

  }
};

class customer:private scheme
{
 private:
   int c_id;
   char c_name[100];
   long int mo;

   public:

   void get()
   {
     cout<<"\n\n Enter customer Id: ";
     cin>>c_id;

     cout<<"\n Enter customer Name: ";
     gets(c_name);

     cout<<"\n Enter Mobile Number: ";
     cin>>mo;
   }

   void put()
   {
     cout<<"\n\n\n Customer Id: "<<c_id;
     cout<<"\n Customer Name: ";
     puts(c_name);
     cout<<"\n Mobile Number: "<<mo;
     getch();
   }
};


void main()
{
  clrscr();
  int c;
  do
  {
  clrscr();
  cout<<"\n  1. create scheme  ";
  cout<<"\n  2. create customer";
  cout<<"\n  3. show scheme";
  cout<<"\n  4. show customer";
  cout<<"\n  5. get bill";
  cout<<"\n  6. show bill";
  cout<<"\n  0. exit";
  cout<<"\n\n Enter choice: ";
  cin>>c;
  switch(c)
   {
    case 1:
	   scheme s;
	   s.get();
	   break;
    case 2:
	    customer c;
	    c.get();
	    break;
    case 3:
	    s.put();
	    break;
    case 4:
	    c.put();
	    break;
    case 5:
	    s.Bill();
	    break;
    case 6:
	    s.show();
	    break;
    case 0:
	    cout<<"\n good bye...";
	    break;
    default:
	 cout<<"\n\n \n !! not valid choice !!";

   }
  }while(c!=0);
  getch();
}

