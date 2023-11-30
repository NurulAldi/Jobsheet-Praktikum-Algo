// developed by Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	int diameter = 12;
	int r = 6;
	float phi = 3.14;
	float volume, luas_permukaan;
	
	// operasi matematika menghitung volume bola basket
	volume =  (phi*r*r*r)*4/3;
	
	// menampilkan volume bola basket
	printf("Volume bola basket adalah : %.2fm3", volume);
	
	// operasi matematika menghitung luas permukaan bola basket 
	luas_permukaan = 4*phi*r*r;
	
	// menampilkan luas permukaan bola basket
	printf("\nLuas permukaan bola basket adalah : %.2fm2", luas_permukaan);
	
	return 0;
	
}
