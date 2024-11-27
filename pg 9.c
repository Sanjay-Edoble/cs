#include <stdio.h> 


void main() 
{ 
    int a, i;  // Declaring variables correctly
    
    printf("\nEnter which multiplication table to be printed: "); 
    scanf("%d", &a); 
    
    // Loop to print multiplication table
    for (i = 1; i <= 10; i++) 
    {
        printf("\n%d x %d = %d", a, i, a * i); 
    }
    

}   