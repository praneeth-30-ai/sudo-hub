/*#include<stdio.h>
void sub(int,int);
void main()
{
	    int x,y;
		x=20;
		y=5;
		sub(x,y);
		//printf("%d\n",z);

        printf("hello\n");
        sub(x,y);
        printf("hii\n");
        sub(x,y);
		
}
void sub(int a, int b)
{
        int c;
        //a=10;
        //b=5;
        c=a+b;
        printf("%d\n",c);
}*/
#include<stdio.h>
void rec(int);
void main()
{
	int i;
	rec(i);
}
void rec(int a)
{
	int a=5;
	if(a!=0)
	{
		printf("hello\n");
		a--;
		printf("%d\n",a);
	}
}
		printf("%d\n",a);