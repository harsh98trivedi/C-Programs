// Program to print the left triangle pattern
#include<stdio.h>

int main(){
    int i,j;
    // main loop for changing lines
    for(i=1;i<10;i++){
        // loop for printing *
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
