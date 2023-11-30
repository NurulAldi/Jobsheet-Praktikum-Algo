// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	
	int i = 0;
	
	printf("deret bilangan genap :");
	// for loop untuk menampilkan bilangan genap
	for(int ab = 2; ab <= 50; i++){ 

		printf("%i ", ab);
		ab += 2;
		}
	
	printf("\nderet bilangan ganjil :");
	// for loop untuk menampilkan bilangan ganjil
	for(int ac = 1; ac <=50; i++){
		
		printf("%i ", ac);
		ac += 2;
	}
	
	return 0;
	
}
