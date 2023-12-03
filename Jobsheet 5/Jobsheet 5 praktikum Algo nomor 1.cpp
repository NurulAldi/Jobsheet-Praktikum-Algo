// Created by : 23343048_Nurul Aldi
#include <stdio.h>

int main() {

    // deklarasi variabel num1, num2 (untuk menyimpan input dari pengguna) dan op (untuk menyimpan operator pilihan user)
    int num1, num2; 
    char op;

    // Pengguna Menentukan operator yang diinginkan
    printf("MASUKKAN OPERATOR!! \n\n(a=penjumlahan, b=pengurangan, c=perkalian, d=pembagian, e=hasil bagi): ");
    scanf("%c", &op);
    
	// Pengguna menginput dua buah bilangan yang akan dioperasikan
    printf("Masukkan dua bilangan : \n");
    scanf("%d %d", &num1, &num2);

    // Operasi akan dijalankan sesuai dengan pilihan Pengguna
    switch(op) {
        case 'a':
            printf("Hasil: %d\n", num1 + num2); // penambahan nilai dari num 1 dengan num 2
            break;
        case 'b':
            printf("Hasil: %d\n", num1 - num2); // pengurangan nilai dari num 1 oleh num 2
            break;
        case 'c':
            printf("Hasil: %d\n", num1 * num2); // perkalian antara nilai num 1 dan num 2
            break;
        case 'd':
            if(num2 != 0) // jika num2 (angka kedua yang diinput pengguna) tidak sama dengan 0
                printf("Hasil: %.2f\n", (float)num1 / (float)num2); // nilai num1 dibagi dengan nilai num2
            else
                printf("Error! Pembagi tidak boleh nol.\n"); // blok kode ini akan berjalan jika num2 yang diinput pengguna bernilai 0
            break;
        case 'e':
            if(num2 != 0) jika num2 (angka kedua yang diinput pengguna) tidak sama dengan 0
                printf("Hasil: %d\n", num1 % num2); // nilai num1 dibagi nilai num2 lalu berapa sisa pembagian tersebut 
            else
                printf("Error! Pembagi tidak boleh nol.\n"); // blok kode ini akan berjalan apabila num2 yang diinput pengguna bernilai 0
            break;
        default:
            printf("Operator tidak valid!\n"); // blok kode ini akan berjalan jika pengguna menginput operator selain a-e seperti pilihan diatas
    }

    return 0;
}
