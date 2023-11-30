// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	// deklarasi variabel nilai
	int nilai_presensi = 85;
	int nilai_praktek = 65;
	int nilai_uas = 75;
	int nilai_uts = 80;
	float nilai_akhir;
	
	// operasi matematika untuk menghitung nilai akhir 
	nilai_akhir = (nilai_presensi*0.10)+(nilai_praktek*0.20)+(nilai_uas*0.40)+(nilai_uts*0.30);
	printf("Nilai akhir adalah : %.2f", nilai_akhir);
	
	return 0;
}
