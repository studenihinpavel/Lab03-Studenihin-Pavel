#include <stdio.h>
#include <locale.h>
#define _CTR_SECURE_NO_WARNINGS
#define a 1.852    // 1 морска€ мил€ в м
#define b 1.609    // 1 сухопутна€ мил€ в км
#define c 1.475    // 1 римска€ мил€ в м
#define d 7.468    // 1 старорусска€ мил€ в км
#define e 7412.6   // 1 географическа€ мил€ в км

int main() {
    setlocale(LC_CTYPE, "RUS");
    int ml;
    float result;
    puts("¬ведите число морских миль дл€ перевода в километры:");
    scanf_s("%d", &ml);
    result = (ml * a) / 1000.0; 
    printf("%d морских миль = %f км\n\n", ml, result);
    puts("¬ведите число сухопутных миль дл€ перевода в километры:");
    scanf_s("%d", &ml);
    result = ml * b;
    printf("%d сухопутных миль = %f км\n\n", ml, result); 
    puts("¬ведите число римских миль дл€ перевода в километры:"); 
    scanf_s("%d", &ml);
    result = (ml * c) / 1000.0; 
    printf("%d римских миль = %f км\n\n", ml, result); 
    puts("¬ведите число старорусских миль дл€ перевода в километры:");
    scanf_s("%d", &ml);
    result = ml * d;
    printf("%d старопрусских миль = %f км\n\n", ml, result);
    puts("¬ведите число географических миль дл€ перевода в километры:");
    scanf_s("%d", &ml);
    result = ml * e;
    printf("%d географических миль = %f км\n\n", ml, result);
    return 0;
}