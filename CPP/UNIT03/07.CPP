#include <iostream.h>
#include <conio.h>
class matrix
{
	int a[2][2];
	public:
		void set()
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					cout<<"\n Enter element: ";
					cin>>a[i][j];
				}
			}
		}
		void dis()
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					cout<<a[i][j];
				}
				cout<<"\n";
			}
		}
		matrix operator +(matrix m0)
		{
			matrix temp;
			 for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					temp.a[i][j]=a[i][j]+m0.a[i][j];
				}
			}
			return (temp);
		}

};
int main()
{
	clrscr();
	matrix m1,m2,m3;
	cout<<"\n Enter first matrix: ";
	m1.set();
	cout<<"\n Enter second matrix: ";
	m2.set();
	m3=m1+m2;
	cout<<"\n first matrix: \n";
	m1.dis();
	cout<<"\n second matrix: \n";
	m2.dis();
	cout<<"\n result matrix: \n";
	m3.dis();
	getch();
	return 0;
}