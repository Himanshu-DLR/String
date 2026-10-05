#include<stdio.h>
#include<string.h>
int main()
{
    int Length;
    char name[100];
    printf("Enter any string to find its length:");
    scanf("%s",name);
    Length=strlen(name);
    printf("Length of the string is: %d",Length);
    return 0;
}