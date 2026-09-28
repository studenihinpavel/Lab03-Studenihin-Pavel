#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE 
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float c;
    float result;
    puts("Введите температуру по шкале цельсия");
    scanf_s("%f", &c);
    result = c * (9. / 5.) + 32;
    printf("%.1f градуса цельсия по шкале Фаренгейта = %.2f\n", c, result);
    result = c + 273.15;
    printf("%.1f градусы цельсия по шкале Кельвина = %.2f", c, result);
    return 0;
}