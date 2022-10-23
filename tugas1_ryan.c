#include <stdio.h>
#include <math.h>

int main()
{
    // angka a
    double a;
    scanf("%lf", &a); getchar();

    double b;
    scanf("%lf", &b); getchar();

    double hasil_tambah;
    double hasil_kurang;
    double hasil_kali;
    double hasil_bagi;

    hasil_tambah = a + b;
    printf("Hasil a + b = %.2lf \n", hasil_tambah);

    hasil_kurang = a - b;
    printf("Hasil a - b = %.2lf \n", hasil_kurang);

    hasil_kali = a * b;
    printf("Hasil a * b = %.2lf \n", hasil_kali);

    hasil_bagi = a / b;
    printf("Hasil a / b = %.2lf \n", hasil_bagi);

    return 0;
}