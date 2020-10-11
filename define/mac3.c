#include <stdio.h>

//Macros with Arguments
#define AREA_CIRCLE(x)( 3.14 * x * x )
#define AREA_RECT(height, width)(height*width)

void main()
{
    float r, height, width;
    printf("Enter the circle radius: ");
    scanf("%f", &r);
    printf("\nArea if circle: %f\n", AREA_CIRCLE(r));
    printf("\nEnter rectangle height: ");
    scanf("%f", &height);
    printf("Enter rectangle width: ");
    scanf("%f", &width);
    printf("\nArea if rectangle: %f\n", AREA_RECT(height, width));
}