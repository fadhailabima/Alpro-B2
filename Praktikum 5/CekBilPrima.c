//Nama File     : CekBilPrima.c
//Nama          : Fadhail Athaillah Bima
//Nim           : 24060121140172
//Kelas         : B2
//Deskripsi     : mengetahui sebuah bilangan integer sembarang N (N>0) yang dimasukan melalui keyboard termasuk bilangan prima atau bukan


#include <stdio.h>
#include <stdlib.h>

int main(){
 //Kamus
	int N, i, P;
	P = 0;

 //Algoritma
	printf("Program Mengecek Bilangan Prima \n");
	printf("Masukan Bilangan Integer : ");
	scanf("%d", &N);

	if ( N <= 0) {
        printf("Bilangan Harus Positif");
	}
	else {
        for (i = 2; i < N; i++) {
            if (N % i == 0 ) {
                P = 1;
                break;
            }
        }
        if (P == 1) {
            printf("%d Bukan Bilangan prima", N);
        }
        else {
            printf("%d Bilangan prima", N);
        }
	}
	return 0;
