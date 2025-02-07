/*#include<iostream>
using namespace std;
struct emp
{
	int id;
	char dep;
	float sal;
	void assign()
	{
		id=123;
		sal=3455;
		dep='a';
	}
	void display()
	{
		cout<<"id is"<<id<<endl;
		cout<<"sal is"<<sal<<endl;
		cout<<"dep is"<<dep<<endl;
	}
};
	int main()
	{
		struct emp s1;
		struct emp s2;
		s1.assign();
		s2.displa
			y();
		s2.id=333;
		s1.display();
		s2.display();
	}*/
#include<iostream>
using namespace std;
struct emp
{
	int id;
	float sal;
	char dept;
	void assign()
	{
		id=123;
		sal=444;
		dept='c';
	}
	void check()
	{
		struct emp e1;
		e1.id=333;
		e1.sal=888;
		e1.dept='p';
	}
	void display()
	{
		cout<<"id is"<<id<<endl;
		cout<<"sal is"<<sal<<endl;
		cout<<"dept is"<<dept<<endl;
	}
	void show()
	{
		struct emp e1;
		cout<<"id is"<<id<<e1.id<<endl;
		cout<<"sal is"<<sal<<e1.sal<<endl;
		cout<<"dept is"<<dept<<e1.dept<<endl;
	}
};

