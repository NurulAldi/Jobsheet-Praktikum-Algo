// Created by : 23343048_Nurul Aldi
#include <stdio.h>

int main() {
    // deklarasi variabel untuk menyimpan nilai kehadiran, nilai tugas, nilai uts, nilai uas, nilai akhir
    float kehadiran, tugas, uts, uas, nilaiAkhir;

    // Meminta input nilai dari pengguna
    printf("Masukkan nilai Kehadiran: ");
    scanf("%f", &kehadiran); // disimpan ke variabel kehadiran
    printf("Masukkan nilai Tugas: ");
    scanf("%f", &tugas); // disimpan ke variabel tugas
    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts); // disimpan ke variabel uts
    printf("Masukkan nilai UAS: ");
    scanf("%f", &uas); // disimpan ke variabel uas

    // operasi matematika untuk menghitung nilai akhir
    nilaiAkhir = kehadiran * 0.2 + tugas * 0.2 + uts * 0.25 + uas * 0.35;

    // Menentukan grade dan keterangan kelulusan
    if (nilaiAkhir >= 0 && nilaiAkhir <= 44) { // jika nilai akhir lebih sama dengan 0 dan nilai akhir kurang sama dengan 44
        printf("Nilai Akhir: E\n");
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilaiAkhir >= 45 && nilaiAkhir <= 55) { // jika nilai akhir lebih sama dengan 45 dan nilai akhir kurang sama dengan 55
        printf("Nilai Akhir: D\n");
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilaiAkhir >= 56 && nilaiAkhir <= 65) { // jika nilai akhir lebih sama dengan 56 dan nilai akhir kurang sama dengan 65
        printf("Nilai Akhir: C\n");
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilaiAkhir >= 66 && nilaiAkhir <= 75) { // jika nilai akhir lebih sama dengan 66 dan nilai akhir kurang sama dengan 75
        printf("Nilai Akhir: B-\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 76 && nilaiAkhir <= 80) { // jika nilai akhir lebih sama dengan 76 dan nilai akhir kurang sama dengan 80
        printf("Nilai Akhir: B\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 81 && nilaiAkhir <= 85) { // jika nilai akhir lebih sama dengan 81 dan nilai akhir kurang sama dengan 85
        printf("Nilai Akhir: B+\n");
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 86 && nilaiAkhir <= 90) { // jika nilai akhir lebih sama dengan 86 dan nilai akhir kurang sama dengan 90
        printf("Nilai Akhir: A-\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilaiAkhir >= 91 && nilaiAkhir <= 100) { // jika nilai akhir lebih sama dengan 91 dan nilai akhir kurang sama dengan 100
        printf("Nilai Akhir: A\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Nilai yang dimasukkan tidak valid.\n"); // blok kode ini akan berjalan apabila pengguna menginput nilai lebih dari 100 atau kurang dari 0
    }

    return 0;
}

