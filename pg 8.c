#include <stdio.h> 


void main() 
{ 
    int a, b, c; 
    printf("\nEnter the three numbers: "); 
    scanf("%d %d %d", &a, &b, &c); 
    printf("\n a = %d b = %d c = %d", a, b, c); 
    
    // Compare a and b to find the biggest
    if(a > b && a > c) 
    { 
        printf("\n\nThe biggest number (a) = %d", a); 
    } 
    else if(b > c) 
    { 
        printf("\n\nThe biggest number (b) = %d", b); 
    } 
    else 
    { 
        printf("\n\nThe biggest number (c) = %d", c); 
    } 

  
}
