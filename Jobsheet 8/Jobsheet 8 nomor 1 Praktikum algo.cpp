// Created by : 23343048_Nurul Aldi
#include <stdio.h>

// fungsi untuk melakukan perkalian menggunakan fungsi rekursif
int perkalian(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + perkalian(a, b - 1); // menambahkan a dengan a sebanyak b kali 
    }
}


int main() {
    int num1, num2;

    printf("Masukkan bilangan pertama: "); // user diminta menginput angka pertama
    scanf("%d", &num1);

    printf("Masukkan bilangan kedua: "); // user diminta menginput angka kedua
    scanf("%d", &num2);

	// blok kode if else dibawah untuk memastikan apakah angka yang diinput user 0 kebawah atau tidak
    if (num1 <= 0 || num2 <= 0) { // jika angka pertama dan angka kedua sama atau lebih kecil dari 0
        printf("Masukkan hanya bilangan bulat positif diatas 0.\n");
    } else { // jika angka pertama dan angka kedua besar dari 0
        int result = perkalian(num1, num2); // memanggil fungsi perkalian
        printf("Hasil perkalian %d x %d adalah: %d\n", num1, num2, result);
    }

    return 0;
}

