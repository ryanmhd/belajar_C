#include <stdio.h>

int main()
{

    // LOOPING
    //  terdiri dari 3 komponen utama yaitu for (deklarasi;  operasi ;komputasi){
    //  }

    // METHOD 1 FOR

    // for (int i = 7;
    //      i > 0;
    //      i -= 2)
    // {
    //     printf("%d\n", i);
    // }

    // 7
    // 5
    // 3
    // 1

    // METHOD 2 DO-WHILE
    // int i = 7;
    // do
    // {
    //     printf("%d\n", i);
    //     i-=2;
    // } while (i > 0);

    // LOOPING 2 DIMENSI  
    // 00000 11111 44444 99999
    for (int i = 0; i < 5; i++)
    {
        for (int y = 1; y < 6; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }

    return 0;
}