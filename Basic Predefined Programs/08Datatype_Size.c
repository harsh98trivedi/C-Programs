// Program to print size of different datatypes available in C
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 10;
    char b = 'a';
    float c = 20;
    double d = 30;
    printf("Size of int: %ld bytes\nSize of float: %ld bytes\nSize of char: %ld bytes\nSize of double: %ld bytes",sizeof(a),sizeof(c),sizeof(b),sizeof(d));
    return 0;
}