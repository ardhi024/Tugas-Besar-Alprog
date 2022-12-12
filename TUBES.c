#include <stdio.h>
#include <stdlib.h>
int main(){
	int menu, kode;
	char pilihan, r;
	printf("\t\t======================================================================\t\t\n");
	printf(" \t                            SELAMAT DATANG DI RENTAL PS KAMI                      \n");
	printf("\t\t======================================================================\t\t\n\n");
	printf("+================================+\n");
	printf("|        JENIS PLAYSTATION       |\n");
	printf("|================================|\n");
	printf("|  1. PS3  |  2. PS4  |  3. PS5  |\n");
	printf("+================================+\n");
	printf("Masukkan jenis PS yang ingin dirental : ");
	scanf(" %d", &menu);
	switch(menu){
		case 1 :
			do{
				system("cls");
				printf("+======================+\n");
				printf("|        KODE PS3      |\n");
				printf("|======================|\n");
				printf("|  31  |   32  |   33  |\n");
				printf("+======================+\n");
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
					printf("Kembali ke awal atau lanjut (n/b) : ");
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
					printf("Kembali ke awal atau lanjut (n/b) : ");
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
					printf("Kembali ke awal atau lanjut (n/b) : ");
					scanf(" %c", &pilihan);
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
	return 0;
}
