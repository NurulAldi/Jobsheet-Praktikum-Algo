// Created by : 23343048_Nurul Aldi
#include<stdio.h>
#include<string.h>

int main(){
	char kata[10]; // deklarasi string yang memiliki karakter maksimal 10 karakter
	
	// pengguna diminta menginput kata kata untuk dibalikkan 
	printf("Inputkan kata kata untuk dibalikkan : "); 
	gets(kata);
	
	// for loop di bawah untuk mengeksekusi kata kata dimulai dari karakter terakhir hingga karakter paling awal
	// sehingga kata kata yang diinputkan pengguna menjadi terbalik
	for(int i = strlen(kata) - 1; i >= 0; i--){ // i = strlen(kata) - 1 untuk mencegah spasi di awal kata yang dibalikkan karena peenghitungan len() dimulai dari 1 sedangkan pengindeksan dimulai dari 0
		printf("%c", kata[i]); // menampilkan kata dimulai dari indeks yang terakhir (sesuai variabel i)
	}
	
	return 0;
}
