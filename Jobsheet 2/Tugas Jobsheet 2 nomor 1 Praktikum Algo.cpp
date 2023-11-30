// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	char nama[100];
	
	// Pengguna disuruh menginput nama lengkap dirinya
	printf("Hello, siapa nama lengkapmu?\n");
	scanf("%s", &nama);
	
	// menampilkan kalimat dengan nama pengguna diantaranya
	printf("\nSelamat datang %s dalam pemrograman C!", nama);
	
	return 0;
	
}
