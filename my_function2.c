#include<stdio.h>

void SumOf(int a,int b)
{
    int sum;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Sum Of %d and %d = %d\n",a,b,a+b);
}
void SubOf(int a,int b)
{
    int sub;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Substraction Of %d and %d = %d\n",a,b,a-b);
    
}
void MultiplicationOf(int a,int b)
{
    int multi;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Multiplication of %d and %d = %d\n",a,b,a*b);
}
void DivisionOf(int a,int b)
{
    int div;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Division of %d and %d = %d\n",a,b,a/b);
}
void ModulasOf(int a, int b)
{
    int mod;
    printf("Enter Numbers : \n");
    scanf("%d %d",&a,&b);
    printf("%d Modulus %d = %d\n",a,b,a%b);
}

void cube(int a)
{
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Cube Of %d is : %d\n",a,a*a*a);
}

void check(int a)
{
    printf("Enter Number : ");
    scanf("%d",&a);
    if(a%3==0 && a%5 ==0)
    {
        printf("%d is Divisible by 3 and 5 Both",a);
    }
    else
	{ 
		printf("%d is not Divisible By 3 and 5 Both",a);
	}
}

int GetInt(int a)
{
	printf("Enter Value:");
	scanf(%d,&a);
}

int ArrayName(char name[],int index)
{
    int n;
    printf("Enter %s[%d] : ",name,index);
    scanf("%d",&n);
    return n;
}
void ArrayIndex(int a[], int n)
{
	int i;
    for(i=0; i<n; i++)
    {
        a[i]=ArrayName("array",i);
    }
}
void ArrayElements(int a[], int n)
{
	int i;
    printf("Array Elements : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void MenuDrivenProgram(int n)

{
    int a,b;
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %\n");
    printf("Press 0 for Exit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : SumOf(a,b);
        MenuDrivenProgram(n);
        case 2 : SubOf(a,b);
        MenuDrivenProgram(n);
        case 3 : MultiplicationOf(a,b);
        MenuDrivenProgram(n);
        case 4 : DivisionOf(a,b);
        MenuDrivenProgram(n);
        case 5 : ModulasOf(a,b);
        MenuDrivenProgram(n);
        case 0 :
	    break;
    }
}
