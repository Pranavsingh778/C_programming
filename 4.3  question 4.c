#include <stdio.h>

int main() {
    int choice;
    float area, radius, length, breadth, base, height;
    const float PI = 3.1416;

    // Display menu
    printf("----- Area Calculation Menu -----\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Menu-driven selection
    switch(choice) {
        case 1:
            // Area of Circle
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of the circle = %.2f\n", area);
            break;

        case 2:
            // Area of Rectangle
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle = %.2f\n", area);
            break;

        case 3:
            // Area of Triangle
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}

