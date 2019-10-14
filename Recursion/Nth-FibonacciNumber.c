#include<stdio.h> 
int fib(int n) 
{ 
   if (n <= 1) 
      return n; 
   return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
  int n = 9; 
  printf("%d", fib(n)); 
  getchar(); 
  return 0; 
} 
// Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential.
