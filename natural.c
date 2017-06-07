#include<stdio.h>
#include<conio.h>
void main()
{
    int i,num,s=0;
    printf("\n enter the number");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        s=s+i;
    }
    printf("%d",s);
}
