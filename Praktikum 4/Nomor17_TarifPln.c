//Nama File     : TarifPln.c
//Nama          : Fadhail Athaillah Bima
//Nim           : 24060121140172
//Kelas         : B2
//Deskripsi     : Menghitung dan menampilkan berapa tarif PLN yang dikenakan pada layar


#include <stdio.h>

int main (){
	//Kamus
	int i,g,T;

	//Algoritma
	printf("Membuat Program Tarif PLN \n");
	printf("Jumlah daya listrik yang dipakai  : ");
	scanf("%d", &i);
	printf("Golongan Tarif  : ");
	scanf("%d", &g);

	if ( i < 100 ) {
		T = g * 1000 * 100;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else if ( i >= 1000 ) {
		T = (g * 1000 * i) * 1.1;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	else {
		T = g * 1000 * i;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
