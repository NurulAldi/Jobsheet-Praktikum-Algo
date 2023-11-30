// developer : Nurul Aldi (23343048)
#include<stdio.h>

float phi = 3.14;

// fungsi untuk menentukan keliling lingkaran
int keliling(float a){
	printf("\nKeliling lingkaran adalah : %.2f cm", 2*phi*a);
	return 0;
}

// fungsi untuk menentukan luas lingkaran
int luas(float a){
	printf("\nLuas lingkaran adalah : %.2f cm2", phi*a*a);
	return 0;
}

int main(){
	float r;
	
	printf("Inputkan jari jari lingkaran : "); // user diminta menginputkan jari jari lingkaran
	scanf("%f", &r);
	
	keliling(r);
	luas(r);
	
	return 0;
}
