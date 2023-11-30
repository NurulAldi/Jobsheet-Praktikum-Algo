// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	char nama[50], prodi[50], fakultas[50];
	int nim;
	double NUA, NP, NUT, NA;
	
	// pengguna menginput nama
	printf("Nama : ");
	scanf("%s", &nama);
	
	// pengguna menginput NIM
	printf("NIM : ");
	scanf("%i", &nim);
	
	// pengguna menginput Prodi
	printf("Prodi : ");
	scanf("%s", &prodi);
	
	// pengguna menginput Fakultas
	printf("Fakultas : ");
	scanf("%s", &fakultas);
	
	// pengguna menginput Nilai Praktikum
	printf("Nilai Praktikum : ");
	scanf("%d", &NP);
	
	// pengguna menginput nilai UTS
	printf("Nilai UTS : ");
	scanf("%d", &NUT);
	
	// pengguna menginput nilai UAS
	printf("Nilai UAS : ");
	scanf("%d", &NUA);
	
	// operasi matematika untuk menghitung nilai akhir 
	NA = (0.3*NP) + (0.3*NUT) + (0.4*NUA);
	// menampilkan nilai akhir pengguna
	printf("Nilai Akhir : %d", NA);
	
	return 0;
	
}
