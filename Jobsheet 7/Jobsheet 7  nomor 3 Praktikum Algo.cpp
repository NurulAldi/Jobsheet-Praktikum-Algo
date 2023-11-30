// developer : Nurul Aldi (23343048)
#include<stdio.h>
#include<string.h>

int main(){
	char password[50];
	char username[50];
	
	printf("Input username anda : "); // pengguna diminta meninput username 
	scanf(" %s", &username);
	printf("Input password anda : "); // pengguna diminta menginput password
	scanf(" %s", &password);
	
	 if(strcmp(username, "krustak") == 0){
	 	if(strcmp(password, "wadidaw") == 0){
	 		printf("Berhasil login"); // jika password dan username sesuai, maka "Berhasi login" akan ditampilkan 
		 } else{
		 	printf("password salah"); // jika password tidak sesuai tapi username sesuai, maka "password salah" akan ditampilkan
		 }
	 } else {
	 	printf("Username salah"); // jika username tidak sesuai, maka "Username salah" akan ditampilkan
	 }
	 
	 return 0;
}
