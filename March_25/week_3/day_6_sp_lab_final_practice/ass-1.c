#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    double m, d, theta;
    printf("put value of m d(in micrometer) theta(in degree) : ");
    scanf("%lf%lf%lf", &m, &d, &theta);
    double theta2 = (pi / 180) * theta;
    double d1 = d * 1e-6;
    double p = sin(theta2);
    double wavelength = (d1 * p) / m;
    double t = wavelength * 1e9;
    printf("Wavelength=%.2lf nm\n", t);
    if (t >= 380 && t <= 450)
        printf("Color=Violet\n");
    else if (t >= 450 && t <= 485)
        printf("Color=Blue\n");
    else if (t >= 485 && t <= 500)
        printf("Color=Cyan\n");
    else if (t >= 500 && t <= 565)
        printf("Color=Green\n");
    else if (t >= 565 && t <= 590)
        printf("Color=Yellow\n");
    else if (t >= 590 && t <= 625)
        printf("Color=Orange\n");
    else if (t >= 625 && t <= 750)
        printf("Color=Red\n");
    else
        printf("Out of visible range\n");
    return 0;
}