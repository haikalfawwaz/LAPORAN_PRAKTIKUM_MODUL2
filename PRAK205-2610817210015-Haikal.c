#include<stdio.h>
#include <math.h>

int main (){
    double  miring, tinggi, alas, keliling, luas;

    printf("\n");
    scanf("%lf %lf", &tinggi, &miring);

    alas = sqrt(pow(miring, 2) - pow(tinggi, 2));
    keliling = alas + tinggi + miring;
    luas = 0.5 * alas * tinggi;
    
    printf("\n");
    printf("Alas =  %d cm\n", (int)alas);
    printf("Tinggi = %d cm\n", (int)tinggi);
    printf("Keliling =  %d cm\n", (int)keliling);
    printf("Luas =  %d cm^2\n", (int)luas);

    return 0;
}
    