// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// deklarasi variabel 
	int nilai_presensi = 85; // deklarasi variabel nilai_presensi dengan nilai 85 dan tipe data integer
	int nilai_praktek = 65; // deklarasi variabel nilai_praktek dengan nilai 65 dan tipe data integer
	int nilai_uas = 75; // deklarasi variabel nilai_uas dengan nilai 75 dan tipe data integer
	int nilai_uts = 80; // deklarasi variabel nilai_uts dengan nilai 80 dan tipe data integer
	float nilai_akhir; // deklarasi variabel nilai_akhir dengan tipe data float
	
	// operasi matematika untuk menghitung nilai akhir 
	nilai_akhir = (nilai_presensi*0.10)+(nilai_praktek*0.20)+(nilai_uas*0.40)+(nilai_uts*0.30);
	printf("Nilai akhir adalah : %.2f", nilai_akhir); // menampilkan nilai akhir dengan 2 angka dibelakang koma 
	
	return 0;
}
