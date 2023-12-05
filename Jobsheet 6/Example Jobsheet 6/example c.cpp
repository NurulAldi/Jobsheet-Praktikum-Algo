#include<stdio.h>

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	// perulangan while 
	while(ulangi == 'y'){
		printf("Apakah kamu mau mengulang?\n");
		printf("Jawab (y/t): ");
		scanf("%c", &ulangi);
		
		// increment counter
		counter++;
	}

	printf("\n\n-----------\n");
	printf("perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali. ", counter);

}
