//Program to implement Binary Search Algorithm

#include<stdio.h>
#include<stdlib.h>

int binarySearch(int[], int, int, int);

int main(){
    int number, data, position;
    int *array;
    printf("Enter number of elements: ");
    scanf("%d",&number);
    //Creating an array of size n
    array = malloc(number * sizeof(int));
    for(int i=0; i<number; i++)
        scanf("%d",&array[i]);
    printf("Enter number to be searched: ");
    scanf("%d", &data);
    //Searching for the entered element
    position = binarySearch(array, 0, number-1, data);
    //If position is -1 no element is found else print the position of element
    position != -1 ? (printf("Element %d found at position %d", data, position+1)) : (printf("Element not found"));
    return 0;
}

int binarySearch(int array[], int left, int right, int data){
    int position;
    int mid = (left+right)/2;
    if(left > right){
        //if element is not found returns -1
        return -1;
    }
    //if element is less than mid, then right = mid-1
    if(data < array[mid])
        position = binarySearch(array, left, mid-1, data);
    //if element is equal to mid, then element is found and returned to main function
    else if(data == array[mid])
        return mid;
    //if element is greater then mid the left = mid+1
    else if(data > array[mid])
        position = binarySearch(array, mid+1, right, data);
}
