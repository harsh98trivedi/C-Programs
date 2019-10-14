/* Insertion sort ascending order */
 
#include <stdio.h>
 
int main()
{
  int n, array[1000], c, d, t;

 /* Enter number of elements */
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
 /* Function to sort an array using insertion sort*/
 
 for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
   /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
   
    while ( d > 0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
// A utility function to print an array of size n 
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
