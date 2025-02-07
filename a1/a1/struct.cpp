#include<iostream>
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
	};
	int main()
	{
		struct emp s1;
		struct emp s2;
		s1.assign();
		s2.dispaly();
		s2.id=333;
		s1.display();
		s2.display();
	}