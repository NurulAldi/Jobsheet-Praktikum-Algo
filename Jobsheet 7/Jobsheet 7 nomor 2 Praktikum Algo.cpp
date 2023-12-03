// Created by : 23343048_Nurul Aldi
#include <stdio.h>

int main() {
    // deklarasi variabel n untuk menyimpan banyak mahasiswa
    int n;

    // Meminta pengguna untuk memasukkan banyak mahasiswa
    printf("Input banyak siswa: ");
    scanf("%d", &n);

    // Deklarasi array untuk menyimpan nama mahasiswa
    char names[n][100]; // Setiap nama maksimal 100 karakter 

    // Meminta pengguna memasukkan nama mahasiswa sebanyak n mahasiswa (jumlah mahasiswa berdasarkan input pengguna)
    for (int i = 0; i < n; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        gets(names[i]); 
    }

	printf("\n"); // membuat baris baru
    // Menampilkan seluruh nama mahasiswa sebanyak n mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, names[i]);
    }

    return 0;
}

