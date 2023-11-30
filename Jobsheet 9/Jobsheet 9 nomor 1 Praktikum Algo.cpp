// developer : Nurul Aldi (23343048)
#include <stdio.h>

int main(){
    char borland[7][10] = {"D", "ND", "AND", "LAND", "RLAND", "ORLAND", "BORLAND"};
    char *brlnd = &borland[0][0]; // pointer brlnd menunjuk ke alamat memori dari array borland dimulai dari indeks paling awal

    for(int i = 0; i <= 6; i++){ // fpr loop untuk mengatur baris dari pola
        for(int j = 0; j <= i; j++){ // for loop untuk mengatur kolom dari pola 
            printf("%c", brlnd[i*10 + j]); // i * 10 karena satu elemen dalam array pasti memiliki 10 character
        }
        printf("\n");
    }

    return 0;
}

