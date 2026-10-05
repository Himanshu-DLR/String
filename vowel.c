#include<stdio.h>
#include<string.h>
int main()
{
    int i,vow=0,cont=0;
    char name[50];
    printf("Enter a string:");
    scanf("%s",name);
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            vow=vow+1;
        }
        else
        {
            cont=cont+1;
        }
    }
    printf("Number of vowels in string: %d\n", vow);
    printf("Number of consonants in string: %d\n", cont);
    return 0;
}