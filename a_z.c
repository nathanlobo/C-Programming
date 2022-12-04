// Program to display alphabets from a to z
#include <stdio.h>
int main()
{
    system("cls");
    char ch;
    printf("Alphabets from a - z are:\n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c, ", ch);
    }
    return 0;
}
