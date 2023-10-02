#include<iostream.h>
#include<conio.h>

class book;
class tape;

class publisher
{
	protected:
    char title[50];
    
    public:
    friend  void get(publisher &p,book &b,tape &t);
    friend  void put(publisher &p,book &b,tape &t);
};

class book:private publisher
{
	protected:
    int p_no;
    
    public:
    friend  void get(publisher &p,book &b,tape &t);
    friend  void put(publisher &p,book &b,tape &t);
};

class tape:private publisher
{
	protected:
    int time;
    
    public:
    friend  void get(publisher &p,book &b,tape &t);
    friend  void put(publisher &p,book &b,tape &t);
};

void get(publisher &p,book &b,tape &t)
{
	cout << "\n Enter Book Title: ";
    cin >> p.title;
    
    cout << "\n Enter Page No: ";
    cin >> b.p_no;
    
    cout << "\n Enter Play Time: ";
    cin >> t.time;
}

void put(publisher &p,book &b,tape &t)
{
	cout << "\n\n Book Title: " <<p.title;
    cout << "\n Page No: " <<b.p_no;
    cout << "\n Play Time: " <<t.time;
}

int main()
{
	publisher p1;
    book b1;
    tape t1;
    
    clrscr();
    
    get(p1,b1,t1);
    put(p1,b1,t1);
    getch();
    return 0;
}
