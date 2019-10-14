//Program implements Linear Search algorithm

#include<stdio.h>

int main(){
    int i,j,n,val,c=0;
    printf("Enter the array length: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to search for: ");
    scanf("%d", &val);

    // main algo
    for(i=0;i<n;i++){
        if(val==arr[i]){
            printf("Value found at %d index", i);
            c=1;
            break;
        }
    }

    if(c==0){
        printf("Value not found");
    }
    return 0;
}