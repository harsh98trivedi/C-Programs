// Kadane's Algorithm to find Largest Sum Contiguous Subarray

#include<stdio.h>
  
int main() 
{
    int n,i,j;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array values: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    // main algo
    int max_so_far = 0, max_ending_here = 0; 
  
    for (i=0; i<n; i++) 
    { 
        max_ending_here = max_ending_here + arr[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    }

    printf("Maximum Sum of Contiguous Subarray is: %d", max_so_far);

    return 0; 
}
