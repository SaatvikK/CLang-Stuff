//05/11/2020
//FizzBuzz
//If i is divisible by 3, print "Fizz". If i is divisble by 5, print "Buzz". If i is divisble by both print "FizzBuzz". If i is divisble by neither print i.
#include "stdio.h"
int main(void) {
  for(int i = 0; i < 100; i++) { //Increments "i" from 0 until i = 100
    //printf("%d\n", i);

    if(i % 3 == 0 && i % 5 == 0) { printf("FizzBuzz!\n"); }
    if(i % 3 == 0) { printf("Fizz!\n"); } //% is the modulo function, it gets the reminder of a division.  Eg: if the remainder of i/3 = 0, then i is divisible by 3.
    if(i % 5 == 0) { printf("Buzz!\n"); }
    if(i % 3 != 0 && i % 5 != 0) { printf("%d\n", i); }
  }
}
