#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
public:
	A();
	A(int x);
	A(int x,int y);
	A(char P);
	A(char P,int q);
	void display();
};
A::A()
{
	a=10;
	b=30;
}
A::A(int x)
{
	x=a;
}
A::A(int x,int y)
{
	x=a;
	y=b;
}
A::A(char P)
{
	P='a';
}
A:A(char P,int q)
{
	P='b';
	q=a;
}
void display()
{
	cout<<x<<endl;
	cout<<x<<" "<<y<<endl;
	cout<<p<<endl;
	cout<<p<<" "<<q<<endl;
}



