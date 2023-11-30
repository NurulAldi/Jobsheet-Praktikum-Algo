// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
  char nama_pembeli;
  char nama_barang;
  int jumlah_barang;
  float harga_barang_satuan;
  float harga_total;
  
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
  
  printf("\nHarga total adalah : %.2f", harga_total);
  
  return 0;
  
  
}

