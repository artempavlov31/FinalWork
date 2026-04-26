#include <stdio.h>
#include <locale.h>

int main()
{
    double n;
    double k = 0;
    int i = 1;
    setlocale(LC_ALL, "Russian");
    printf("Введите число n: ");
    scanf_s("%lf", &n);
    while (k < n)
    {
        k = k + 1.0 / i;
        i++;
    }
    printf("Наименьшее число, большее числа %lf: %lf\n", n, k);
    return 0;
}