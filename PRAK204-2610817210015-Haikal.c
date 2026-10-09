#include<stdio.h>

#define PI 3.142857

int main (){
    double jari, tinggi, volume, luas, keliling;

    scanf("%lf %lf", &jari, &tinggi);

    volume = PI * (jari * jari) * tinggi;
    luas = 2 * PI * jari * (jari + tinggi);
    keliling = 2 * PI * jari;

    printf("volume =  %.2f\n", volume);
    printf("luas =  %.2f\n", luas);
    printf("keliling =  %.2f\n", keliling);

    return 0;
}
