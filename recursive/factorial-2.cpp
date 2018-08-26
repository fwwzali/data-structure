/* Computes the factorial of a number  */
#include <stdio.h>

int factorial(int n);
 
/* shows how to call a user-define function */
int main(void) {
   int num, fact;
   printf("Enter an integer between 0 and 7> ");
   scanf("%d", &num);
   if (num < 0) {
      printf("Factorial not defined for negative numbers\n");
   } else if (num <= 7) {
      fact = factorial(num);
      printf("The factorial of %d is %d\n", num, fact);
   } else {
      printf("Number out of range: %d\n", num);
   }
   
   return (0);
}

/* Computes n! for n greater than or equal to zero */
int factorial (int n) 
{ 
     if (n == 0) //base case
         return 1;
     else
        return  n * factorial (n-1); //recursive case
} 

