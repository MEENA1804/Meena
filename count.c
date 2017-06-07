#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,num;
printf("to count number of elements given");
scanf("%d",&num);
while(num!=0)
{
    num=num/10;
    count++;
}
printf("the value is %d",count);
}
