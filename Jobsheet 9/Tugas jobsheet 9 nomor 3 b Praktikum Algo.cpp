// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// deklarasi variabel disertai valuenya 
	int Lesley = 57082;
	
	// pointer Layla menunjuk ke alamat memori lesley
	// sehingga pointer layla mengambil value dari variabel Lesley
	int *Layla = &Lesley;
	
	// balmond memiliki value pointer layla (yang mengambil value variabel Lesley) + 1
	int Balmond = *Layla + 1;
	
	// menampilkan alamat memori karena tidak menggunakan tanda alamat memori '&'
	// akan menampilkan value lesley jika menggunakan tanda '&' sebelum variabel 'Layla'
	printf("Nilai Layla adalah : %d", Layla); 

	// menampilkan nilai balmond yaitu 57083 ( nilai variabel pointer Layla + 1 )
	printf("\nNilai Balmond adalah : %d", Balmond);
		
}
