// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// inisialisasi variabel i
	int i = 0;
	
	printf("deret bilangan genap :");
	// for loop untuk menampilkan bilangan genap
	for(int ab = 2; ab <= 50; i++){ 

		printf("%i ", ab); // menampilkan nilai ab
		ab += 2; // nilai ab akan selalu bertambah 2 selama memenuhi kondisi ab <= 50 
		}
	
	printf("\nderet bilangan ganjil :");
	// for loop untuk menampilkan bilangan ganjil
	for(int ac = 1; ac <=50; i++){
		
		printf("%i ", ac); // menampilkan nilai ac
		ac += 2; // nilai ab akan selalu bertambah 2 selama memenuhi kondisi ab <= 50
	}
	
	return 0;
	
}
