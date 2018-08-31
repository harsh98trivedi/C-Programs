//Program implements bubble sort algorithm

#include<stdio.h>

int main(){
    int i,j,n,c;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    // main algo
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }

    printf("\nThe sorted array: ");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }

    return 0;
}