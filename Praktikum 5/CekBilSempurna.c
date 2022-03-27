//Nama File     : CekBilSempurna.c
//Nama          : Fadhail Athaillah Bima
//Nim           : 24060121140172
//Kelas         : B2
//Deskripsi     : mengetahui sebuah bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard termasuk bilangan sempurna atau bukan

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,b;
    b = 0;

	printf("Program Mengecek Bilangan Sempurna \n");
    printf("Masukkan Bilangan Integer :");
    scanf("%d", &N);

    if ( N <= 0) {
        printf("Masukkan bilangan positf");
    }
    else {
        for (i = 1; i < N; i++) {
            if (N % i == 0){
                b = b + i;
            }
        }
        if (N == b) {
            printf("%d Bilangan sempurna", N);
        }
        else {
            printf("%d Bukan bilangan sempurna", N);
        }
    }
