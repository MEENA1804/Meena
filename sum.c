#include<stdio.h>
#include<conio.h>
void main()
{

    int num,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
{
    sum=sum+i;
    ++i;
}
printf("sum is %d",sum);
}
