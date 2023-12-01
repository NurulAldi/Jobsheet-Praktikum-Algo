// Created by : 23343048_Nurul Aldi
#include<stdio.h>
#include<stdlib.h>

// fungsi untuk melakukan operasi penjumlahan
int penjumlahan(int a, int b){
	printf("\n%d + %d adalah : %d ", a, b, a+b);
	
	return 0; // fungsi ini akan mengembalikan nilai integer
}
// fungsi untuk melakukan operasi pengurangan
int pengurangan(int a, int b){
	printf("\n%d - %d adalah : %d ", a, b, a-b);
	
	return 0; // fungsi ini akan mengembalikan nilai integer
}

// fungsi untuk melakukan operasi perkalian
int perkalian(int a, int b){
	printf("\n%d x %d adalah : %d ", a, b, a*b);
	
	return 0; // fungsi ini akan mengembalikan nilai integer
}

// fungsi untuk melakukan operasi pembagian
int pembagian(int a, int b){
	printf("\n%d / %d adalah : %d ", a, b, a/b);
	
	return 0; // fungsi ini akan mengembalikan nilai integer
}

int main(){
	int pilihan, angka1, angka2;
	
	do{
	system("cls"); // digunakan untuk membersihkan layar
	printf("Pilihlah operasi Aritmetika yang ingin anda lakukan ");
	printf("\n1.Penjumlahan");
	printf("\n2.Pengurangan");
	printf("\n3.Perkalian");
	printf("\n4.Pembagian");
	printf("\n5.Exit");
	printf("\nPilihan : ");
	scanf("%d", &pilihan);
	fflush(stdin); // membersihkan buffer input dari scanf()

	// mengizinkan user untuk melakukan operasi sebanyak mungkin hingga si user sendiri yang memillih untuk exit
	switch(pilihan){
		case 1: // blok kode ini akan berjalan jika user menginput nomor 1 (penjumlahan)
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar(); // membersihkan buffer input dari scanf()
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar(); // membersihkan buffer input dari scanf()
			penjumlahan(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar(); // menunggu input enter dari user
			break;
		case 2: // blok kode ini akan berjalan jika user menginput nomor 2 (pengurangan)
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar(); // membersihkan buffer input dari scanf()
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar(); // membersihkan buffer input dari scanf()
			pengurangan(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar(); // menunggu input enter dari user
			break;
		case 3: // blok kode ini akan berjalan jika user menginput nomor 3 (perkalian)
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar(); // membersihkan buffer input dari scanf()
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar(); // membersihkan buffer input dari scanf()
			perkalian(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar(); // menunggu input enter dari user
			break;
		case 4: // blok kode ini akan berjalan jika user menginput nomor 4 (pembagian)
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar(); // membersihkan buffer input dari scanf()
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar(); // membersihkan buffer input dari scanf()
			pembagian(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar(); // menunggu input enter dari user
			break;
		case 5: // blok kode ini akan berjalan jika user menginput nomor 5 (exit)
			printf("\nTerimakasih telah menggunakan program kami...");
			break;
		default: // blok kode ini akan berjalan jika user menginput selain 1-5
			printf("\nPilihan anda tidak valid");
			break;
						
	}
	} while(pilihan != 5); // program akan terus berjalan selama user menginput pilihan selain 5 (exit)

	return 0;
}
