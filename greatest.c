#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("the greatest element is %d",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("the greatest element is %d",b);
    }
    else
    {
        printf("the greatest element is %d",c);
    }
}
