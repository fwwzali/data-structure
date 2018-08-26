#include <stdio.h>

int factorial(int n);

int main(){
	int fctrl = 4;
	printf("faktorial dari %d ! = %d",fctrl,factorial(fctrl));
	
}

int factorial (int n) 
{ 
     if (n == 0)
         return 1;
     else
        return  n * factorial (n-1);
} 

