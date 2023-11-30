#include<stdio.h>

int main(){
	
	for(int i = 1; i <= 5; i++){ // for loop untuk mengontrol baris simbol
		for(int j = 1; j <= i; j++){ // for loop untuk mengontrol kolom simbol
			printf("%i ", i*j); // menampilkan pola deret angka 
		}
		printf("\n"); // baris baru
	}
	
	
	return 0;
}
