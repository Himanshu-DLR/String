#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],i;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        printf("%c",str[strlen(str)-i-1]);
    }
    return 0;
}