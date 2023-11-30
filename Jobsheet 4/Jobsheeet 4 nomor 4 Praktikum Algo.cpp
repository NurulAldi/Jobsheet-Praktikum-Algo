// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	// deklarasi variabel
	int tarif_1jam = 15000;
	int tarif_jamber = 0.5 * tarif_1jam;
	int jam_tambahan = 2;
	int total_bayar;
	
	// operasi matematika untuk menghitung total yang harus dibayarkan 
	total_bayar = tarif_1jam + (jam_tambahan * tarif_jamber);
	
	// menampilkan total bayar 
	printf("Total bayar adalah : Rp.%i", total_bayar);
	
	return 0;
	
}
