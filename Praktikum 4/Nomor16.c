//Nama File     : TunjAnak.c
//Nama          : Fadhail Athaillah Bima
//Nim           : 24060121140172
//Kelas         : B2
//Deskripsi     : menampilkan besarnya tunjangan anak yang diberikan berdasarkan jumlah anak dengan jumlah maksimal yang ditanggung adalah 3 anak



#include <stdio.h>

int main (){
	//Kamus
	int a,g;
	float T;

	//Algoritma
	printf("Membuat Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%d", &a);
	printf("Gaji Pokok  : ");
	scanf("%d", &g);

	if ( a < 3) {
		T = a * (g/10);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else{
		T = a * (3/10);
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
