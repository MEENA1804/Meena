#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("enter a number");
scanf("%d",&num);
if(num<0)
    {
        printf("the given number is negative number");
    }
    else if(num>0)
    {
        printf("the number is positive number");
    }
    else
    {
        printf("the given number is zero");
    }
}
