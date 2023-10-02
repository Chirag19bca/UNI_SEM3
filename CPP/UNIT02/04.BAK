//calender and add days in the calender;
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>


int days;
int month;
int year;
class  calender
   {

   public:
	  void getdate();
	  void showdate();
	  void adddays(int);
	 // cout<<"\n d=days ,m=month,y=year";
	  calender()
	  {
	    days=month=year=0;
	  }
	  calender(int d,int m,int y)
	  {

		  if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		   {
		       if(d>31)
		       {
			 cout<<"\n days can't greater than 31\n";
			 goto end;
		       }
		   }
		   else if(m==4 || m==6 || m==8 || m==9 || m==11)
		   {
			if(d>30)
			{
			   cout<<"\n days can't grater than 30";
			   goto end;
			}
		   }
		   //cout<<"\n leap year logic";
		   else if(y%4==0 || y%4==100 || y%4!=400)
		   {
			 if(d>29)
			 {
			   cout<<"\n days cannot be graeter than 29 ";
			 }
		   }
		   else
		   {
		       if(d>28)
		       {
			 cout<<"\n days cannot greater than 28";
			 goto end;
		       }

		   }
		   if(m>12)
		   {
		     cout<<"\n month cannot be greater than 12";
		     goto end;
		   }
		   if(y>2023)
		   {
		     cout<<"\n the year cannot greater than current year";
		     goto end;
		   }

		      days=d;
		      month=m;
		      year=y;


		   end:
		       days=month=year=0;
		       cout<<"\n\n THIS TYPE DATE NOT ACCEPTABLE";
		       getch();
		       exit(0);

	  }

   };

  void calender :: adddays(int d)
  {
   days=days+d;
      
       if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
       {
            if(days>31)
            {
	       month++;
               days=days-31;
                   if(month>12)
                   {
                     year++;
		     month=1;
                   }
            }
       }
       else if(month==4 || month==6  || month==9 || month==11)
       {
	 if(days>30)
	 {
	    month++;
	    days=days-30;
	       if(month>12)
	       {
		  year++;
		  month=1;
	       }
	 }
       }
       else
       {
	 if(days>28)
	 {
	    month++;
	    days=days-28;
		if(month>12)
		{
		  year++;
		  month=1;
		}
	 }
       }
  }
void calender :: showdate()
{
   cout<<"\n \n";
   cout<<days<<" / "<<month<<" /"<<year;
}
void calender :: getdate()
{
   cout<<"\n enter the date=";
   cin>>days;

   cout<<"\n enter the month=";
   cin>>month;

   cout<<"\n enter the year=";
   cin>>year;
}
int main()
 {

 struct date dt;
  clrscr();
 
    // This function is used to get
    // system's current date
    getdate(&dt);
 
    printf("System's current date\n");
    printf("%d/%d/%d",
           dt.da_day,
	   dt.da_mon,
           dt.da_year);

   calender c1;
     c1.getdate();
     calender c2(days,month,year);
      c1.showdate();
      int d;
      cout<<"\n \n enter the days you want to add=";
      cin>>d;

      c1.adddays(d);
      c1.showdate();
      getch();
    return 0;
 }