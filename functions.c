#include <stdio.h> 
  
// An example function that takes two parameters 'x' and 'y' 
// as input and returns max of two input numbers 
int max(int x) 
{ 
  x++;
  return x;
} 
  
// main function that doesn't receive any parameter and 
// returns integer. 
int main(void) 
{ 
    int a = 10; 
  
    // Calling above function to find max of 'a' and 'b' 
    int m = max(a); 
  
    printf("m is %d", m); 
    return 0; 
} 
