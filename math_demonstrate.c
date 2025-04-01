#include <stdio.h>
#include <math.h>

int main() {
    double x = 4.0, y = 2.0, angle = 3.14159 / 4; // angle in radians

    // pow(x, y): Computes x^y
    printf("pow(%.1f, %.1f) = %.2f\n", x, y, pow(x, y));

    // sqrt(x): Computes the square root of x
    printf("sqrt(%.1f) = %.2f\n", x, sqrt(x));

    // ceil(x): Rounds x up to the nearest integer
    printf("ceil(4.3) = %.1f\n", ceil(4.3));

    // floor(x): Rounds x down to the nearest integer
    printf("floor(4.7) = %.1f\n", floor(4.7));

    // fabs(x): Returns the absolute value of x
    printf("fabs(-5.5) = %.1f\n", fabs(-5.5));

    // sin(x), cos(x), tan(x): Computes trigonometric values (angle in radians)
    printf("sin(%.2f) = %.2f\n", angle, sin(angle));
    printf("cos(%.2f) = %.2f\n", angle, cos(angle));
    printf("tan(%.2f) = %.2f\n", angle, tan(angle));

    // log(x): Computes the natural logarithm (ln)
    printf("log(%.1f) = %.2f\n", x, log(x));

    // log10(x): Computes the base-10 logarithm
    printf("log10(%.1f) = %.2f\n", x, log10(x));

    return 0;
}
