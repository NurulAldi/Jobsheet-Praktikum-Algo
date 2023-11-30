// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	float rp, dollar;
	
	printf("Masukkan jumlah uang dalam rupiah : ");
	// Pengguna menginputkan nilai uang dalam bentuk rupiah
    scanf("%f", &rp);
	
	// operasi matematika untuk mengkonversi rupiah ke dollar
    dollar = rp / 14250;
    // menampilkan hasil konversi rupiah ke dollar
	printf("\nJumlah uang anda dalam dollar adalah : %.2f$", dollar);
	
	return 0;

}
