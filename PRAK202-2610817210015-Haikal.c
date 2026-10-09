#include<stdio.h>
float a, b, hasil;

int main() {
    printf("Masukkan Nilai A: ");
    scanf("%f", &a);
    printf("Masukkan Nilai B: ");
    scanf("%f", &b);

    hasil = a + b;
    printf("Hasil Penjumlahan: %.2f\n", hasil);

    return 0;
}