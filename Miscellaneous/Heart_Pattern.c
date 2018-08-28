// Program to print a heart pattern
#include<stdio.h>

int main(){
    int i,j;
    //loop for the upper part of the heart
    for(i=0;i<3;i++){
        for(j=i;j<2;j++){
            printf(" ");
        }
        for(j=(i*2)+5;j>0;j--){
            printf("*");
        }

        for(j=5-(i*2);j>0;j--){
            printf(" ");
        }

        for(j=(i*2)+5;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    //loop for the lower part of the heart
    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=19-(2*i);j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}