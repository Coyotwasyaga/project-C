#include <stdio.h>
#include <stdlib.h>
void menu();
int square();
int multiply();
void action();
int option;
int main()
{
    int option;
	void menu();
	menu();
    void action();
    action(option);
}
int square()
{
	int n1;
	scanf("%d",&n1);
	n1 = n1 * n1;
    printf("Square number is: %d\n",n1);
    return 0;
}
int multiply()
{
	int a;int b;int c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	c = (a*b);
	printf("Multiply  numbers (a) and (b) is: %d\n", c);
    return 0;
}	
void menu()
{   
	printf( "\tWhat would you like to do?:" );
	printf( "\n\t1.Square number" ) ;
	printf( "\n\t2.Multiply numbers" ) ;
	printf( "\n\t3.Exit\n" ) ;
   	action();
	
}
void action()
{
    int option;
	scanf("%d",&option);
	if (option==1)
	{
		printf("Square number: \n");
		square();
	}
    else if (option==2)
	{
		printf("Multiply numbers: \n");
		multiply();
	}
	else if (option==3)
	{
		exit;
	}
    else
	{
		printf("Unknow operation:\n");
	}
}   