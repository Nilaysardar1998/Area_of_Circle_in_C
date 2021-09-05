#include <stdio.h>

int main() {
    int radius;
    double pie = 3.14;
    printf("Enter the radius of circle: ");
    scanf_s("%d", &radius);

    printf("Area of circle: %.2f", pie * radius * radius);
    return 0;
}
