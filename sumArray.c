// Program To find sum of array elements by passing to a function
#include <stdio.h>
int main()
{
    int a[1000],i,n,sum=0; 
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }
    printf("sum of array is : %d\n",sum);
    return 0;
}