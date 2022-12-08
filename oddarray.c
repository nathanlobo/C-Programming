// Program To count the total number of odd numbers in an array
#include <stdio.h>
int main()
{
    system("cls");
    int a[1000],i,n,odd=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        odd++;
    }
    printf("Even numbers in array: %d\n",odd);
    return 0;
}