#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float a;
        float b;
    puts("¬ведите число а:");
    scanf_s("%f", &a);
    puts("¬ведите число b:");
    scanf_s("%f", &b);
    puts("-------------------");
    printf("|%5s|%5s|%5s|\n", "a*b", "a+b", "a-b");
    puts("-------------------");
    printf("|%2.0f*%2.0f|%2.0f+%2.0f|%2.0f-%2.0f|\n", a, b, a, b, a, b);
    puts("-------------------");
    printf("|%5.1f|%5.1f|%5.1f|\n", a * b, a + b, a - b);
    puts("-------------------");
    system("pause");
    return 0;
}