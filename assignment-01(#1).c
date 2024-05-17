#include <stdio.h>
#include <math.h>

int main() {
    double d;
    double theta;
    int m;
    double lambda;
    const double pi=3.1416;
    printf("Enter the distance between the slits (in micrometers): ");
    scanf("%lf", &d);
    d = d * pow(10,-6);

    printf("Enter the angle of the maximum (in degrees): ");
    scanf("%lf", &theta);

    printf("Enter the order of the maximum: ");
    scanf("%d", &m);

    double theta_radians = theta * (pi / 180.0);

    lambda = (d * sin(theta_radians)) / m;

    printf("The wavelength of the light is approximately %.2f nm\n", lambda * pow(10,9));

    if (lambda >= 380e-9 && lambda <= 450e-9) {
        printf("The color of the light is violet.\n");
    } else if (lambda > 450e-9 && lambda <= 485e-9) {
        printf("The color of the light is blue.\n");
    } else if (lambda > 485e-9 && lambda <= 500e-9) {
        printf("The color of the light is cyan.\n");
    } else if (lambda > 500e-9 && lambda <= 565e-9) {
        printf("The color of the light is green.\n");
    } else if (lambda > 565e-9 && lambda <= 590e-9) {
        printf("The color of the light is yellow.\n");
    } else if (lambda > 590e-9 && lambda <= 625e-9) {
        printf("The color of the light is orange.\n");
    } else if (lambda > 625e-9 && lambda <= 750e-9) {
        printf("The color of the light is red.\n");
    } else {
        printf("The entered wavelength is not within the visible spectrum.\n");
    }

    return 0;
}
