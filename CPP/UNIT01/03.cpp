#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
        int s_age=20;
        int &age=s_age;//reference variable
        cout<<"\n student age: "<<s_age;
        cout<<"\n value of age: "<<age;
        age=age+10;
        cout<<"\n after add 10 in reference vaiable";
        cout<<"\n student age: "<<s_age;
        cout<<"\n value of age: "<<age;
        getch();
        return 0;
}