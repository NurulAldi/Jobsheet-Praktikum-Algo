// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// deklarasi variabel
	int tarif_1jam = 15000; // deklarasi nilai variabel tarif_1jam
	int tarif_jamber = 0.5 * tarif_1jam; // deklarasi nilai variabel tarif_jamber menggunakan operasi perkalian matematika
	int jam_tambahan = 2; // deklarasi nilai variabel jam_tambahan
	int total_bayar; // deklarasi variabel total_bayar untuk menyimpan nilai total yang harus dibayarkan
	
	// operasi matematika untuk menghitung total yang harus dibayarkan 
	total_bayar = tarif_1jam + (jam_tambahan * tarif_jamber); 
	
	// menampilkan total yang harus dibayarkan 
	printf("Total bayar adalah : Rp.%i", total_bayar);
	
	return 0;
	
}
