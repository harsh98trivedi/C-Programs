// Program to print the right triangle pattern
#include<stdio.h>

int main(){
    int i,j,k;
    // main loop for chaning lines
    for(i=1;i<10;i++){
        //loop to print spaces before *s
        for(k=10;k>i+1;k--){
            printf(" ");
        }
        //loop to print *s
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
