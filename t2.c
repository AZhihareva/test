#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PI 3.14159265

void main(void) {
    setlocale(LC_ALL, "Russian");
    float x, y, a, b, c, d, e, f, g, s, z;
    int n = 1;

    printf("������� ���������� x:");
    scanf("%f", &x);
    printf("������� ���������� y:");
    scanf("%f", &y);
    printf("������� ���������� z:");
    scanf("%f", &z);
    a = cos(x);
    b = cos(y);
    c = fabs(a - b);
    d = 1 + 2 * pow(sin(y), 2);
    e = pow(c, d);
    f = 1;
    while (n <= 4)
    {
        g = pow(z, n);
        f = f + g / n;
        n++;
    }
    s = e * f;
    printf("�� ����� x:%.0f , y:%0.3f , z:%0.6f\n ���������: %0.6f", x, y, z, s);
}