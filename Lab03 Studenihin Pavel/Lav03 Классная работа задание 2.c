#include <stdio.h>
#include <locale.h>
#define D 2.54
#define F 2.7076
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result;
	puts("Ведите число для расчета");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов – это %.4f см\n", dym, result);
	puts("Введите число для расчета испанского дюйма");
	scanf_s("%d", &dym);
	result = F * dym;
	printf("%d испанских дюймов - это %.4f см", dym, result);
	return 0;

}
