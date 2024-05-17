#include <stdio.h>
#include <math.h>

int main() {
    double lambda_green = 530 * pow(10,-9);
    double theta_green = 65.0;
    int m_green = 3;
    double lambda_red = 700 *pow(10,-9);
    int m_red = 2;
    const double pi=3.1416;
    double theta_green_radians = theta_green * (pi / 180.0);
    double d = (m_green * lambda_green) / sin(theta_green_radians);
    double theta_red_radians = asin((m_red * lambda_red) / d);
    double theta_red = theta_red_radians * (180.0 / pi);
    printf("The angle for the second-order bright spot for red light is approximately %.2f degrees.\n", theta_red);

    return 0;
}
