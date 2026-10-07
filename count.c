#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0;
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        count++;
    }
    printf("Number of spaces in the string: %d\n", count);
    return 0;
}