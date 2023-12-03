// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	char nama[50], prodi[50], fakultas[50]; // deklarasi variabel string dengan panjang karakter maksimal 50 karakter
	int nim;
	double NUA, NP, NUT, NA; 
	
	// User diminta untuk menginputkan nama (panjang karakter maksimal 50 karakter)
	printf("Nama : ");
	gets(nama);
	
	// User diminta untuk menginputkan nim (berupa bilangan bulat atau dengan kata lain integer(int))
	printf("NIM : ");
	scanf("%i", &nim);
	fflush(stdin);
	
	// User diminta untuk menginputkan prodi (panjang karakter maksimal 50 karakter)
	printf("Prodi : ");
	gets(prodi);
	
	// User diminta untuk menginputkan fakultas (panjang karakter maksimal 50 karakter)
	printf("Fakultas : ");
	gets(fakultas);
	
	// User diminta untuk menginputkan Nilai Praktikum (boleh bilangan bulat boleh bilangan berkoma atau dengan kata lain double)
	printf("Nilai Praktikum : ");
	scanf("%d", &NP);
	fflush(stdin);
	
	// User diminta untuk menginputkan UTS (boleh bilangan bulat boleh bilangan berkoma atau dengan kata lain double)
	printf("Nilai UTS : ");
	scanf("%d", &NUT);
	fflush(stdin);
	
	// User diminta untuk menginputkan Nilai UAS (boleh bilangan bulat boleh bilangan berkoma atau dengan kata lain double)
	printf("Nilai UAS : ");
	scanf("%d", &NUA);
	fflush(stdin);
	
	// operasi matematika untuk menghitung nilai akhir 
	NA = (0.3*NP) + (0.3*NUT) + (0.4*NUA);
	// menampilkan nilai akhir user
	printf("Nilai Akhir : %d", NA);
	
	return 0;
	
}
