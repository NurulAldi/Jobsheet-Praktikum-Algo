#include<stdio.h>

int main(){
	
	for(int i = 1; i <= 5; i++){ // for loop untuk mengatur baris simbol
		for(int j = 1; j <= i; j++){ // for loop untuk mengatur kolom simbol
			printf("*");
		}
		printf("\n"); // berpindah ke baris baru 
	}
	
	
	return 0;
}
