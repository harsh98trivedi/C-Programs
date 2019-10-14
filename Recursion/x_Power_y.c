// Program to calculate x raised to power y

#include<stdio.h>


int power(int x, int y){

    int temp;
    if (y==0) return 1;
    temp = power(x,y/2);

    if (y%2==0) return temp*temp;
    else return temp*temp*x;
}

int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    printf("x raised to the power y: %d", power(x,y));

    return 0;
}