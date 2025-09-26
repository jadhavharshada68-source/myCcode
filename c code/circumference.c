#include <stdio.h>
#define PI 3.14159   // Defining value of PI

int main() {
    float radius, area, circumference;

    // Taking input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
