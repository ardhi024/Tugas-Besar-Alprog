#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define true 1
#define ps3 5000
#define ps4 7000
#define ps5 10000
struct regis{
	char nama;
	char alamat;
	char username;
	char password;
} r;
void admin();
void pelanggan();
void ps();
void pembayaran();
int main(){
	int menu;
	printf("============================================\n");
	printf("||      SELAMAT DATANG DI A.R.A PS        ||\n");
	printf("============================================\n");
	printf("|| 1. Masuk sebagai admin                 ||\n");
	printf("|| 2. Masuk sebagai pelanggan             ||\n");
	printf("============================================\n");
	printf("Masukkan pilihan anda (1/2) : ");
	scanf("%d", &menu);
	switch(menu){
		case 1:
			system("cls");
			admin();
			break;
		case 2:
			system("cls");
			pelanggan();
			break;
	}
}
void admin(){
	char usr[5], pas[8];
	int status = 0, salah = 0, pilih;
	printf("============================================\n");
	printf("||      SELAMAT DATANG DI MODE ADMIN      ||\n");
	printf("============================================\n");
   	while(status < 3){
   		printf("Masukkan Username : ");
      	scanf("%s", &usr);
		printf("Masukkan Password : ");
      	scanf("%s", &pas);
      	if(strcmp(usr, "admin")==0 && strcmp (pas, "admin321")== 0){
        	printf("Akses diterima\n");
        	break;
      	}else{
			printf("Username atau Password salah\n");
        	salah++;
        	if(salah == 3){
            	printf("Akses ditolak\n");
            	system("cls");
            	main();
        	}
      	}
		status++;
   	}
   	printf("============================================\n");
	printf("||     ANDA BERADA DI DALAM MODE ADMIN    ||\n");
	printf("============================================\n");
	printf("|| 1. Lihat daftar pelanggan              ||\n");
	printf("|| 2. Lihat daftar registrasi             ||\n");
	printf("|| 3. Lihat daftar game ps                ||\n");
	printf("|| 4. Tambah game ps                      ||\n");
	printf("============================================\n");
	printf("Masukkan pilihan anda : ");
	scanf("%d", &pilih);
	if(pilih==1){
		
	}else if(pilih==2){
		
	}else if(pilih==3){
		system("cls");
		ps();
	}else if(pilih==4){
		
	}
	system("pause");
}
void pelanggan(){
	char usr[10], pas[15];
	int status = 0, salah = 0, pilih;
	printf("============================================\n");
	printf("||     SELAMAT DATANG DI MODE PELANGGAN   ||\n");
	printf("============================================\n");
	printf("|| 1. Registrasi                          ||\n");
	printf("|| 2. Login                               ||\n");
	printf("============================================\n");
	printf("Masukkan pilihan anda : ");
	scanf("%d", &pilih);
	if(pilih==1){
		printf("Masukkan nama anda :");
		scanf("%[^\n]%*c", &r.nama);
		printf("Masukkan alamat anda : ");
		scanf("%[^\n]%*c", &r.alamat);
		printf("Masukkan username anda : ");
		scanf("%[^\n]%*c", &r.username);
		printf("Masukkan password anda : ");
		scanf("%[^\n]%*c", &r.password);
		printf("Catatan : Username dan Password jangan sampai lupa!!");
		FILE * reg;
		reg=fopen("Registrasi_pelanggan.txt", "a");
		fprintf(reg, "============================================\n");
		fprintf(reg, "||           REGISTRASI PENGGUNA          ||\n");
		fprintf(reg, "============================================\n");
		fprintf(reg, "Nama : %s\n", r.nama);
		fprintf(reg, "Alamat : %s\n", r.alamat);
		fprintf(reg, "Username : %s\n", r.username);
		fprintf(reg, "Password : %s\n", r.password);
		fprintf(reg, "============================================\n");
		fclose(reg);
	}if(pilih==2){
//		reg=fopen("Registrasi_pelanggan.txt", "a");
		printf("Masukkan Username : ");
      	scanf("%s", &usr);
		printf("Masukkan Password : ");
      	scanf("%s", &pas);
      	while(status < 3){
	      	if(strcmp(usr, r.username)==0 && strcmp (pas, r.password)== 0){
	        	printf("Akses diterima\n");
	        	break;
	      	}else{
				printf("Username atau Password salah\n");
	        	salah++;
	        	if(salah == 3){
	            	printf("Akses ditolak\n");
	            	system("cls");
	            	pelanggan();
	        	}
	      	}
			status++;
		}
	}
}
void ps(){
	int menu, kode;
	char pilihan, r;
	printf("+================================+\n");
	printf("|        JENIS PLAYSTATION       |\n");
	printf("|================================|\n");
	printf("|  1. PS3  |  2. PS4  |  3. PS5  |\n");
	printf("+================================+\n");
	printf("Masukkan jenis PS : ");
	scanf(" %d", &menu);
	switch(menu){
		case 1 :
			do{
				system("cls");
				printf("+==============================+\n");
				printf("|             KODE PS3         |\n");
				printf("|==============================|\n");
				printf("|  31  |   32  |   33  |   34  |\n");
				printf("+==============================+\n");
				printf("Masukkan kode PS : ");
				scanf("%d", &kode);
				if(kode==31){
					printf("+========================================================+\n");
					printf("|                      Daftar Game                       |\n");
					printf("|========================================================|\n");
					printf("| 1.  Grand Theft Auto V (GTA V)                         |\n");
					printf("| 2.  God of War III                                     |\n");
					printf("| 3.  Uncharted 2: Among Thieves                         |\n");
					printf("| 4.  Grand Theft Auto IV (GTA IV)                       |\n");
					printf("| 5.  Call of Duty: Modern Warfare3                      |\n");
					printf("| 6.  Call of Duty: Black Ops                            |\n");
					printf("| 7.  FIFA Street                                        |\n");
					printf("| 8.  Pro Evolution Soccer (PES) 218                     |\n");
					printf("| 9.  Football Manager 2018                              |\n");
					printf("| 10. Pro Evolution Soccer (PES) 2020                    |\n");
					printf("| 11. The Last of Us                                     |\n");
					printf("| 12. Batman: Akhram City                                |\n");
					printf("| 13. Journey                                            |\n");
					printf("| 14. Hotline Miami                                      |\n");
					printf("| 15. LittleBigPlanet 2                                  |\n");
					printf("| 16. Dead Space 2                                       |\n");
					printf("| 17. The Evil Within                                    |\n");
					printf("| 18. Fallout: New Vegas                                 |\n");
					printf("| 19. FIFA 19                                            |\n");
					printf("| 20. Street Fighter X Tekken                            |\n");
					printf("| 21. Naruto: Ultimate Ninja 5                           |\n");
					printf("| 22. Naruto Shippuden: Ultimate Ninja Storm Revolution  |\n");
					printf("| 23. Call of Duty: Ghost                                |\n");
					printf("| 24. Dead Space                                         |\n");
					printf("| 25. Naruto X Boruto Ninja Voltage                      |\n");
					printf("+--------------------------------------------------------+\n");
					printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
				}else if(kode==32){
					printf("+========================================================+\n");
					printf("|                      Daftar Game                       |\n");
					printf("|========================================================|\n");
					printf("| 1.  Grand Theft Auto V (GTA V)                         |\n");
					printf("| 2.  Pro Evolution Soccer (PES) 2017                    |\n");
					printf("| 3.  Mass Effect                                        |\n");
					printf("| 4.  Shadow Of The Colossus                             |\n");
					printf("| 5.  God of War III                                     |\n");
					printf("| 6.  Dead Space 2                                       |\n");
					printf("| 7.  Uncharted 2: Among Thieves                         |\n");
					printf("| 8.  Grand Theft Auto IV (GTA IV)                       |\n");
					printf("| 9.  Portal 2                                           |\n");
					printf("| 10. Metal Gear Solid 4: Guns of the Patriots           |\n");
					printf("| 11. Call of Duty: Modern Warfare 3                     |\n");
					printf("| 12. Watch Dogs                                         |\n");
					printf("| 13. Dark Souls                                         |\n");
					printf("| 14. Call of Duty: Black Ops                            |\n");
					printf("| 15. Red Dead Redemption                                |\n");
					printf("| 16. Naruto: Ultimate Ninja 5                           |\n");
					printf("| 17. FIFA Street                                        |\n");
					printf("| 18. Naruto Shippuden: Ultimate Ninja Storm Revolution  |\n");
					printf("| 19. Pro Evolution Soccer (PES) 201                     |\n");
					printf("| 20. Naruto Ultimate Ninja Impact                       |\n");
					printf("| 21. Call of Duty 4: Modern Warfare                     |\n");
					printf("| 22. Football Manager 2018                              |\n");
					printf("| 23. Dead Space 2                                       |\n");
					printf("| 24. Drakengard 3                                       |\n");
					printf("| 25. Pro Evolution Soccer (PES) 2020                    |\n");
					printf("+--------------------------------------------------------+\n");
					printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
				}else if(kode==33){
					printf("+========================================================+\n");
					printf("|                      Daftar Game                       |\n");
					printf("|========================================================|\n");
					printf("| 1.  BioShock Infinite                                  |\n");
					printf("| 2.  Pure Football                                      |\n");
					printf("| 3.  Grand Theft Auto V (GTA V)                         |\n");
					printf("| 4.  L.A. Noire                                         |\n");
					printf("| 5.  BioShock Infinite                                  |\n");
					printf("| 6.  God of War III                                     |\n");
					printf("| 7.  The Walking Dead                                   |\n");
					printf("| 8.  Uncharted 2: Among Thieves                         |\n");
					printf("| 9.  Wolfenstein: The New Order                         |\n");
					printf("| 10. Grand Theft Auto IV (GTA IV)                       |\n");
					printf("| 11. Okami                                              |\n");
					printf("| 12. Quantum Theory                                     |\n");
					printf("| 13. Infamous 2                                         |\n");
					printf("| 14. Call of Duty: Modern Warfare 3                     |\n");
					printf("| 15. Naruto: Ultimate Ninja 5                           |\n");
					printf("| 16. Call of Duty: Black Ops                            |\n");
					printf("| 17. Naruto Shippuden: Ultimate Ninja Storm Revolution  |\n");
					printf("| 18. FIFA Street                                        |\n");
					printf("| 19. Naruto Shippuden: Ultimate Ninja Storm 3           |\n");
					printf("| 20. Pro Evolution Soccer (PES) 201                     |\n");
					printf("| 21. Dragon’s Crown                                     |\n");
					printf("| 22. Football Manager 2018                              |\n");
					printf("| 23. Driver: San Fransisco                              |\n");
					printf("| 24. Pro Evolution Soccer (PES) 2020                    |\n");
					printf("| 25. Dynasty Warriors 8: Empires                        |\n");
					printf("+--------------------------------------------------------+\n");
					printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
				}else if(kode==34){
					printf("Masukkan kode PS yang dirental (31-33): ");
					scanf("%d", &kode);
					if(kode==31){
						
					}else if(kode==32){
						
					}else if(kode==33){
						
					}else{
						printf("Input salah!!");
					}
				}
			}while(pilihan=='b');
			break;
		case 2 :
			system("cls");
			printf("+======================+\n");
			printf("|        KODE PS4      |\n");
			printf("|======================|\n");
			printf("|  41  |   42  |   43  |\n");
			printf("+======================+\n");
			printf("Masukkan kode PS : ");
			scanf("%d", &kode);
			if(kode==41){
				printf("+==================================================+\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("+--------------------------------------------------+\n");
			}else if(kode==42){
				printf("+==================================================+\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("+--------------------------------------------------+\n");
			}else if(kode==43){
				printf("+==================================================+\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("+--------------------------------------------------+\n");
			}
			break;
		case 3 :
			system("cls");
			printf("+======================+\n");
			printf("|        KODE PS5      |\n");
			printf("|======================|\n");
			printf("|  51  |   52  |   53  |\n");
			printf("+======================+\n");
			printf("Masukkan kode PS : ");
			scanf("%d", &kode);
			if(kode==51){
				printf("+==================================================+\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("+--------------------------------------------------+\n");
			}else if(kode==52){
				printf("+==================================================+\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("+--------------------------------------------------+\n");
			}else if(kode==53){
				printf("+==================================================+\n");
				printf("|                   Daftar Game                    |\n");
				printf("|==================================================|\n");
				printf("+--------------------------------------------------+\n");
			}
			break;
	}
}
void timer(){
	
}
void pembayaran(){
	int kode;
	printf("Masukkan kode PS yang dirental (31-33): ");
	scanf("%d", &kode);
	if(kode==31){
		
	}else if(kode==32){
		
	}else if(kode==33){
		
	}else{
		printf("Input salah!!");
	}
}
