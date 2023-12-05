#include<stdio.h>

int main(){
	// membuat variable score
	int score = 0;
	
	// membuat pointer dan referensikan dengan alamat 
	// dari variabel score
	int *p_score = &score;
	
	// mengakses data variabel score dari pointer
	printf("Isi *p_score = %d\n", *p_score);
	
	printf("Isi score awal = %d\n", score);
	
	// mengubah data variabel score dari pointer
	*p_score = 5;
	
	// melihat isi variabel score
	printf("Isi score setelah diubah = %d\n", score);
}
