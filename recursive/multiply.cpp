#include <stdio.h>

int multiply(int m, int n);

int main(void) {
    int num1, num2;
    
    printf("Enter two integer numbers to multiply: ");
    scanf("%d%d", &num1, &num2);
    
    printf("%d x %d = %d\n", num1, num2, multiply(num1, num2)); 
    return 0;
}

int multiply(int m, int n) {
      if (n == 1)
            return m;     /* simple case */
      else
            return m + multiply(m, n  - 1);  /* recursive step */
}

