#include <stdio.h>
// #include <string.h>
int main()
{
    system("cls");
    char strg[100],ch;  
    int i,count=0;
    printf("Enter the string : ");
    scanf("%s", strg);
    printf("Enter character to be searched: ");
    scanf(" %c", &ch);
    for(i=0;strg[i];i++)  
    {
    	if(strg[i]==ch)
    	{
          count++;
		}
 	}
    printf("character '%c' occurs %d times \n ",ch,count);
    return 0;
}