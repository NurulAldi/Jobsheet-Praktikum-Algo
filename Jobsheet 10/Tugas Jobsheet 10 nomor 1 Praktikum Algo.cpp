// Created by : 23343048_Nurul Aldi
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	
	printf("Permainan tebakan angka (0 - 20) ");
	int percobaan = 0; // variabel ini digunakan untuk menandai percobaan yang dilakukan user hingga menebak angka dengan benar
	char pilihan;
	
	do{
	srand(time(NULL)); // fungsi agar rand() menghasilkan angka secara acak 
	int x = rand()%20; // fungsi yang menghasilkan angka random mulai dari 0-20
	
			
	printf("\nInput angka tebakan anda : ");
	int angka;
	scanf("%d", &angka);
	fflush(stdin);
				
	if(angka < x){
		printf("Nomor saya lebih besar");
		percobaan += 1;
	}else if(angka > x){
		printf("Nomor saya lebih kecil");
		percobaan += 1;
	}else{
		printf("Selamat, Anda benar!");
		percobaan += 1;
		printf("\nAnda telah mencoba sebanyak %d kali", percobaan);
	}
	
	printf("\nApakah anda ingin bermain lagi (y/n) : ");
	scanf("%c", &pilihan);
	fflush(stdin);
	} while(pilihan == 'y');
			
	return 0;
}
