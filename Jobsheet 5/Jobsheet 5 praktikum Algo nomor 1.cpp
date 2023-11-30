// developed by Nurul Aldi (23343048)
#include <stdio.h>

int main() {
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
            printf("Hasil: %d\n", num1 + num2);
            break;
        case 'b':
            printf("Hasil: %d\n", num1 - num2);
            break;
        case 'c':
            printf("Hasil: %d\n", num1 * num2);
            break;
        case 'd':
            if(num2 != 0)
                printf("Hasil: %.2f\n", (float)num1 / (float)num2);
            else
                printf("Error! Pembagi tidak boleh nol.\n");
            break;
        case 'e':
            if(num2 != 0)
                printf("Hasil: %d\n", num1 % num2);
            else
                printf("Error! Pembagi tidak boleh nol.\n");
            break;
        default:
            printf("Operator tidak valid!\n");
    }

    return 0;
}
