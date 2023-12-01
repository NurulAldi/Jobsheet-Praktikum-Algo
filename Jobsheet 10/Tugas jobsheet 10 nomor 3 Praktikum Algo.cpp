// Created by : 23343048_Nurul Aldi
#include<stdio.h>

// deklarasi struct untuk menyimpan data nim, nama, tanggal lahir
// alamat dan nomor hp pengguna
typedef struct identitas{
	int nim;
	char nama[20];
	char tglLahir[15];
	char alamat[15];
	char hp[15];
}id;

int main(){
	
	// deklarsi variabel pilihan untuk menyimpan pilihan
	// pengguna apakah ingin memasukkan data lagi atau tidak
	// dan juga deklarasi struct identitas 
	char pilihan;
	id idts;
	do{
		printf("input nim : ");
		scanf("%d", &idts.nim);
		fflush(stdin); // membersihkan buffer input karena scanf()
		printf("input nama : ");
		gets(idts.nama); 
		printf("input tanggal lahir (dd-mm-yyyy) : ");
		gets(idts.tglLahir);
		printf("input alamat : ");
		gets(idts.alamat);
		printf("input nomor hp : ");
		gets(idts.hp);
		
		printf("\n%d  %s  %s  %s  %s", idts.nim, idts.nama, idts.tglLahir, idts.alamat, idts.hp);
		// pengguna diminta menentukan untuk memasukkan data lagi atau tidak
		// y untuk iya dan t untuk tidak
		printf("\n\nMau memasukkan data lagi [y/t] : ");
		scanf("%c", &pilihan);
		printf("\n");
	}while(pilihan = 'y'); // program akan dijalankan lagi apabila pengguna menginput 'y'
	
	return 0;
}
