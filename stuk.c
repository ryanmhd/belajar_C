// #include <stdio.h>
// struct Minuman
// {
//     char nama[100];
//     char masaBerlaku[100]; //formatnya "yyyy-mm-dd"
//     char asalProduksi[100];
//     char harga[100];
//     double berat;
// };

// // void display(struct Mahasiswa mhs)
// // {
// //     printf("Nama : %s\n", mhs.nama);
// //     printf("Nilai: %.2lf\n", mhs.nilai);
// // }

// int main()
// {
//     struct Minuman soda1[3], nonSoda2[3];
//     printf("Input Nama : ");
//     scanf("%[^\n]", soda1[0].nama);
//     getchar();
//     printf("Input Nilai : ");
//     scanf("%lf", &soda1[0].berat);
//     getchar();
    
    
    
//         printf("Nama : %s\n", soda1[0].nama);
//     printf("Nilai: %.2lf\n", soda1[0].berat);
    
//     // display(kampus1[0]);

//     return 0;
// }

#include <stdio.h>

struct Minuman
{
    char nama[100];
    double berat;
    char masaBerlaku[100]; //formatnya 'tttt-bb-hh'
    char asalProduksi[100];
    char harga[100];
};

void display(struct Minuman mnm)
{
    printf("Nama            : %s\n", mnm.nama);
    printf("Berat           : %2lf\n", mnm.berat);
    printf("masa berlaku    : %s\n", mnm.masaBerlaku);
    printf("tempat produksi : %s\n", mnm.asalProduksi);
    printf("Total harga     : %s\n", mnm.harga);

}

int main ()
{
    struct Minuman soda[3], nonSoda[3];
    for (int x = 0; x < 3; x++)
    {
        printf("input Nama minuman bersoda  : ");
        scanf("%[^\n",soda[x].nama);
        getchar();
        printf("Input Berat barang          : ");
        scanf("%lf", &soda[x].berat);
        getchar();
        printf("Input masa berlaku barang   : ");
        scanf("%[^\n",soda[x].masaBerlaku);
        getchar();
        printf("Input asal produksi barang  : ");
        scanf("%[^\n",soda[x].asalProduksi);
        getchar();
        printf("Input harga barang          : ");
        scanf("%[^\n",soda[x].harga);
        getchar();

        display(soda[x]);
    }

    for (int y = 0; y < 3; y++)
    {
        printf("input Nama minuman non-soda : ");
        scanf("%[^\n",nonSoda[y].nama);
        getchar();
        printf("Input Berat barang          : ");
        scanf("%lf", &nonSoda[y].berat);
        getchar();
        printf("Input masa berlaku barang   : ");
        scanf("%[^\n",nonSoda[y].masaBerlaku);
        getchar();
        printf("Input asal produksi barang  : ");
        scanf("%[^\n",nonSoda[y].asalProduksi);
        getchar();
        printf("Input harga barang          : ");
        scanf("%[^\n",nonSoda[y].harga);
        getchar();
        
        display(nonSoda[y]);

    }
    return 0;
}
