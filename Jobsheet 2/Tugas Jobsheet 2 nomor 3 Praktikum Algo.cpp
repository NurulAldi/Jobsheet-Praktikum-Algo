// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// pas = panjang alas segitiga
	double pas = 8;
	// ts = tinggi segitiga
	double ts = 5;
	// ls = luas segitiga
	float ls; // variabel ls akan digunakan untuk menyimpan nilai luas segitiga
	
	// menghitung luas segitiga menggunakan operasi matematika
	ls = (pas*ts)/2;
	// menampilkan luas segitiga
	printf("Luas segitiga adalah : %.2f meter", ls); // %.2f artinya 2 nol dibelakang koma (float adalah bilangan berkoma)
	
	return 0;
	
}
