// Created by : 23343048_Nurul Aldi
#include<stdio.h>
#include<string.h>

// deklarasi struct identitas untuk menyimpan nama
// tanggal, bulan, dan tahun dari pengguna 
typedef struct id{
	char nama[50];
	int tgl;
	int bln;
	int thn;	
}identitas;

int main(){
	
	// deklarasi struct identitas dan variabel zodiak
	// untuk menyimpan zodiak dari pengguna 
	identitas ids;
	char zodiak[15];
	
	printf("Program ini akan menentukan zodiak anda !!");
	printf("\nInput nama anda : ");
	gets(ids.nama);
	printf("Input tanggal lahir anda :");
	scanf("%d", &ids.tgl);
	fflush(stdin); // untuk membersihkan buffer input dari scanf()
	printf("Input bulan kelahiran anda :");
	scanf("%d", &ids.bln);
	fflush(stdin); // untuk membersihkan buffer input dari scanf()
	printf("Input tahun kelahiran anda :");
	scanf("%d", &ids.thn);
	fflush(stdin); // untuk membersihkan buffer input dari scanf()

	// pengecekan kondisi tanggal dan bulan yang diinput pengguna
	// untuk menentukan zodiak dari pengguna
	if((ids.tgl >= 21 && ids.bln == 12) || (ids.tgl <= 19 && ids.bln == 1)){
		strcpy(zodiak, "Capricorn"); // zodiak Capricorn jika tgl lahir 21 desember sampai 19 januari
	}else if((ids.tgl <= 18 && ids.bln == 2) || (ids.tgl >= 20 && ids.bln == 1)){
		strcpy(zodiak, "Aquarius"); // zodiak Capricorn jika tgl lahir 20 januari sampai 18 februari
	}else if((ids.tgl >= 19 && ids.bln == 2) || (ids.tgl <= 20 && ids.bln == 3)){
		strcpy(zodiak, "Pisces"); // zodiak Pisces jika tgl lahir 19 Februari sampai 20 maret
	}else if((ids.tgl >= 21 && ids.bln == 3) || (ids.tgl <= 20 && ids.bln == 4)){
		strcpy(zodiak, "Aries"); // zodiak Aries jika tgl lahir 21 maret sampai 20 april
	}else if((ids.tgl >= 21 && ids.bln == 4) || (ids.tgl <= 20 && ids.bln == 5)){
		strcpy(zodiak, "Taurus"); // zodiak Taurus jika tgl lahir 21 april sampai 20 mei
	}else if((ids.tgl <= 20 && ids.bln == 6) || (ids.tgl >= 21 && ids.bln == 5)){
		strcpy(zodiak, "Gemini"); // zodiak Gemini jika tgl lahir 21 mei sampai 20 juni
	}else if((ids.tgl <= 22 && ids.bln == 7) || (ids.tgl >= 21 && ids.bln == 6)){
		strcpy(zodiak, "Cancer"); // zodiak Cancer jika tgl lahir 21 juni sampai 22 juli
	}else if((ids.tgl <= 22 && ids.bln == 8) || (ids.tgl >= 23 && ids.bln == 7)){
		strcpy(zodiak, "Leo"); // zodiak Leo jika tgl lahir 23 juli sampai 22 agustus
	}else if((ids.tgl <= 22 && ids.bln == 9) || (ids.tgl >= 23 && ids.bln == 8)){
		strcpy(zodiak, "Virgo"); // zodiak Virgo jika tgl lahir 23 agustus sampai 22 september
	}else if((ids.tgl <= 22 && ids.bln == 10) || (ids.tgl >= 23 && ids.bln == 9)){
		strcpy(zodiak, "Libra"); // zodiak Libra jika tgl lahir 23 september sampai 22 oktober
	}else if((ids.tgl <= 22 && ids.bln == 11) || (ids.tgl >= 23 && ids.bln == 10)){
		strcpy(zodiak, "Scorpio"); // zodiak scorpio jika tgl lahir 23 oktober sampai 22 november
	}else{
		strcpy(zodiak, "Sagittarius"); // zodiak Sagittarius jika tgl lahir 23 november sampai 20 desember
	}
	
	printf("Tanggal lahir anda [tgl-bln-tahun] : %d-%d-%d", ids.tgl,ids.bln,ids.thn);
	printf("\nZodiak anda adalah : %s", zodiak);
	
	return 0;
	
}
