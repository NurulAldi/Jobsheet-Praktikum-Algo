// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	
	int jam, jams, menit, detik, total_detik = 3700; // deklarasi variabel jam, jams, menit, detik, dan deklarasi nilai variabel total_detik
	
	// menampilkan jumlah waktu dalam detik
	printf("jumlah waktu dalam detik : %i\n", total_detik);
	
	// operasi matematika untuk mengkonversi total waktu 
	// dalam detik ke dalam bentuk jam menit dan detik
	jam = total_detik / 3600;
	jams = total_detik % 3600; // digunakan untuk menghitung sisa waktu hasil pembagian total detik dengan 3600
	menit = jams / 60;
	detik = jams % 60;  // digunakan untuk menghitung sisa waktu hasil pembagian variabel jams dengan 60
	
	printf("%i jam %i menit %i detik", jam, menit, detik);
	
	return 0;
	
}
 
