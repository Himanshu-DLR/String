#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a word:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=str[strlen(str)-1-i])
        {
            printf("It is not a palindrome");
            return 0;
        }
    }
    printf("It is a palindrome");
    return 0;
}