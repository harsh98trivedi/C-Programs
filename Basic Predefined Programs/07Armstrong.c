//Program to check if a number is an armstrong number
#include<stdio.h>
#include<math.h>

int check_armstrong(int num){
    int a, arm_num=0, len=0, temp_num=num;
    // finding length of the integer
    while(temp_num){
        len+=1;
        temp_num /= 10;
    }
    temp_num=num;
    // calculating its armstrong equivalent
    while(temp_num){
        a=temp_num%10;
        arm_num+=pow(a,len);
        temp_num/=10;
    }
    // checking if it is an armstrong number
    if(num==arm_num) return 1;
    else return 0;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (check_armstrong(num)){
        printf("%d is an Armstrong Number.", num);
    }
    else{
        printf("%d is not an Armstrong Number.", num);
    }
    return 0;
}