#include <stdio.h>

int main() {
    char nama[50], nim[15], kelas[5], ttl[30], alamat[100], hobby[50], no_hp[50];

    printf("Nama                    : ");
    scanf(" %[^\n]", nama); 

    printf("NIM                     : ");
    scanf(" %s", nim); 

    printf("Kelas Paralel           : ");
    scanf(" %s", kelas); 

    printf("Tempat/Tanggal Lahir    : ");
    scanf(" %[^\n]", ttl); 

    printf("Alamat                  : ");
    scanf(" %[^\n]", alamat);

    printf("Hobby                   : ");
    scanf(" %[^\n]", hobby);

    printf("Nomor HP                : ");
    scanf(" %s", no_hp); 

    printf("\n");
    printf("Nama                    : %s\n", nama);
    printf("NIM                     : %s\n", nim);
    printf("Kelas Paralel           : %s\n", kelas); 
    printf("Tempat/Tanggal Lahir    : %s\n", ttl);
    printf("Alamat                  : %s\n", alamat);
    printf("Hobby                   : %s\n", hobby); 
    printf("Nomor HP                : %s\n", no_hp); 

    return 0;
}