#include <stdio.h>

void tambah(double nilaiA, double nilaiB, double *nilaiTotal)
{
    *nilaiTotal = nilaiA + nilaiB;
}

void kurang(double nilaiA, double nilaiB, double *nilaiTotal)
{
    *nilaiTotal = nilaiA - nilaiB;
}

void bagi(double nilaiA, double nilaiB, double *nilaiTotal)
{
    *nilaiTotal = nilaiA / nilaiB;
}

void kali(double nilaiA, double nilaiB, double *nilaiTotal)
{
    *nilaiTotal = nilaiA * nilaiB;
}

int main()
{
    double nilaiA;
    double nilaiB;
    double total = 0;
    char operator;

    scanf("%lf %c %lf", &nilaiA, &operator, & nilaiB);
    switch (operator)
    {
    case '+':
        tambah(nilaiA, nilaiB, &total);
        printf("Hasil dari pertambahan %.2lf dan %.2lf adalah %.2lf", nilaiA, nilaiB, total);
        break;
    case '-':
        kurang(nilaiA, nilaiB, &total);
        printf("Hasil dari perkurangan %.2lf dan %.2lf adalah %.2lf", nilaiA, nilaiB, total);
        break;
    case '/':
        bagi(nilaiA, nilaiB, &total);
        printf("Hasil dari pembagian %.2lf dan %.2lf adalah %.2lf", nilaiA, nilaiB, total);

        break;
    case '*':
        kali(nilaiA, nilaiB, &total);
        printf("Hasil dari perkalian %.2lf dan %.2lf adalah %.2lf", nilaiA, nilaiB, total);
        break;
    }
    return 0;
}