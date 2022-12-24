#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define KOLOM 255

int tambah_game;

int main(){
    char game[20][KOLOM];
    int i,j,lenght;
    
    printf("TAMBAHKAN GAME\n\n");
    printf("Penambahan game akan dikenakan 2000 per game \n");
    //printf("%d", KOLOM);
    printf("ketik jumlah game yang akan ditambahkan : ");
    scanf("%d", &i);
    fflush(stdin);

    printf("input game : \n");
    for(j=0;j<i;j++){
        scanf("%[^\n]%*c",&game[j]);
        fflush(stdin);
    }

    printf("\n\nlist game yang ingin ditambahkan : \n");
    for(j=0;j<i;j++){
        printf("%d. %s\n", (j+1),game[j]);
    }
    tambah_game = i * 2000;
    printf("total biaya tambah game : %d", tambah_game);

    return 0;
}
