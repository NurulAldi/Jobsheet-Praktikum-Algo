// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	int diameter = 12; // deklarasi nilai variabel diameter
	int r = 6; // deklarasi nilai variabel r
	float phi = 3.14; // deklarasi nilai variabel phi
	float volume, luas_permukaan; // deklarasi variabel volume dan luas_permukaan untuk menyimpan nilai volume dan nilai luas permukaan dari bola basket
	
	// operasi matematika untuk menghitung volume bola basket
	volume =  (phi*r*r*r)*4/3;
	
	// menampilkan volume bola basket dengan 2 angka dibelakang koma (%.2f)
	printf("Volume bola basket adalah : %.2fm3", volume);
	
	// operasi matematika menghitung luas permukaan bola basket 
	luas_permukaan = 4*phi*r*r;
	
	// menampilkan luas permukaan bola basket dengan 2 angka dibelakang koma (%.2f)
	printf("\nLuas permukaan bola basket adalah : %.2fm2", luas_permukaan);
	
	return 0;
	
}
