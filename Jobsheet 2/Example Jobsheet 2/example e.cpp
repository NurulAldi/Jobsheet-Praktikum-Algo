#include<stdio.h>

int main(){
	// membuat variabel
	char name[20], web_address[30];
	
	printf("Nama: ");
	scanf("%s", &name);
	
	printf("Alamat web: ");
	scanf("%s", &web_address);
	
	printf("-----------------------------\n");
	printf("Nama yang diinputkan: %s\n", name);
	printf("Alamat web yang diinputkan: %s\n", web_address);	
	
	return 0;
}
