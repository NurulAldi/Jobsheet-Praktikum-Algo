// Created by : 23343048_Nurul Aldi
#include<stdio.h>

float phi = 3.14; // deklarasi nilai phi 3,14 karena sudah merupakan ketetapan

// fungsi untuk menentukan keliling lingkaran
int keliling(float a){
	printf("\nKeliling lingkaran adalah : %.2f cm", 2*phi*a); // menampilkan sekaligus melakukan operasi matematika untuk menentukan keliling lingkaran
	return 0; // fungsi mengembalikan nilai integer
}

// fungsi untuk menentukan luas lingkaran
int luas(float a){
	printf("\nLuas lingkaran adalah : %.2f cm2", phi*a*a); // menampilkan sekaligus melakukan operasi matematika untuk menentukan luas lingkaran
	return 0; // fungsi mengembalikan nilai integer
}

int main(){
	float r;
	
	printf("Inputkan jari jari lingkaran : "); // user diminta menginputkan jari jari lingkaran
	scanf("%f", &r);
	
	keliling(r); // pemanggilan fungsi yang menentukan keliling() lingkaran yang sudah dideklarasikan di atas
	luas(r); // pemanggilan fungsi yang menentukan luas() lingkaran yang sudah dideklarasikan di atas 
	
	return 0; 
}
