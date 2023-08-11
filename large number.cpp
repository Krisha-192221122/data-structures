#include <stdio.h>    
     
int main()    
{         
    int arr[] = {25, 11, 77, 75, 56, 55, 12, 21, 33, 63};      
    int max = arr[0];    
    for (int i = 0; i < 10; i++) 
	{         
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);      
}    
