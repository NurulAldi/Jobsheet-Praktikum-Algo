#include<stdio.h>

int main(){
	
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("jawab> ");
	scanf("%i", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7) ? "Benar" : "Salah");

}
