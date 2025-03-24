 #include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q[MAX];
int F = -1;
int R=0;
void insert(int);
int Delete();
void Disp();
void Insert_R(int item)
enum Stack{INSERT=1,DEL,DISP,EXIT,INSERT_R};
void main()
{
	int del;

	while(1)
	{
		int choise;
		printf("1-INSERT,2-DEL,3-Disp,4- Exit\n");
		scanf("%d",&choise);

		switch(choise)
		{
		case INSERT:
			{
				int item;
				printf("enter the Item\n");
				scanf("%d",&item);
				insert(item);
			}
			break;
		case INSERT_R:
			{
				int item;
				printf("enter the item\n");
				scanf("%d",&item);
				Insert_R(item);
			}
		case DEL:
			{
				int Del;				
				Del = Delete();
				printf("Deleted Item is:%d\n",Del);
			}
			break;
		case DISP:
			{
				Disp();
			}
			break;
		case EXIT:
			{
				exit(0);
			}
			break;
		default:
			{
				printf("Invalid Choise\n");
			}
			break;
		}
	}
}
void insert(int item)
{
	if(F == MAX-1)
	{
		printf("queue is Full\n");
	}
	else
	{
		F++;
		Q[F] = item;
	}

}
int Delete()
{
	int del = 0;
	if((F==-1)&&(R==0))
	{
		printf("queue is Empty\n");
	}
	else
	{
		del = Q[R];
		R++;

	}
	if(R>F)
	{
		R=0;
		F=-1;
	}
	return del;
}
void Disp()
{

	if((F==-1)&&(R==0))
	{
		printf("queue is Empty\n");
	}
	else
	{
		int i;
		printf("Stack elements are ::\n");
		for(i=R;i<=F;i++)
		{
			printf("%d\n",Q[i]);
		}

	}
}
void Insert_R(int item)
		
{
	if (R!= 0)
	{
		R--;
		Q[r]=item;
	}
	else
	{
		printf("no space\n");
	}
}