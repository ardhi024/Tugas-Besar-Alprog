#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define true 1
int main(){
	int h=0, j=0, m=0, d=0;
	printf("Input waktu sewa (d:jj:mm:dd) : ");
	scanf("%d:%d:%d:%d", &h, &j, &m, &d);
	while(1){
		printf("     \r%d:%d:%d:%d", h, j, m, d);
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
		}else if(d==0 && m==0 && j==0 && h!=0){
			h--;
			j=59;
			m=59;
			d=59;
		}else if(h==0 && j==0 && m==0 && d==0){
			exit(0);
		}
	}
	return 0;
}
