#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL, "Russian");
    float x, a, c, z;
    printf("Введите переменную x>0:");
    scanf("%f", &x);
    c = pow(x, 3);
    z = 4 * c;
    printf("Вы ввели x:%f \n Результат: %f", x, z);
}