#include <iostream.h>
#include <conio.h>
#define max 25
template<class t>
class arr
{
	public:
		t a[max];
		int elements,i;
		arr(int e)
		{
			elements=e;
			for(i=0;i<elements;i++)
			{
				a[i]=0;
			}
		}
		void get();
		void dis();
};
template<class t>
void arr<t> :: get()
{
	int i;
	for(i=0;i<elements;i++)
	{
		cout<<"\n Enter "<<i+1<<" element: ";
		cin>>a[i];
	}
}
template<class t>
void arr<t> :: dis()
{
	int i;
	cout<<"\n :: elements :: \n(";
	for(i=0;i<elements-1;i++)
	{
		cout<<a[i]<<" , ";
	}
	cout<<a[elements-1]<<" )";
}
int main()
{
	arr<float> a1(5);
	clrscr();
	a1.get();
	a1.dis();
	getch();
	return 0;
}