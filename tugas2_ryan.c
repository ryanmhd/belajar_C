#include <stdio.h>
#include <math.h>

int main()
{
    int nilaiA, nilaiB;
    double hasil;
    char operator;

    scanf("%d %c %d", &nilaiA, &operator, & nilaiB);

    switch (operator)
    {
    case '^':
        // cuma bisa terima double
        printf("%d %c %d = %.2f", nilaiA, operator, nilaiB, (double)(pow(nilaiA, nilaiB)));
        
        break;
    case '%':
        // cuma bisa terima integer
        printf("%d %c %d = %d", nilaiA, operator, nilaiB, nilaiA % nilaiB);
    }
    return 0;
}