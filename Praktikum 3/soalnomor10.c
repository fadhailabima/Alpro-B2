//Nama File 	: CekSeriPositif
//Nama   	    : Fadhail Athaillah Bima
//Nim           : 24060121140172
//Kelas         : B2
//Deskripsi 	: Menampilkan nilai kebenaran apakah masukkan bernilai negative atau tidak pada layar

#include <stdio.h>

int main()
{

    //Kamus
    float t1,t2,t3,total;

    //Algoritma
    printf("Program untuk cek seri positif\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t1);
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t2);
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t3);
    if (t1 >= 0 && t2 >= 0 && t3 >= 0){
            total = t1 + t2 + t3;
            printf("Maka total tahanan jika dirangkai seri adalah %.2f\n",total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }


}
