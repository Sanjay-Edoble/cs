#include <stdio.h> 


void main() 
{ 
    int a = 5, b = 6; 

    // Display initial values
    printf("\na = %d, b = %d", a, b); 

    // Relational operator outputs
    printf("\n a == b: %d", a == b);  // 1 if a and b are equal, else 0
    printf("\n a != b: %d", a != b);  // 1 if a is not equal to b, else 0
    printf("\n a > b: %d", a > b);    // 1 if a is greater than b, else 0
    printf("\n a < b: %d", a < b);    // 1 if a is less than b, else 0
    printf("\n a >= b: %d", a >= b);  // 1 if a is greater than or equal to b, else 0
    printf("\n a <= b: %d", a <= b);  // 1 if a is less than or equal to b, else 0
  // Wait for a key press
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h> 


void main() 
{ 
    int a = 16, b = 0; 

    // Display initial values
    printf("\na = %d, b = %d", a, b); 

    // Logical AND (&&)
    printf("\n a && b = %d", a && b); 
    // Explanation: Output is 1 if both `a` and `b` are non-zero, otherwise 0.

    // Logical OR (||)
    printf("\n a || b = %d", a || b); 
    // Explanation: Output is 1 if at least one of `a` or `b` is non-zero, otherwise 0.

    // Logical NOT (!) on `a`
    printf("\n !a = %d", !a); 
    // Explanation: Output is 1 if `a` is zero, otherwise 0.

    // Logical NOT (!) on `b`
    printf("\n !b = %d", !b); 
    // Explanation: Output is 1 if `b` is zero, otherwise 0.

}
