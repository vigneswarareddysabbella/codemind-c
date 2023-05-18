#include <stdio.h>

double customSqrt(double num) {
    if (num < 0)
        return -1.0; // Error: Negative number cannot have a square root
    else if (num == 0)
        return 0.0;

    double x = num;
    double y = 1.0;
    double epsilon = 0.000001; // Define the desired precision

    while ((x - y) > epsilon) {
        x = (x + y) / 2.0;
        y = num / x;
    }

    return x;
}

double calculateTriangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area = s * (s - a) * (s - b) * (s - c);
    return area;
}

int main() {
    double sideA, sideB, sideC;
    scanf("%lf %lf %lf", &sideA, &sideB, &sideC);

    double area = calculateTriangleArea(sideA, sideB, sideC);
    if (area >= 0) {
        area = customSqrt(area);
        printf("%.2lf
", area);
    }
    else {
        printf("Invalid triangle sides. Unable to calculate the area.
");
    }

    return 0;
}
