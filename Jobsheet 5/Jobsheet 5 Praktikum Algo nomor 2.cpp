// Created by : 23343048_Nurul Aldi
#include <stdio.h>

int main() {
    // deklarasi variabel untuk menyimpan total pembelian dan diskon
    float total_pembelian, diskon;
    
    // Pengguna diminta menginput total pembelian
    printf("Masukkan total pembelian : ");
    scanf("%f", &total_pembelian);
    
    // Mencari diskon menggunakan total pembelian yang diinputkan pengguna
    if (total_pembelian <= 75000) { // jika total pembelian kurang dari 75000
        diskon = total_pembelian * 0.05; 
    } else if (total_pembelian <= 125000) { // jika total pembelian kurang dari 125000
        diskon = total_pembelian * 0.15;
    } else { // jika total pembelian lebih dari 125000
        diskon = total_pembelian * 0.25 + 5000;
    }

    // Menampilkan Diskon yang diterima dalam bentuk rupiah
    printf("Diskon yang diterima: Rp %.2f\n", diskon);

    return 0;
}
