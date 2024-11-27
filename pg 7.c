#include <stdio.h> 


void main() 
{ 
    int a, b, h, r, area, volume; 
    float area1, vol, pi = 3.144; 

    // Square
    printf("\nEnter the side of a square: "); 
    scanf("%d", &a); 
    area = a * a; 
    volume = a * a * a; // Volume of cube
    printf("\nArea of a square = %d", area); 
    printf("\nVolume of a cube = %d", volume); // Changed "square" to "cube"

    // Rectangle
    printf("\n\nEnter length, breadth, and height of a rectangle: "); 
    scanf("%d %d %d", &a, &b, &h); 
    area = a * b; 
    volume = a * b * h; 
    printf("\nArea of a rectangle = %d", area); 
    printf("\nVolume of a rectangle = %d", volume); 

    // Circle (actually Sphere for volume)
    printf("\n\nEnter the radius of a circle: "); 
    scanf("%d", &r); 
    area1 = pi * r * r; 
    vol = (4.0 / 3.0) * pi * r * r * r; // Volume of sphere
    printf("\nArea of circle = %f", area1); 
    printf("\nVolume of sphere = %f", vol); // Changed "circle" to "sphere"


}
