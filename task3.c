#include <stdio.h>

int add(int, int);
float addFloat(float a, float b);
float areaOfCircle(float radius);
float areaOfRectangle(float length, float width);
int factorial(int n);

int main() {
 
    int num1 = 5, num2 = 3;
    printf("Addition of %d and %d is: %d\n", num1, num2, add(num1, num2));
 
    float fnum1 = 5.5, fnum2 = 2.3;
    printf("Addition of %.2f and %.2f is: %.2f\n", fnum1, fnum2, addFloat(fnum1, fnum2));
 
    float radius = 4.5;
    printf("Area of circle with radius %.2f is: %.2f\n", radius, areaOfCircle(radius));
 
    float length = 6.0, width = 3.0;
    printf("Area of rectangle with length %.2f and width %.2f is: %.2f\n", length, width, areaOfRectangle(length, width));

 
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;
}
int add(int a, int b) {
    return a + b;
}

float addFloat(float a, float b) {
    return a + b;
}

float areaOfCircle(float radius) {
    return 3.14159 * radius * radius;
}

float areaOfRectangle(float length, float width) {
    return length * width;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
