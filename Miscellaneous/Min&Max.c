// Program to find minimum and maximum element of array

#include<stdio.h>

int main(){

    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int min=arr[0], max=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }

    printf("The Max value is: %d\nThe Min value is: %d", max, min);

    return 0;
}