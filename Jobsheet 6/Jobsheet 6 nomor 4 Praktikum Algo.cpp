// Created by : 23343048_Nurul Aldi
#include <stdio.h>
#include <stdlib.h>

// Deklarasi variabel global
int no_rek = 0123; // Nomor rekening
char nama[20] = "Hattori"; // Nama akun
int saldo = 175000; // Saldo ATM

// Fungsi untuk menampilkan menu utama
void menu_utama() {
    printf("ATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
    printf("Pilih menu: "); // pengguna diminta untuk memilih salah satu dari 4 pilihan diatas
}

// Fungsi untuk menampilkan informasi akun
void info_akun() {
    printf("No Rek : %d\n", no_rek);
    printf("Nama Akun : %s\n", nama);
    printf("Saldo ATM : Rp. %d\n", saldo);
}

// Fungsi untuk melakukan cek saldo
void cek_saldo() {
    system("cls"); // Membersihkan layar
    info_akun(); // Menampilkan informasi akun
    printf("\nTekan enter untuk kembali ke menu utama...");
    getchar(); // Menunggu input enter dari pengguna
}

// Fungsi untuk melakukan setoran
void setoran() {
    int jumlah; // Variabel lokal untuk menyimpan jumlah setoran
    system("cls"); // Membersihkan layar
    info_akun(); // Menampilkan informasi akun
    printf("\nMasukkan jumlah setoran: ");
    scanf("%d", &jumlah); // Membaca input dari pengguna dan disimpan ke variabel jumlah 
    getchar(); // Membersihkan buffer input
    if (jumlah > 0) { // Jika jumlah setoran valid atau dengan kata lain lebih dari 0
        saldo += jumlah; // Menambahkan jumlah setoran ke saldo
        printf("\nSetoran berhasil. Saldo Anda sekarang adalah Rp. %d\n", saldo);
    }
    else { // Jika jumlah setoran tidak valid
        printf("\nSetoran gagal. Jumlah setoran harus positif.\n");
    }
    printf("\nTekan enter untuk kembali ke menu utama...");
    getchar(); // Menunggu input dari user
}

// Fungsi untuk melakukan penarikan tunai
void penarikan_tunai() {
    int jumlah; // Variabel lokal untuk menyimpan jumlah penarikan
    system("cls"); // Membersihkan layar
    info_akun(); // Menampilkan informasi akun
    printf("\nMasukkan jumlah penarikan: ");
    scanf("%d", &jumlah); // Membaca input dari user
    getchar(); // Membersihkan buffer input
    if (jumlah > 0 && jumlah <= saldo - 50000) { // Jika jumlah penarikan valid dan tidak melebihi saldo minimal
        saldo -= jumlah; // Mengurangi jumlah penarikan dari saldo
        printf("\nPenarikan berhasil. Saldo Anda sekarang adalah Rp. %d\n", saldo);
    }
    else { // Jika jumlah penarikan tidak valid atau melebihi saldo minimal
        printf("\nPenarikan gagal. Jumlah penarikan harus positif dan tidak melebihi Rp. %d\n", saldo - 50000);
    }
    printf("\nTekan enter untuk kembali ke menu utama...");
    getchar(); // Menunggu input dari user
}

// Fungsi utama program
int main() {
    int pilihan; // Variabel lokal untuk menyimpan pilihan menu
    do {
        system("cls"); // Membersihkan layar
        menu_utama(); // Menampilkan menu utama
        scanf("%d", &pilihan); // Membaca input dari user
        getchar(); // Membersihkan buffer input
        
        switch (pilihan) { // Memilih fungsi sesuai dengan pilihan menu
            
            case 1: cek_saldo(); break; // Memanggil fungsi cek saldo
            
            case 2: setoran(); break; // Memanggil fungsi setoran
            
            case 3: penarikan_tunai(); break; // Memanggil fungsi penarikan tunai
            
            case 4: printf("\nTerima kasih telah menggunakan layanan kami.\n"); break; // Keluar dari program
            
            default: printf("\nPilihan tidak valid. Silakan coba lagi.\n"); // Menampilkan pesan kesalahan jika pengguna menginput selain 1-4 seperti diatas
        }
    } while (pilihan != 4); // Mengulangi program sampai pengguna memilih exit
    
    return 0; // Mengakhiri program
}
