// Program To sort the elements in an array in ascending order
#include <stdio.h>     
int main()    
{   
    system("cls");   
    int arr[] = {5, 2, 8, 7, 1};     
    int temp = 0;  
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Elements of original array: ");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;    
           }     
        }     
    }    
    printf("\n");
    printf("Elements of array sorted in ascending order: ");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    printf("\n\n");
    return 0;    
}     