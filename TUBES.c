#include <stdio.h>
#include <stdlib.h>
void awal();
int main(){
	printf("===========================\n");
	printf("    JENIS PLAYSTATION\n");
	printf("===========================\n");
	printf("1. PS3\n2. PS4\n3. PS5\n");
	awal();
}
void awal(){
	int menu, kode;
	char pilihan;
	printf("Masukkan jenis PS yang ingin dirental : ");
	scanf(" %d", &menu);
	switch(menu){
		case 1 :
			printf("|======================|\n");
			printf("|        KODE PS3      |\n");
			printf("|======================|\n");
			printf("|  31  |   32  |   33  |\n");
			printf("|======================|\n");
			printf("Masukkan kode PS : ");
			scanf("%d", &kode);
			if(kode==31){
				printf("|==================================================|\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("|--------------------------------------------------|\n");
			}else if(kode==32){
				printf("|==================================================|\n");
				printf("|                   Daftar Game                    |\n");
				printf("|--------------------------------------------------|\n");
			}else if(kode==33){
				printf("|==================================================|\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("|--------------------------------------------------|\n");
			}
			break;
		case 2 :
			printf("|======================|\n");
			printf("|        KODE PS4      |\n");
			printf("|======================|\n");
			printf("|  41  |   42  |   43  |\n");
			printf("|======================|\n");
			printf("Masukkan kode PS : ");
			scanf("%d", &kode);
			break;
		case 3 :
			printf("|======================|\n");
			printf("|        KODE PS5      |\n");
			printf("|======================|\n");
			printf("|  51  |   52  |   53  |\n");
			printf("|======================|\n");
			printf("Masukkan kode PS : ");
			scanf("%d", &kode);
			break;
	}
}
