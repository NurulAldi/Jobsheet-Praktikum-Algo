// developer : Nurul Aldi (23343048)
#include<stdio.h>
#include<string.h>

int main(){
	char kata[10];
	
	// pengguna diminta menginput kata kata untuk dibalikkan 
	printf("Inputkan kata kata untuk dibalikkan : "); 
	gets(kata);
	
	// for loop untuk mengeksekusi kata kata dimulai dari karakter terakhir hingga karakter paling awal
	// sehingga kata kata yang diinputkan pengguna menjadi terbalik
	for(int i = strlen(kata) - 1; i >= 0; i--){ // i = strlen(kata) - 1 untuk mencegah spasi di awal kata yang dibalikkan
		printf("%c", kata[i]);
	}
	
	return 0;
}
