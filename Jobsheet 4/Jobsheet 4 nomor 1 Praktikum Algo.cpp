// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	
	int jam, jams, menit, detik, total_detik = 3700;
	
	// menampilkan jumlah waktu dalam detik
	printf("jumlah waktu dalam detik : %i\n", total_detik);
	
	// operasi matematika untuk mengkonversi total waktu 
	// dalam detik ke bentuk jam menit dan detik
	jam = total_detik / 3600;
	jams = total_detik % 3600;
	menit = jams / 60;
	detik = jams % 60; 
	
	printf("%i jam %i menit %i detik", jam, menit, detik);
	
	return 0;
	
}
