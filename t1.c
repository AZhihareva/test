#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Russian");
    float x, a, c, z;
    printf("������� ���������� x>0:");
    scanf("%f", &x);
    c = pow(x, 3);
    z = 4 * c;
    printf("�� ����� x:%f \n ���������: %f", x, z);
}