#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("the given character is a vowel");
    }
else{
    printf("the given character is a consonant");
}
}

