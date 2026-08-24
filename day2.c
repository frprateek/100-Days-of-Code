/*Q3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth*/

#include <stdio.h>

int main() {
    int length, breadth;
    
    if (scanf("%d %d", &length, &breadth) == 2) {
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }
    
    return 0;
}

/*Q4. Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double radius;
    if (scanf("%lf", &radius) == 1) {
        double area = PI * radius * radius;
        double circumference = 2 * PI * radius;
        
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }
    return 0;
}
