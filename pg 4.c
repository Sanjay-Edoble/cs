#include <stdio.h> 


void main() 
{ 
    int a, b, c; 
    float d; 

    /* READ THE VALUES OF TWO INTEGERS AND PERFORM ADDITION, 
       SUBTRACTION, MULTIPLICATION, AND DIVISION */ 

    printf("Enter the values for a and b: \n"); 
    scanf("%d %d", &a, &b); 

    // ADDITION 
    c = a + b; 
    printf("\n ADDITION OF TWO NUMBERS a = %d AND b = %d IS EQUAL TO c = %d\n", a, b, c); 

    // SUBTRACTION 
    c = a - b; 
    printf("\n SUBTRACT b = %d FROM a = %d WHICH IS EQUAL TO c = %d\n", b, a, c); 

    // MULTIPLICATION 
    c = a * b; 
    printf("\n MULTIPLICATION OF TWO NUMBERS a = %d AND b = %d IS EQUAL TO c = %d\n", a, b, c); 

    // DIVISION 
    if (b != 0) {  // Check to prevent division by zero
        d = (float)a / b;  // Convert integer 'a' to float for accurate division
        printf("\n DIVIDE a = %d BY b = %d WHICH IS EQUAL TO d = %.2f\n", a, b, d); 
    } else {
        printf("\n DIVISION BY ZERO IS NOT ALLOWED.\n");
    }

    
}
