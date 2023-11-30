// developer : Nurul Aldi (23343048)
#include<stdio.h>

int main(){
	float nMhs[20];
	float total = 0;
	float rata_rata;
	
	for(int i = 0; i < 20; i++){
		printf("Input nilai mahasiswa ke-%d", i + 1); // pengguna diminta memasukkan nilai mahasiswa ke 1 sampai ke 20
		scanf("%d", &nMhs[i]);
		total += nilai[i]; // variabel total akan menyimpan total nilai semua mahasiswa 
	}

	rata_rata = total / 20; // rumus untuk mencari rata rata dari nilai 20 mahasiswa 
	printf("rata rata nilai dari 20 mahasiswa adalah : %.2f", rata_rata);
	
	return 0;
}
