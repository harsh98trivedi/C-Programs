/*
// Counting Sort
// by- @imkaka
*/
// It is non-comparasion based sorting technique, with time complexity to O(n).

#include<stdio.h>

// Function Defination
void countingSort(int a[],int n,int max)
{
     int count[50]={0},i,j;
     
     for(i=0;i<n;++i)
      count[a[i]]=count[a[i]]+1;       // partial hashing
      
     printf("\nSorted Elements are:");
     
     for(i=0;i<=max;++i){
       for(j=1;j<=count[i];++j)
          printf("%d ",i);
       }
}
 
// Main 
int main()
{
    int a[50],n,i,max=0;
    printf("Enter number of Elements:");
    scanf("%d",&n);
    printf("\nEnter Elements:");
                  
    for(i=0;i<n;++i)
    {
     scanf("%d",&a[i]);
     if(a[i]>max)
      max=a[i];
    }
    
    // Function call
    countingSort(a,n,max);
    return 0;
}
