// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	char nama[100]; // deklarasi nama dengan panjang maksimal 100 karakter 
	
	// Pengguna disuruh menginput nama lengkap dirinya
	printf("Hello, siapa nama lengkapmu?\n");
	scanf("%s", &nama); // fungsi scanf() untuk memberikan user kesempatan untuk menginputkan sesuatu
	
	// menampilkan kalimat dengan nama pengguna diantaranya
	printf("\nSelamat datang %s dalam pemrograman C!", nama);
	
	return 0;
	
}
