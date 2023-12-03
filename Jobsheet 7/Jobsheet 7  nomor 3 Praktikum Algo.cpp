// Created by : 23343048_Nurul Aldi
#include<stdio.h>
#include<string.h>

int main(){
	// deklarasi variabel untuk menyimpan password dan username pengguna dengan maksimal karakter sebanyak 50 karakter 
	char password[50];
	char username[50];
	
	printf("Input username anda : "); // pengguna diminta meninput username 
	scanf(" %s", &username);
	printf("Input password anda : "); // pengguna diminta menginput password
	scanf(" %s", &password);
	
	 if(strcmp(username, "krustak") == 0){ // jika username sama dengan "krustak"
	 	if(strcmp(password, "wadidaw") == 0){ // jika passowrd sama dengan "wadidaw"
	 		printf("Berhasil login"); // jika password dan username sesuai, maka "Berhasi login" akan ditampilkan 
		 } else{
		 	printf("password salah"); // jika password tidak sesuai tapi username sesuai, maka "password salah" akan ditampilkan
		 }
	 } else {
	 	printf("Username salah"); // jika username tidak sesuai, maka "Username salah" akan ditampilkan
	 }
	 
	 return 0;
}
