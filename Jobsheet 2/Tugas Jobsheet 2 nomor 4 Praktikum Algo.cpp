// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// pp = panjang persegi panjang
	double pp = 10;
	// lp = lebar persegi panjang
	double lp = 5;
	// lpp = luas persegi panjang
	float lpp; // variable lpp digunakan untuk menyimpan nilai luas persegi panjang
	
	// menghitung luas persegi panjang menggunakan operasi matematika panjang * lebar
	lpp = pp*lp;
	// menampilkan luas persegi panjang
	printf("Luas persegi panjang adalah : %.2f meter", lpp); // %.2f artinya 2 nol dibelakang koma (float adalah bilangan berkoma)
	
	return 0;
	
}
