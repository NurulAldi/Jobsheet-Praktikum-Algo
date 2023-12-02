// Created by : 23343048_Nurul Aldi
#include<stdio.h>

double diskon; // deklarasi variabel diskon 

int potong(int ttl_belanja){

	// blok kode if else dibawah digunakan untuk menentukan besaran diskon
	if(ttl_belanja < 1000000){ // jika total belanja yang diinputkan user dibawah 1jt
		printf("\nMaaf! Anda tidak mendapatkan diskon");
	} else if(ttl_belanja <= 3000000){ // jika total belanja yang diinputkan user dibawah 3jt
		diskon = 0.2; // diskon 20%
		printf("\nBesar diskon : %.1f%%", diskon *100);
	} else{ // jika total belanja yang diinputkan user diatas 3jt
		diskon = 0.35; // diskon 35%
		printf("\nBesar diskon : %.1f%%", diskon*100);
	}
	
	// Menampilkan harga total setelah dipotong diskon
	printf("\nBesar harga yang harus dibayarkan : Rp.%.lf\n", ttl_belanja * (1 - diskon)); // melakukan operasi matematika untuk menentukan harga dipotong diskon sekaligus menampilkannya
	
}

int main(){
	int total_belanja;
	printf("Total pembelian : Rp."); // user diminta menginputkan total belanja untuk menentukan besaran diskon yang akan didapatkan
	scanf("%d", &total_belanja);
	
	potong(total_belanja); // memanggil fungsi potong() yang akan menentukan harga setelah dipotong diskon
	
	return 0;
}
