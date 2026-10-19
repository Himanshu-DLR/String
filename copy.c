#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter first and second string:");
    scanf("%s %s",&s1,&s2);
    strcpy(s1,s2);
    printf("Copied string is: %s",s1);
    return 0;
}