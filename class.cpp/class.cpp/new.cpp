#include<iostream>
using namespace std;
class A
{
        int a;
        int b;
        char p;
        public:
        A();
        A(int x);
        A(int x,int y);
        A(char p);
        A(char p,int y);
       void display();
};
A::A()
{
        a=10;
        b=30;
        p='\0';
}
A::A(int x)
{
        a=x;
        p='\0';
}
A::A(int x,int y)
{
        a=x;
        b=y;
        p='\0';
}
A::A(char p)
{
        p='w';
        a='\0';
        b='\0';
}
A::A(char p,int y)
{
        p='w';
        b=y;
        a='\0';
}
void A::display()
{
        cout<<"a: "<<a<<"b: "<<b<<"p: "<<p<<endl;
}
int main()
{
        A obj1;
        A obj2(10);
        A obj3(44,55);
        A obj4('a');
        A obj5('a',66);
        obj1.display();
        obj2.display();
        obj3.display();
        obj4.display();
        obj5.display();
}