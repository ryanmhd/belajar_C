#include <stdio.h>

// Shift + Alt + F buat nge rapiin kodingannya. JANGAN LUPA!!!
int main()
{
    // //ARRAY 1 DIMENSI
    // int x[10]; // artinya adalah variable x ada 10
    // x[2] = 5; // artinya isi dari array no 2 adalah 5
    // printf("%d\n", x[2]); // print nilai dari x[2]
    // printf("%d\n", x[10]);

    // //ARRAY 2 DIMENSI
    // int y[10][30]; // array ke basamping 10 ke bawah 30
    // //1 1 1 1 1 1 1 1 1 (sebanyak 10)
    // //(ke bawah sebanyak 30)
    // printf("%d\n", y);

    // TUGAS!!
    //  membuat formasi seperti dibawah :
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    int a[5][5] = {{1, 2, 3, 4, 5},
                   {1, 2, 3, 4, 5},
                   {1, 2, 3, 4, 5},
                   {1, 2, 3, 4, 5},
                   {1, 2, 3, 4, 5}};

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            printf("%d%c", a[i][j], " \n"[j == 5 - 1]);
}