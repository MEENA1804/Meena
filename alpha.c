#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("the given character is a alphabet %c",ch);
    }
    else{
        printf("the given character is not a alphabet %c",ch);
    }
}
