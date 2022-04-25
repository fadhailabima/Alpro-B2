/*Nama Program : Tetris2.c*/
/*Deskripsi    : menampilkan susunan karakter asterisk*/
/*Pembuat      : Fadhail Athaillah Bima - 24060121140172*/
/*Tgl Pembuatan : Rabu. 30 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Kamus
   int N,i,j;

   // Algoritma
   printf("Masukkan jumlah baris bintang yang diinginkan : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){                 //{Loop Baris}
       for(j=1;j<=i;j++){             //{Loop Kolom}
            printf("*");
            if(j==i){
                printf("  --%d",j);
            }
       }
       printf("\n");
    }
   for(i=N-1;i>=1;i--){                //{Loop Baris}
       for(j=1;j<=i;j++){            //{Loop Kolom}
            printf("*");
            if(j==i){
                printf("  --%d",j);
            }
       }
       printf("\n");
    }
   return 0;
}
