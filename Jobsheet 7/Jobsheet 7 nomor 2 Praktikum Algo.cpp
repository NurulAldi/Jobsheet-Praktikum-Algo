// developer : Nurul Aldi (23343048)
#include <stdio.h>

int main() {
    int n;

    // Meminta pengguna untuk memasukkan banyak mahasiswa
    printf("Input banyak siswa: ");
    scanf("%d", &n);

    // Deklarasi array untuk menyimpan nama mahasiswa
    char names[n][100]; // Setiap nama maksimal 100 karakter 

    // Meminta pengguna memasukkan nama mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf(" %99s", names[i]); 
    }

	printf("\n");
    // Menampilkan seluruh nama mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, names[i]);
    }

    return 0;
}

