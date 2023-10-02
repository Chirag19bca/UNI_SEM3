#include <fstream.h>
#include <stdio.h>
#include <conio.h>
int main()
{
	ofstream p1("product.txt");
	char pname[30];
	float price;
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"\n enter product name "<<i+1<<" : "; cin>>pname;
		cout<<"\n Enter price "<<i+1<<" : ";cin>>price;
		flushall();
		p1<<pname<<endl<<price<<endl;
	}
	p1.close();
	ifstream I1("product.txt");
	cout<<"\n Contents of product.txt file:";
	I1>>pname>>price;
	while(I1)
	{
		cout<<endl<<pname<<" : "<<price;
		I1>>pname>>price;
	}
	I1.close();
	getch();
	return 0;
}