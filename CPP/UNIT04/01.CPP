#include<iostream.h>
#include<conio.h>

class time
{
  private:
  int hour;
  int min;

  public:
  time()
  {
    hour=min=0;
  }

  time(int h,int m)
  {
    hour=h;
    min=m;
  }

  void gettime()
  {
    cout<<"\n Enter hour: ";
    cin>>hour;

    cout<<"\n Enter minutes: ";
    cin>>min;
  }

  void showtime()
  {
     cout<<"\n hour: "<<hour;
     cout<<"\n minutes: "<<min;
  }

  void operator ++()
  {
   ++min;
   if(min>=60)
    {
     ++hour;
     min=min-60;
    }
   }

    void operator ++(int v)
    {
     min++;
     if(min>=60)
      {
       ++hour;
       min=min-60;
      }
    }

  void operator--()
  {
    --min;
     if(min<=0)
     {
      --hour;
      min=min+60;
     }
  }
  void operator--(int v)
  {
   min--;
   if(min<=0)
   {
    hour--;
    min=min+60;
   }
  }

};

void main()
{
  time t1(3,20);

  clrscr();
  ++t1;
  t1.showtime();

  time t2;
  t2.gettime();
  t2--;
  t2.showtime();

  getch();
}