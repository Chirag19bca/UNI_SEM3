#include <iostream.h>
#include <conio.h>
//using namespace std;
class student
{
	int rn;
	char name[50];
	float sci,maths,eng,c,cc;
	float total1;
        public:
                void get()
                {
                        cout<<"\n enter roll no: ";
                        cin>>rn;
                        cout<<"\n enter your name: ";
                        cin>>name;
                        cout<<"\n enter science marks: ";
                        cin>>sci;
                        cout<<"\n enter maths marks: ";
                        cin>>maths;
                        cout<<"\n enter english marks: ";
                        cin>>eng;
                        cout<<"\n enter C marks: ";
                        cin>>c;
                        cout<<"\n enter C++ marks: ";
                        cin>>cc;
                }
                void dis()
		{
                        cout<<"\n roll no: "<<rn;
                        cout<<"\n name: "<<name;
                        cout<<"\n marks of science: "<<sci;
                        cout<<"\n marks of maths: "<<maths;
                        cout<<"\n marks of english: "<<eng;
                        cout<<"\n marks of C: "<<c;
                        cout<<"\n marks of C++: "<<cc;
                        cout<<"\n total marks: ";
                        total();
                }
                void total()
                {
                        total1=sci+maths+eng+c+cc;
                        cout<<total1;
                }
};
int main()
{
        student s[2];
	int i;
	clrscr();
        for(i=0;i<2;i++)
        {
                s[i].get();
                s[i].dis();
        }
        getch();
        return 0;
}