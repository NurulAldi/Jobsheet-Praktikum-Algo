// developed by Nurul Aldi (23343048)
#include <stdio.h>

int main() {
    float total_pembelian, diskon;
    
	// Pengguna diminta menginput total pembelian
    printf("Masukkan total pembelian : ");
    scanf("%f", &total_pembelian);
    
    // Mencari diskon menggunakan total pembelian yang diinputkan pengguna
    if (total_pembelian <= 75000) {
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian <= 125000) {
        diskon = total_pembelian * 0.15;
    } else {
        diskon = total_pembelian * 0.25 + 5000;
    }

    // Menampilkan Diskon yang diterima dalam rupiah
    printf("Diskon yang diterima: Rp %.2f\n", diskon);

    return 0;
}
