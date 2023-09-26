#include <iostream>
#include <conio.h>
using namespace std;
void swap();
class A
{
        friend void swap();
        int x;
        public:
        void get()
        {
                cout << "\n Enter value of x: ";
                cin >> x;
        }
        void dis()
        {
                cout << "\n value of x: " << x;
        }
};
class B
{
        friend void swap();
        int y;
        public:
        void get()
        {
                cout << "\n Enter value of y: ";
                cin >> y;
        }
        void dis()
        {
                cout << "\n value of y: " << y;
        }
};
void swap()
{
        int temp;
        clrscr();
        A p;
        B q;
        p.get();
        q.get();
        cout << "\n before swaping";
        p.dis();
        q.dis();
        temp = p.x;
        p.x = q.y;
        q.y = temp;
        cout << "\n after swaping";
        p.dis();
        q.dis();
}
int main()
{
        swap();
        return 0;
}
