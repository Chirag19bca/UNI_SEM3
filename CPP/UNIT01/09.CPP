#include <iostream.h>
#include <conio.h>
//using namespace std;
class number
{
        public:
                int num1,num2;
                void get()
                {
                        cout<<"\n Enter num1: ";
                        cin>>num1;
                        cout<<"\n Enter num2: ";
                        cin>>num2;
                }
                void largest(int n1,int n2)
                {
                        if(n1>n2)
                        {
                                cout<<endl<<n1<<" is largest";
                        }
						else
                        {
                                cout<<endl<<n2<<" is largest";
                        }
                }
};
int main()
{
        number n;
		number *p;
		clrscr();
        p=&n;
        p->get();
        p->largest(p->num1,p->num2);
        getch();
        return 0;
}