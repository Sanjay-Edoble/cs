#include <stdio.h> 

int main() 
{ 
    int a = 16; 
    int b = 5; 

    printf("\n a = %d b = %d", a, b); 
    
    a += b; 
    printf("\n a += b: %d", a); 

    a -= b; 
    printf("\n a -= b: %d", a); 

    a *= b; 
    printf("\n a *= b: %d", a); 

    a /= b; 
    printf("\n a /= b: %d", a); 

    a %= b; 
    printf("\n a %%= b: %d", a); 

    
    return 0; 
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h> 

void main() 
{ 
 
int a = 15, b = 15, c = 15, d = 15; 
 
printf(" a = %d b = %d c = %d d = %d\n", a, b, c, d); 
printf("\nvalue of a++ = %d", a++); 
printf("\nvalue of ++b = %d", ++b); 
printf("\nvalue of c-- = %d", c--); 
printf("\nvalue of --d = %d", --d); 

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h> 


void main() 
{ 
    printf("\nSize of Integer: %d", sizeof(int)); 
    printf("\nSize of Character: %d", sizeof(char)); 
    printf("\nSize of Float: %d", sizeof(float)); 
    printf("\nSize of Long: %d", sizeof(long)); 
     
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h> 


void main() 
{ 
    int a = 7; 
    int b = 11; 

    printf("\n a = %d b = %d \n\n", a, b); 

    printf("\nBitwise AND (&) operator\n"); 
    printf("%d\n", a & b); 

    printf("\nBitwise OR (|) operator\n"); 
    printf("%d\n", a | b); 

    printf("\nBitwise XOR (^) operator\n"); 
    printf("%d\n", a ^ b); 

    printf("\nBitwise COMPLEMENT (~) operator\n"); 
    printf("%d\n", ~a); 

    printf("\nBitwise RIGHT SHIFT (>>) operator\n"); 
    printf("%d\n", a >> 2); 

    printf("\nBitwise LEFT SHIFT (<<) operator\n"); 
    printf("%d\n", a << 2); 

    
}
