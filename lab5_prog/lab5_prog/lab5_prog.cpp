#include <stdio.h>
#include <locale.h>

int main()
{
    double n;
    double s = 0;
    int i = 1;
    setlocale(LC_ALL, "Russian");
    printf("Введите число n: ");
    scanf_s("%lf", &n);
    while (s < n)
    {
        s = s + 1.0 / i;
        i++;
    }
    printf("Наименьшее число, большее числа %lf: %lf\n", n, s);
    return 0;
}