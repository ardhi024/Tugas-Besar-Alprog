#include <stdio.h>
#include <stdlib.h>
int jam;
int main(){
	int j=0, m=0, d=0, i=0;
	int kode;
	char s;
	printf("Masukkan waktu sewa (jam): ");
	scanf("%d", &jam);
	printf("Masukkan kode ps : ");
	scanf("%d", &kode);
	printf("List kode PS\n");
		if(kode==31){
			printf("31[x]  32[]  33[]\n41[]  42[]  43[]\n51[]  52[]  53[]");
		}else if(kode==32){
			printf("31[]  32[x]  33[]\n41[]  42[]  43[]\n51[]  52[]  53[]");
		}else if(kode==33){
			printf("31[]  32[]  33[x]\n41[]  42[]  43[]\n51[]  52[]  53[]");
		}else if(kode==41){
			printf("31[]  32[]  33[]\n41[x]  42[]  43[]\n51[]  52[]  53[]");
		}else if(kode==42){
			printf("31[]  32[]  33[]\n41[]  42[x]  43[]\n51[]  52[]  53[]");
		}else if(kode==43){
			printf("31[]  32[]  33[]\n41[]  42[]  43[x]\n51[]  52[]  53[]");
		}else if(kode==51){
			printf("31[]  32[]  33[]\n41[]  42[]  43[]\n51[x]  52[]  53[]");
		}else if(kode==52){
			printf("31[]  32[]  33[]\n41[]  42[]  43[]\n51[]  52[x]  53[]");
		}else if(kode==53){
			printf("31[]  32[]  33[]\n41[]  42[]  43[]\n51[]  52[]  53[x]");
		}
	printf("\nTanda x artinya ps sedang digunakan");
	printf("\nPS kode %d : %d jam", kode, jam);
	printf("\nMohon pilih PS yang lain atau tunggu\nhingga waktu rental selesai");
	getch();
	system("cls");
	main();
}
void waktu(){
	int h=0, j=0, m=0, d=0, i;
	i=0;
	if(i==0){
		j=jam;
		m=0;
		d=0;
		while(1){
			printf("     \r%d:%d:%d", j, m, d);
			Sleep(1000);
			if(d!=0){
				d--;
			}else if(d==0 && m!=0){
				d=59;
				m--;
			}else if(d==0 && m==0 && j!=0){
				j--;
				m=59;
				d=59;
			}else if(j==0 && m==0 && d==0){
				Beep(800,300);
			}
		}
	}else{
		printf("Input salah");
	}
}
