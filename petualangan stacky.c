#include <stdio.h>
#include <stdlib.h>

// Membuat struktur Stack
typedef struct stack* tumpukan;
struct stack{
    int ganjil[1024];
};

// Membuat prosedur push
void push(tumpukan t, int nilai, int index){
    t -> ganjil[index] = nilai;
}

// Membuat prosedur cetak
void cetak(tumpukan t,int index){
    for (int i = index - 1; i>=0 ;i--){
        printf("%d ",t -> ganjil[i]);
    }
}

void main(){
    // Kamus data index untuk pembacaan stack
    int index = 0;
    int n;
    
    // Input jumlah n (ganjil)
    printf("Masukkan n: ");
    scanf("%d",&n);

    // Membuat stack bernama kerajaanganjil
    tumpukan kerajaanganjil = (tumpukan) malloc(sizeof(struct stack));

    // Nilai pembacaan (supaya tidak kebesaran)
    int read = n *2;

    // membaca dan menampungnya di ganjil[index]
    for (int i = 0; i<read ;i++){
        if(i%2==1){
            push(kerajaanganjil, i, index);
            index++;
        }
    }

    // Output
    printf("Bilangan ganjil yang ada di stack: ");
    cetak(kerajaanganjil, index);
}