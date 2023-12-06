#include<stdio.h>

int main(){
	char buff[255];
	FILE *fptr;
	
	// membuka file
	if((fptr = fopen("puisi.txt", "r")) == NULL){
		printf("Error: File tidak ada!");
		// Tutup program karena file tidak ada
		exit(1);
	} 
	
	// baca isi file dengan gets lalu simpan ke buff
	fgets(buff, sizeof(255), fptr); 
	printf("%s", buff);
	fgets(buff, sizeof(255), fptr); 
	printf("%s", buff);
	fgets(buff, sizeof(255), fptr); 
	printf("%s", buff);
	fgets(buff, sizeof(255), fptr); 
	printf("%s", buff);
	
	
	// tutup file 
	fclose(fptr);
}
