// developed by Nurul Aldi (23343048)
#include <stdio.h>
#define PI 3.141592653589793238

int main() {
    int pilihan;
    float jari2, sisi, panjang, lebar, tinggi, radius, tinggiTabung;

	// pengguna diminta memilih salah satu dari pilihan dibawah ini
    printf("Pilih rumus yang ingin digunakan:\n");
    printf("1. Luas Permukaan Bola\n");
    printf("2. Luas Permukaan Kubus\n");
    printf("3. Luas Permukaan Balok\n");
    printf("4. Luas Permukaan Tabung\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);

	// operasi akan dijalankan sesuai dengan input dari pengguna 
    switch(pilihan) {
        case 1:
            // Rumus Luas Permukaan Bola: 4 * PI * r^2
            printf("Masukkan jari-jari bola: ");
            scanf("%f", &jari2);
            printf("Luas permukaan bola adalah %.2f\n", 4 * PI * jari2 * jari2);
            break;
        case 2:
            // Rumus Luas Permukaan Kubus: 6 * s^2
            printf("Masukkan panjang sisi kubus: ");
            scanf("%f", &sisi);
            printf("Luas permukaan kubus adalah %.2f\n", 6 * sisi * sisi);
            break;
        case 3:
            // Rumus Luas Permukaan Balok: 2 * (pl + pt + lt)
            printf("Masukkan panjang balok: ");
            scanf("%f", &panjang);
            printf("Masukkan lebar balok: ");
            scanf("%f", &lebar);
            printf("Masukkan tinggi balok: ");
            scanf("%f", &tinggi);
            printf("Luas permukaan balok adalah %.2f\n", 2 * (panjang*lebar + panjang*tinggi + lebar*tinggi));
            break;
        case 4:
            // Rumus Luas Permukaan Tabung: 2 * PI * r * (r + t)
            printf("Masukkan radius tabung: ");
            scanf("%f", &radius);
            printf("Masukkan tinggi tabung: ");
            scanf("%f", &tinggiTabung);
            printf("Luas permukaan tabung adalah %.2f\n", 2 * PI * radius * (radius + tinggiTabung));
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}

