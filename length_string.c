//  Program to find the length of a string
#include <stdio.h>
int main() {
    system("cls");
    char strg[31];
    int i;
    printf("Enter a string of max 30 characters: ");
    scanf("%s", strg);
    for (i=0; strg[i]!='\0'; i++);
    printf("Length of the string: %d\n", i);
    return 0;
}