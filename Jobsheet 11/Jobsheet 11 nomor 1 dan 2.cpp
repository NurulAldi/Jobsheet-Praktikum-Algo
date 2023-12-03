// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
	// deklarasi variabel untuk menyimpan data yang akan diinputkan oleh pengguna 
	char nama[50]; // menyimpan nama pengguna dengan maksimal 50 karakter
	char jurusan[50]; // menyimpan nama jurusan pengguna dengan maksimal 50 karakter
	char nim[20]; // menyimpan nim pengguna dengan maksimal 20 karakter
	char prodi[30]; // menyimpan nama prodi pengguna dengan maksimal 30 karakter
	FILE *fptr; // deklarasi variabel pointer fptr yang menunjuk ke alamat memori file yang dibuka
	int jumlah;
	
	// fopen dengan mode w(write) yang artinya kita membuka sebuah file teks(.txt) lalu menuliskan sesuatu kedalamnya
	fptr = fopen("datamahasiswa.txt", "w");  
	
	// pengguna menginput jumlah mahasiswa
	printf("Jumlah mahasiswa : ");
	scanf("%d", &jumlah);
	fflush(stdin); // membersihkan buffer input dari scanf()
	
	// perulangan untuk menginput data mahasiswa sebanyak jumlah mahasiswa yang diinputkan sebelumnya oleh pengguna
	for(int i = 0; i < jumlah; i++){  
		printf("Masukkan data mahasiswa ke-%d", i+1);
		printf("\nNama : ");
		fgets(nama, sizeof(nama), stdin); // menyimpan input dengan sementara ke variabel nama dengan maks karakter 50
		fputs(nama, fptr); // menyimpan hasil input nama ke variabel pointer fptr
		
		printf("Nim : ");
		fgets(nim, sizeof(nim), stdin); // menyimpan input dengan sementara ke variabel nim dengan maks karakter 20
		fputs(nim, fptr); // menyimpan hasil input nim ke variabel pointer fptr
		
		printf("Jurusan : ");
		fgets(jurusan, sizeof(jurusan), stdin); // menyimpan input dengan sementara ke variabel jurusan dengan maks karakter 50
		fputs(jurusan, fptr); // menyimpan hasil input jurusan ke variabel pointer fptr
		
		printf("Prodi : ");
		fgets(prodi, sizeof(prodi), stdin); // menyimpan input dengan sementara ke variabel prodi dengan maks karakter 30
		fputs(prodi, fptr); // menyimpan hasil input prodi ke variabel pointer fptr
		
		printf("\n");	
	}
	
	fclose(fptr); // menutup file yang sudah dibuka sebelumnya 
	
	// membuka file yang sudah ditulis tetapi dengan mode r(read) artinya untuk ditampilkan/dibaca saja
	fptr = fopen("datamahasiswa.txt", "r"); 
	
	// perulangan untuk menampilkan data mahasiswa sebanyak jumlah mahasiswa yang diinputkan oleh pengguna sebelumnya
	for(int i = 0; i < jumlah; i ++){
		printf("data mahasiswa ke-%d\n", i+1);
		fgets(nama, sizeof(nama), fptr); // mengambil isi baris pertama dari file yang ditunjuk oleh variabel pointer fptr lalu disimpan ke variabel nama
		printf("Nama : %s", nim);
		fgets(nim, sizeof(nim), fptr); // mengambil isi baris kedua dari file yang ditunjuk oleh variabel pointer fptr lalu disimpan ke variabel nim
		printf("Nim : %s", nim);
		fgets(jurusan, sizeof(jurusan), fptr); // mengambil isi baris ketiga dari file yang ditunjuk oleh variabel pointer fptr lalu disimpan ke variabel jurusan
		printf("Jurusan : %s", jurusan);
		fgets(prodi, sizeof(prodi), fptr); // mengambil isi baris keempat dari file yang ditunjuk oleh variabel pointer fptr lalu disimpan ke variabel prodi
		printf("Prodi : %s", prodi);
		
		printf("\n");
	
	}
	
	fclose(fptr);
	
	return 0;
}
