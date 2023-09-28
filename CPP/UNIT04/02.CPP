#include<iostream.h>
#include<conio.h>

class distance
{
  private:
  int feet;
  int inch;

  public:

  distance()
  {
   feet=0;
   inch=0;
  }

  distance(int f,int i)
  {
  feet=f;
  inch=i;
  }

  void get()
  {
     cout<<"\n Enter the feet: ";
     cin>>feet;
     cout<<"\n enter the inch: ";
     cin>>inch;
  }

  void show()
  {
     cout<<"\n Feet: "<<feet<<"\t inch: "<<inch;
  }

  int operator==(distance T)
  {
   int toinch1=0,toinch2=0;
   toinch1=feet*12+inch;
   toinch2=T.feet*12+T.inch;
   if(toinch1==toinch2)
   return 1;
   else
   return 0;
  }

  int operator>(distance T)
  {
    int toinch1=0,toinch2=0;
    toinch1=feet*12+inch;
    toinch2=T.feet*12+T.inch;
    if(toinch1==toinch2)
    return 1;
    else
    return 0;
  }
};

void main()
{
 distance d1(5,10),d2;
 clrscr();

 if(d1==d2)
  cout<<"\n both object are equal ";
  else
     cout<<"\n both object are not equal ";

     distance d3,d4;
     d3.get();
     d4.get();
     if(d3==d4)
      cout<<"\n d3 is big";
     else
      cout<<"\n d4 is big";

      getch();

}