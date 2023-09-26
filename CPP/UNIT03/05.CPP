#include <iostream.h>
#include <conio.h>
#include <string.h>
class str
{
	char s[20];
	public:
	str()
	{
		s[0]='\0';
	}
	str(char c[10])
	{
		strcpy(s,c);
	}
	void operator +(str s0)
	{
		strcat(s,s0.s);
		cout<<s;
	}

};
int main()
{
	clrscr();
	str s1("abc");
	str s2("def");
	s1+s2;
	getch();
	return 0;
}