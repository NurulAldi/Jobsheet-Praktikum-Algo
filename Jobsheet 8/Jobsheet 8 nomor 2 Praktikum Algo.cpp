// developer : Nurul Aldi (23343048)
#include<stdio.h>
#include<stdlib.h>

// fungsi untuk melakukan operasi penjumlahan
int penjumlahan(int a, int b){
	printf("\n%d + %d adalah : %d ", a, b, a+b);
	
	return 0;
}
// fungsi untuk melakukan operasi pengurangan
int pengurangan(int a, int b){
	printf("\n%d - %d adalah : %d ", a, b, a-b);
	
	return 0;
}

// fungsi untuk melakukan operasi perkalian
int perkalian(int a, int b){
	printf("\n%d x %d adalah : %d ", a, b, a*b);
	
	return 0;
}

// fungsi untuk melakukan operasi pembagian
int pembagian(int a, int b){
	printf("\n%d / %d adalah : %d ", a, b, a/b);
	
	return 0;
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
	getchar();

	// mengizinkan user untuk melakukan operasi sebanyak mungkin hingga si user sendiri yang memillih untuk exit
	switch(pilihan){
		case 1:
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar();
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar();
			penjumlahan(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar();
			break;
		case 2:
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar();
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar();
			pengurangan(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar();
			break;
		case 3:
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar();
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar();
			perkalian(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar();
			break;
		case 4:
			printf("Masukkan nilai angka ke-1 : ");
			scanf("%d", &angka1);
			getchar();
			printf("Masukkan nilai angka ke-2 : ");
			scanf("%d", &angka2);
			getchar();
			pembagian(angka1, angka2);
			
			printf("\nTekan enter untuk kembali...");
			getchar();
			break;
		case 5:
			printf("\nTerimakasih telah menggunakan program kami...");
			break;
		default:
			printf("\nPilihan anda tidak valid");
			getchar;
			break;
						
	}
	} while(pilihan != 5);

	return 0;
}
