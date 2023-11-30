// developed by Nurul Aldi (23343048)
#include<stdio.h>
#include<conio.h>

int main(){
	float kelvin, fahrenheit, reamur, celcius;
	
	
	printf("input suhu celcius : ");
	// masukkan suhu dalam celcius
	scanf("%f", &celcius);
	
	// operasi matematika untuk mengkonversi derajat celcius ke derajat kelvin
	kelvin = celcius + 273.15;
	
	// menampilkan hasil konversi derajat celcius ke derajat fahrenheit
	printf("\nSuhu dalam kelvin : %.2f ", kelvin);
	
	// operasi matematika untuk mengkonversi derajat celcius ke derajat fahrenheit
	fahrenheit = (celcius * 1.8) + 32;
	
	// menampilkan hasil konversi derajat celcius ke derajat fahrenheit
	printf("\nSuhu dalam fahrenheit : %.2f ", fahrenheit);
	
	// operasi matematika untuk mengkonversi derajat celcius ke derajat reamur
	reamur = celcius * 0.8;
	
	// menampilkan hasil konversi derajat celcius ke derajat fahrenheit
	printf("\nSuhu dalam reamur : %.2f", reamur);
	
	return 0;
	 
}
