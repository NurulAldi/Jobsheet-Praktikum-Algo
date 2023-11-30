// developer : Nurul Aldi (23343048)
#include<stdio.h>

double diskon;

int potong(int ttl_belanja){

	// blok kode if else dibawah digunakan untuk menentukan besaran diskon
	if(ttl_belanja < 1000000){
		printf("\nMaaf! Anda tidak mendapatkan diskon");
	} else if(ttl_belanja <= 3000000){
		diskon = 0.2;
		printf("\nBesar diskon : %.1f%%", diskon *100);
	} else{
		diskon = 0.35;
		printf("\nBesar diskon : %.1f%%", diskon*100);
	}
	
	// Menampilkan harga total setelah dipotong diskon
	printf("\nBesar harga yang harus dibayarkan : Rp.%.lf\n", ttl_belanja * (1 - diskon));
	
}

int main(){
	int total_belanja;
	printf("Total pembelian : Rp.");
	scanf("%d", &total_belanja);
	
	potong(total_belanja);
	
	return 0;
}
