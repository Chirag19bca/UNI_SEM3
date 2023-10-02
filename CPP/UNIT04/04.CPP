#include <iostream.h>
#include <conio.h>
template<class t>
t maxarr(t arr[],int size)
{
	t m;
	m=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];
		}
	}
	return m;
}
int main()
{
	float a[5];
	int i;
	clrscr();
	cout<<"\n enter 5 float values: \n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	float max=maxarr(a,5);
	cout<<"\n maximum array is "<<max;
	getch();
	return 0;
}