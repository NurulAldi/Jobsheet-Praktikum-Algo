// Created by : 23343048_Nurul Aldi
#include<stdio.h>

int main(){
  char nama_pembeli; // deklarasi variabel nama_pembeli dengan tipe data char
  char nama_barang; // deklarasi variabel nama_barang dengan tipe data char
  int jumlah_barang; // deklarasi variabel jumlah_barang dengan tipe data int
  float harga_barang_satuan; // deklarasi variabel harga_barang_satuan dengan tipe data float
  float harga_total; // deklarasi variabel harga_total dengan tipe data float
  
  // pengguna diminta menginput nama pembeli
  printf("Masukkan nama pembeli : ");
  scanf("%s", &nama_pembeli);
  
  // pengguna diminta menginput nama barang
  printf("Masukkan nama barang : ");
  scanf("%s", &nama_barang);
  
  // pengguna diminta menginput harga barang
  printf("Masukkan harga barang : ");
  scanf("%f", &harga_barang_satuan);
 
  // pengguna diminta menginput jumlah barang
  printf("Masukkan jumlah barang : ");
  scanf("%i", &jumlah_barang);
  
  // operasi matematika menghitung harga total barang
  harga_total = (harga_barang_satuan*jumlah_barang);
  
  printf("\nHarga total adalah : Rp.%.2f", harga_total);
  
  return 0;
  
  
}

