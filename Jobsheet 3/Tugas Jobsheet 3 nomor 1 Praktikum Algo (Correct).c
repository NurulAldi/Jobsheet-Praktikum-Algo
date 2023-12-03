// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	float rp, dollar; // deklarasi variabel rp untuk menyimpan jumlah uang dalam rupiah dan dollar untuk menyimpan hasil konversi rupiah ke dollar

	// Pengguna menginputkan nilai uang dalam bentuk rupiah
	printf("Masukkan jumlah uang dalam rupiah : ");
  	scanf("%f", &rp);
	
	// operasi matematika untuk mengkonversi rupiah ke dollar
    	dollar = rp / 14250;
    
	// menampilkan hasil konversi rupiah ke dollar
	printf("\nJumlah uang anda dalam dollar adalah : %.2f$", dollar);
	
	return 0;

}
