#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#define true 1
#define ps3 5000
#define ps4 7000
#define ps5 10000
#define BUFFER 1048

struct regis{
	char nama[15];
	char alamat[20];
	char email[50];
	char username[100];
	char password[100];
} r;
struct pelanggan{
	char nama[30];
	char no_hp[13];
	char alamat[100];
	int tanggal;
	int bayar;
	int kode;
} plg;
struct tambah{
	int kode;
	char nama;
	int tambah_waktu;
} tb;

void admin();
void pelanggan();
void ps();
void pembayaranps3();
void pembayaranps4();
void pembayaranps5();
void tambah_sewa();
void keluar();
void menu2();
int validasi(int *input);


int menu,menu;


int main(){

	printf("============================================\n");
	printf("||      SELAMAT DATANG DI A.R.A PS        ||\n");
	printf("============================================\n");
	printf("|| 1. Masuk sebagai admin                 ||\n");
	printf("|| 2. Masuk sebagai pelanggan             ||\n");
    printf("|| 0. Keluar                              ||\n");
	printf("============================================\n");
    do{
        printf("Masukkan pilihan anda (1/2/0) : ");
        validasi(&menu);
        switch(menu){
            case 1:
                system("cls");
                admin();
                break;
            case 2:
                system("cls");
                pelanggan();
                break;
            case 0:
                system("cls");
                keluar();
	    }
        if(menu<0 || menu>2){
            printf("Input salah !\n");
        }
        fflush(stdin);
    }while(menu<0 || menu>2);
	
}
void admin(){
	char usr[5], pas[8];
	int status = 0, salah = 0;
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
    do{
        printf("Masukkan pilihan anda : ");
        validasi(&menu);
        if(menu<=0 || menu>4){
            printf("Input salah !\n");
        }
        fflush(stdin);
    }while(menu<=0 || menu>4);
	
	if(menu==1){
		
	}else if(menu==2){
		system("cls");
		FILE *reg;
		reg=fopen("Registrasi_pelanggan.txt", "r");
		char buffer[1000];
		while(fgets(buffer, sizeof(buffer), reg)){
			printf("%s\n", buffer);
		}
		fclose(reg);
		system("pause");
		admin();
	}else if(menu==3){
		system("cls");
		ps();
	}else if(menu==4){
		
	}
	system("pause");
}
void pelanggan(){
	char user[100], pass[100];
	int i;
	printf("============================================\n");
	printf("||     SELAMAT DATANG DI MODE PELANGGAN   ||\n");
	printf("============================================\n");
	printf("|| 1. Registrasi                          ||\n");
	printf("|| 2. Login                               ||\n");
    printf("|| 3. Kembali                             ||\n");
    printf("|| 0. Keluar                              ||\n");
	printf("============================================\n");
    do{
        printf("Masukkan pilihan anda : ");
        validasi(&menu);
        if(menu<0 || menu>3){
            printf("Input salah !\n");
        }
        fflush(stdin);
    }while(menu<0 || menu>3);
	
	if(menu==1){
		FILE * reg;
		reg=fopen("Registrasi_pelanggan.txt", "a");
		printf("Masukkan nama anda :");
		scanf(" %s", &r.nama);
		printf("Masukkan alamat anda : ");
		scanf(" %s", &r.alamat);
		printf("Masukkan username anda : ");
		scanf(" %s", &r.username);
		printf("Masukkan password anda : ");
		scanf(" %s", &r.password);
		printf("Akun berhasil dibuat\n");
		printf("Catatan : Username dan Password jangan sampai lupa!!\n");
		fprintf(reg, "============================================\n");
		fprintf(reg, "||           REGISTRASI PENGGUNA          ||\n");
		fprintf(reg, "============================================\n");
		fprintf(reg, "|| Nama     : %-27s ||\n", r.nama);
		fprintf(reg, "|| Alamat   : %-27s ||\n", r.alamat);
		fprintf(reg, "|| Username : %-27s ||\n", r.username);
		fprintf(reg, "|| Password : %-27s ||\n", r.password);
		fprintf(reg, "============================================\n");
		fclose(reg);
		printf("Klik apapun untuk melanjutkan program\n");
		getch();
		pelanggan();
	}if(menu==2){
		FILE *reg;
		reg=fopen("Registrasi_pelanggan.txt", "r");
		printf("Masukkan Username : ");
      	scanf("%s", &user);
		printf("Masukkan Password : ");
      	scanf("%s", &pass);
      	fscanf(reg,"%s",r.username); 
      	fscanf(reg,"%s",r.password); 
		while(fread(&r,sizeof(struct regis),1,reg)){
			if(strcmp(r.username,user)){
				if(strcmp(r.password,pass)){
				i=1;
			}
				if(i==1){
					printf("\nberhasil masuk \n");
					printf("Silakan klik apapun untuk melanjutkan program\n");
					getch();
					menu2();
					exit(0);
				}else{
					printf("\n___________________________________");
					printf("\n data tidak dapat ditemukan");
					printf("\n silahkan registrasi terlebih dahulu");
					getch();
				}
			fclose(reg);
			}
		}
	}
    if(menu==3){
        system("cls");
        main();
    }
    if(menu==0){
        system("cls");
        keluar();
    }
}

void menu2(){
	printf("============================================\n");
	printf("||     ANDA BERADA DI MODE PELANGGAN      ||\n");
	printf("============================================\n");
	printf("|| 1. Lihat Daftar Game                   ||\n");
	printf("|| 2. Rental PS                           ||\n");
    printf("|| 3. Kembali                             ||\n");
    printf("|| 0. Keluar                              ||\n");
	printf("============================================\n");
    do{
        printf("Masukkan pilihan anda : ");
        validasi(&menu);
        if(menu<0 || menu>3){
            printf("Input salah !\n");
        }
        fflush(stdin);
    }while(menu<0 || menu>3);
	
	if(menu==1){
		ps();
	}else if(menu==2){
		printf("+================================+\n");
		printf("|        JENIS PLAYSTATION       |\n");
		printf("|================================|\n");
		printf("|  1. PS3  |  2. PS4  |  3. PS5  |\n");
        printf("|================================|\n");
        printf("|  4. Kembali                    |\n");
        printf("|  0. Keluar                     |\n");
		printf("+================================+\n");
        do{
            printf("Masukkan menu : ");
            validasi(&menu);
            if(menu<0 || menu>4){
                printf("input salah\n");
            }
            fflush(stdin);
        }while(menu<0 || menu>4);
		
		if(menu==1){
			pembayaranps3();
		}else if(menu==2){
			pembayaranps4();
		}else if(menu==3){
			pembayaranps5();
		}
	}

    if(menu==4){
        system("cls");
        pelanggan();
    }
    if(menu==0){
        system("cls");
        keluar();
    }
}
	
void ps(){

	char pilihan, r;
	printf("+================================+\n");
	printf("|        JENIS PLAYSTATION       |\n");
	printf("|================================|\n");
	printf("|  1. PS3  |  2. PS4  |  3. PS5  |\n");
    printf("|================================|\n");
    printf("|  4. Kembali                    |\n");
    printf("|  0. Keluar                     |\n");
	printf("+================================+\n");
    do{
        printf("Masukkan menu : ");
	    validasi(&menu);
        if(menu<0 || menu>4){
            printf("input salah\n");
        }
        fflush(stdin);
    }while(menu<0 || menu>4);
	
	switch(menu){
		case 1 :
			do{
				system("cls");
				printf("+======================+\n");
				printf("|       KODE PS3       |\n");
				printf("|======================|\n");
				printf("|  31  |   32  |   33  |\n");
                printf("|======================|\n");
                printf("|  4. Kembali          |\n");
                printf("|  0. Keluar           |\n");
				printf("+======================+\n");
                do{
                    printf("Masukkan kode  : ");
                    validasi(&menu);
                    if(menu==4){
                        system("cls");
                        ps();
                        break;
                    }
                    if(menu==0){
                        system("cls");
                        keluar();
                        break;
                    }
                    
                    if(menu<31 || menu>33){
                        printf("input salah\n");
                    }
                    fflush(stdin);
                }while(menu<31 || menu>33);
				
				if(menu==31){
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
				}else if(menu==32){
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
				}else if(menu==33){
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
				}
			}while(pilihan=='b');
			break;
		case 2 :
			do{
				system("cls");
				printf("+======================+\n");
				printf("|       KODE PS4       |\n");
				printf("|======================|\n");
				printf("|  41  |   42  |   43  |\n");
                printf("|======================|\n");
                printf("|  4. Kembali          |\n");
                printf("|  0. Keluar           |\n");
				printf("+======================+\n");
                do{
                    printf("Masukkan kode  : ");
                    validasi(&menu);
                    if(menu==4){
                        system("cls");
                        ps();
                        break;
                    }
                    if(menu==0){
                        system("cls");
                        keluar();
                        break;
                    }
                    
                    if(menu<41 || menu>33){
                        printf("input salah\n");
                    }
                    fflush(stdin);
                }while(menu<31 || menu>33);
				
				if(menu==41){
					printf("+==================================================+\n");
					printf("|                   Daftar Game                    |\n");
					printf("|==================================================|\n");
					printf("| 1.  Assassin's Creed Valhalla                    |\n");
					printf("| 2.  Cyberpunk 2077                               |\n");
					printf("| 3.  The Crew® 2                                  |\n");
					printf("| 4.  The Sims™ 4                                  |\n");
					printf("| 5.  EA SPORTS™ FIFA 23 Standard Edition PS4™     |\n");
					printf("| 6.  Resident Evil Village                        |\n");
					printf("| 7.  Horizon Zero Dawn™                           |\n");
					printf("| 8.  The Last of Us™ Remastered                   |\n");
					printf("| 9.  Hello Neighbor                               |\n");
					printf("| 10. Watch Dogs: Legion                           |\n");
					printf("| 11. Dead by Daylight                             |\n");
					printf("| 12. God of War Ragnarök                          |\n");
					printf("| 13. Metro Exodus                                 |\n");
					printf("| 14. Nier: Automata                               |\n");
					printf("| 15. Monster Hunter World                         |\n");
					printf("| 16. Apex Legends                                 |\n");
					printf("| 17. Yakuza 0                                     |\n");
					printf("| 18. Tetris Effect                                |\n");
					printf("| 19. Dreams                                       |\n");
					printf("| 20. Final Fantasy 7 Remake                       |\n");
					printf("| 21. Overwatch                                    |\n");
					printf("| 22. Ratchet & Clank                              |\n");
					printf("| 23. What Remains of Edith Finch                  |\n");
					printf("| 24. Uncharted 4: A Thief's End                   |\n");
					printf("| 25. Metal Gear Solid V: The Phantom Pain         |\n");
					printf("+--------------------------------------------------+\n");
					printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
				}else if(menu==42){
					printf("+==================================================+\n");
					printf("|                   Daftar Game                    |\n");
					printf("|==================================================|\n");
					printf("| 1.  Life is Strange                              |\n");
					printf("| 2.  Danganronpa 1-2 Reload                       |\n");
					printf("| 3.  Ys VIII: Lacrimosa of DANA                   |\n");
					printf("| 4.  Tomb Raider: Definitive Edition              |\n");
					printf("| 5.  DOOM                                         |\n");
					printf("| 6.  428: Shibuya Scramble                        |\n");
					printf("| 7.  Resident Evil 4                              |\n");
					printf("| 8.  Final Fantasy XIV: Heavensward               |\n");
					printf("| 9.  NBA 2K17                                     |\n");
					printf("| 10. Geometry Wars 3: Dimensions                  |\n");
					printf("| 11. Ni no Kuni II: Revenant Kingdom              |\n");
					printf("| 12. Pillars of Eternity: Complete Edition        |\n");
					printf("| 13. Beat Saber                                   |\n");
					printf("| 14. Wipeout: Omega Collection                    |\n");
					printf("| 15. Middle-earth: Shadow of Mordor               |\n");
					printf("| 16. Apex Legends                                 |\n");
					printf("| 17. Pro Evolution Soccer 2016                    |\n");
					printf("| 18. Tetris Effect                                |\n");
					printf("| 19. Dreams                                       |\n");
					printf("| 20. Rogue Legacy                                 |\n");
					printf("| 21. Overwatch                                    |\n");
					printf("| 22. Valkyria Chronicles Remastered               |\n");
					printf("| 23. What Remains of Edith Finch                  |\n");
					printf("| 24. Street Fighter V: Arcade Edition             |\n");
					printf("| 25. Bloodborne: The Old Hunters                  |\n");
					printf("+--------------------------------------------------+\n");
					printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
				}else if(menu==43){
					printf("+==================================================+\n");
					printf("|                   Daftar Game                    |\n");
					printf("|==================================================|\n");
					printf("| 1.  Resident Evil 7: biohazard                   |\n");
					printf("| 2.  Dishonored 2                                 |\n");
					printf("| 3.  Devil May Cry 5                              |\n");
					printf("| 4.  Dark Souls II: Scholar of the First Sin      |\n");
					printf("| 5.  DOOM                                         |\n");
					printf("| 6.  F1 2017                                      |\n");
					printf("| 7.  Resident Evil 4                              |\n");
					printf("| 8.  Wolfenstein II: The New Colossus             |\n");
					printf("| 9.  NBA 2K17                                     |\n");
					printf("| 10. The Outer Worlds                             |\n");
					printf("| 11. Divinity: Original Sin Enhanced Edition      |\n");
					printf("| 12. Pillars of Eternity: Complete Edition        |\n");
					printf("| 13. Horizon Zero Dawn                            |\n");
					printf("| 14. Sekiro: Shadows Die Twice                    |\n");
					printf("| 15. Middle-earth: Shadow of Mordor               |\n");
					printf("| 16. Batman: Arkham Knight                        |\n");
					printf("| 17. Fallout 4                                    |\n");
					printf("| 18. Tetris Effect                                |\n");
					printf("| 19. Nex Machina: Death Machine                   |\n");
					printf("| 20. Rogue Legacy                                 |\n");
					printf("| 21. Dragon Quest XI: Echoes of an Elusive Age    |\n");
					printf("| 22. Rise of the Tomb Raider: 20 Year Celebration |\n");
					printf("| 23. Marvel Spider-Man                            |\n");
					printf("| 24. Guacamelee! Super Turbo Championship Edition |\n");
					printf("| 25. Rayman Legends                               |\n");
					printf("+--------------------------------------------------+\n");
					printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
				}
			}while(pilihan=='b');
			break;
		case 3 :
            do{
                system("cls");
                printf("+======================+\n");
                printf("|        KODE PS5      |\n");
                printf("|======================|\n");
                printf("|  51  |   52  |   53  |\n");
                printf("|======================|\n");
                printf("|  4. Kembali          |\n");
                printf("|  0. Keluar           |\n");
                printf("+======================+\n");
                do{
                    printf("Masukkan kode  : ");
                    validasi(&menu);
                    if(menu==4){
                        system("cls");
                        ps();
                        break;
                    }
                    if(menu==0){
                        system("cls");
                        keluar();
                        break;
                    }
                    
                    if(menu<51 || menu>53){
                        printf("input salah\n");
                    }
                    fflush(stdin);
                }while(menu<31 || menu>33);
                
                if(menu==51){
                    printf("+==================================================+\n");
                    printf("|                   Daftar Game                    |\n");
                    printf("|==================================================|\n");
                    printf("| 1.  Aragami 2                                    |\n");
                    printf("| 2.  Balan Wonderworld                            |\n");
                    printf("| 3.  Chorus                                       |\n");
                    printf("| 4.  Dark Souls II: Scholar of the First Sin      |\n");
                    printf("| 5.  Control                                      |\n");
                    printf("| 6.  Death Loop                                   |\n");
                    printf("| 7.  Dynasty Warriors 9                           |\n");
                    printf("| 8.  Far Cry 6                                    |\n");
                    printf("| 9.  Five Nights at Freddy's: Security Breach     |\n");
                    printf("| 10. Ghostwire Tokyo                              |\n");
                    printf("| 11. Godfall                                      |\n");
                    printf("| 12. Goodbye Volcano High                         |\n");
                    printf("| 13. Graven                                       |\n");
                    printf("| 14. Gran Turismo 7                               |\n");
                    printf("| 15. Immortals: Fenyx Rising                      |\n");
                    printf("| 16. In Sound Mind                                |\n");
                    printf("| 17. Jett: The Far Shore                          |\n");
                    printf("| 18. Marvel's Spider-Man: Miles Morales           |\n");
                    printf("| 19. Metal Hellsinger                             |\n");
                    printf("| 20. Oddworld Soulstorm                           |\n");
                    printf("| 21. Outriders                                    |\n");
                    printf("| 22. Overcooked: All You Can Eat                  |\n");
                    printf("| 23. Project Athia                                |\n");
                    printf("| 24. Planet Coaster                               |\n");
                    printf("| 25. Pragmata                                     |\n");
                    printf("+--------------------------------------------------+\n");
                    printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
                }else if(menu==52){
                    printf("+==================================================+\n");
                    printf("|                   Daftar Game                    |\n");
                    printf("|==================================================|\n");
                    printf("| 1.  Ultimate Fishing Simulator 2                 |\n");
                    printf("| 2.  Balan Wonderworld                            |\n");
                    printf("| 3.  Vampire: The Masquerade - Bloodlines 2       |\n");
                    printf("| 4.  Dark Souls II: Scholar of the First Sin      |\n");
                    printf("| 5.  Warframe                                     |\n");
                    printf("| 6.  Death Loop                                   |\n");
                    printf("| 7.  Dynasty Warriors 9                           |\n");
                    printf("| 8.  Far Cry 6                                    |\n");
                    printf("| 9.  Five Nights at Freddy's: Security Breach     |\n");
                    printf("| 10. Sackboy: A Big Adventure                     |\n");
                    printf("| 11. Recompile                                    |\n");
                    printf("| 12. Planet Coaster                               |\n");
                    printf("| 13. Outriders                                    |\n");
                    printf("| 14. Gran Turismo 7                               |\n");
                    printf("| 15. Mortal Kombat 11 Ultimate                    |\n");
                    printf("| 16. In Sound Mind                                |\n");
                    printf("| 17. Madden NFL 21                                |\n");
                    printf("| 18. Marvel's Spider-Man: Miles Morales           |\n");
                    printf("| 19. Horizon 2 Forbidden West                     |\n");
                    printf("| 20. Oddworld Soulstorm                           |\n");
                    printf("| 21. Outriders                                    |\n");
                    printf("| 22. Overcooked: All You Can Eat                  |\n");
                    printf("| 23. Guilty Gear Strive                           |\n");
                    printf("| 24. Gotham Knights                               |\n");
                    printf("| 25. God of War: Ragnarok                         |\n");
                    printf("+--------------------------------------------------+\n");
                    printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
                }else if(menu==53){
                    printf("+==================================================+\n");
                    printf("|                   Daftar Game                    |\n");
                    printf("|==================================================|\n");
                    printf("| 1.  One Piece Odyssey                            |\n");
                    printf("| 2.  Balan Wonderworld                            |\n");
                    printf("| 3.  Forspoken                                    |\n");
                    printf("| 4.  Dead Space Remake                            |\n");
                    printf("| 5.  Warframe                                     |\n");
                    printf("| 6.  Wild Hearts                                  |\n");
                    printf("| 7.  Dynasty Warriors 9                           |\n");
                    printf("| 8.  Far Cry 6                                    |\n");
                    printf("| 9.  Star Wars Jedi: Survivor                     |\n");
                    printf("| 10. Sackboy: A Big Adventure                     |\n");
                    printf("| 11. Resident Evil 4 Remake                       |\n");
                    printf("| 12. Planet Coaster                               |\n");
                    printf("| 13. Outriders                                    |\n");
                    printf("| 14. Star Trek: Resurgence                        |\n");
                    printf("| 15. Mortal Kombat 11 Ultimate                    |\n");
                    printf("| 16. Suicide Squad: Kill the Justice League       |\n");
                    printf("| 17. Street Fighter 6                             |\n");
                    printf("| 18. Marvel's Spider-Man: Miles Morales           |\n");
                    printf("| 19. Assassin's Creed Mirage                      |\n");
                    printf("| 20. Oddworld Soulstorm                           |\n");
                    printf("| 21. Avatar: Frontiers of Pandora                 |\n");
                    printf("| 22. Rise of the Ronin                            |\n");
                    printf("| 23. Guilty Gear Strive                           |\n");
                    printf("| 24. Lords of the Fallen                          |\n");
                    printf("| 25. God of War: Ragnarok                         |\n");
                    printf("+--------------------------------------------------+\n");
                    printf("Klik b untuk kembali : ");
					scanf(" %c", &pilihan);
                }
            }while(pilihan=='b');
			
			break;
		}
	}
	
void rental(){
	int kode;
	printf("+================================+\n");
	printf("|        JENIS PLAYSTATION       |\n");
	printf("|================================|\n");
	printf("|  1. PS3  |  2. PS4  |  3. PS5  |\n");
    printf("|================================|\n");
    printf("|  4. Kembali                    |\n");
    printf("|  0. Keluar                     |\n");
	printf("+================================+\n");
    do{
        printf("Masukkan pilihan anda : ");
        validasi(&menu);
        if(menu<0 || menu>4){
            printf("Input salah !\n");
        }
        fflush(stdin);
    }while(menu<0 || menu>4);
	
	if(kode==1){
		pembayaranps3();
	}else if(kode==2){
		pembayaranps4();
	}else if(kode==3){
		pembayaranps5();
	}

    if(menu==4){
        system("cls");
        menu2();
    }
    if(menu==0){
        system("cls");
        keluar();
    }
}
void timer(){
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
			tambah_sewa();
		}
	}
}
void pembayaranps3(){
	printf("Masukkan kode ps (31-33) : ");
	scanf("%d", &plg.kode);
	printf("Nama Pelanggan : ");
	scanf(" %[^\n]%*c", &plg.nama);
	printf("Masukkan no_hp : ");
	scanf(" %[^\n]%*c", &plg.no_hp);
	printf("Masukkan alamat : ");
	scanf(" %[^\n]%*c", &plg.alamat);
	printf("Masukkan lama peminjaman (jam) : ");
	scanf("%d", &plg.tanggal);
		if(plg.tanggal==1){
			plg.bayar= ps3 * 1;
		}else{
			plg.bayar = ps3 * plg.tanggal;
		}
	printf("\nKode PS yang di rental : %d", plg.kode);
	printf("\nNama Pelanggan : %s\n", plg.nama);
	printf("Nomor telepon : %s\n", plg.no_hp);
	printf("Alamat : %s\n", plg.alamat);
	printf("Lama peminjaman : %d jam\n", plg.tanggal);
	printf("Total bayar : %d\n", plg.bayar);
	timer();
}
void pembayaranps4(){
	printf("Nama Pelanggan : ");
	scanf(" %[^\n]%*c", &plg.nama);
	printf("Masukkan no_hp : ");
	scanf(" %[^\n]%*c", &plg.no_hp);
	printf("Masukkan alamat : ");
	scanf(" %[^\n]%*c", &plg.alamat);
	printf("Masukkan lama peminjaman (jam) : ");
	scanf("%d", &plg.tanggal);
		if(plg.tanggal==1){
			plg.bayar= ps4 * 1;
		}else{
			plg.bayar = ps4 * plg.tanggal;
		}
	printf("\nNama Pelanggan : %s\n", plg.nama);
	printf("Nomor telepon : %s\n", plg.no_hp);
	printf("Alamat : %s\n", plg.alamat);
	printf("Lama peminjaman : %d jam\n", plg.tanggal);
	printf("Total bayar : %d\n", plg.bayar);
	timer();
}
void pembayaranps5(){
	printf("Nama Pelanggan : ");
	scanf(" %[^\n]%*c", &plg.nama);
	printf("Masukkan no_hp : ");
	scanf(" %[^\n]%*c", &plg.no_hp);
	printf("Masukkan alamat : ");
	scanf(" %[^\n]%*c", &plg.alamat);
	printf("Masukkan lama peminjaman (jam) : ");
	scanf("%d", &plg.tanggal);
		if(plg.tanggal==1){
			plg.bayar= ps5 * 1;
		}else{
			plg.bayar = ps5 * plg.tanggal;
		}
	printf("\nNama Pelanggan : %s\n", plg.nama);
	printf("Nomor telepon : %s\n", plg.no_hp);
	printf("Alamat : %s\n", plg.alamat);
	printf("Lama peminjaman : %d jam\n", plg.tanggal);
	printf("Total bayar : %d\n", plg.bayar);
	timer();
	tambah_sewa();
}
void tambah_sewa(){
	char menu_sewa;
	printf("\nIngin menambah waktu sewa (y/t)? : ");
	scanf(" %c", &menu_sewa);
	if(menu_sewa=='y'){
		printf("Masukkan kode ps : ");
		scanf("%d", &tb.kode);
		printf("Masukkan nama : ");
		scanf(" %[^\n]%*c", &tb.nama);
		printf("Masukkan tambahan waktu (jam) : ");
		scanf("%d", &tb.tambah_waktu);
	}else {
		
	}
}
void keluar(){
	printf("=========================================\n");
	printf("||             A.R.A RENTAL            ||\n");
	printf("=========================================\n");
	printf("||     Terimakasih sudah berkunjung    ||\n");
	printf("||     Semoga harimu menyenangkan :)   ||\n");
	printf("=========================================\n");	
}

int validasi(int *pilih){
    char array[BUFFER];
    char i;

    fflush(stdin);

    while(1){
        if(fgets(array,sizeof(array),stdin)!=NULL){
            if(sscanf(array, "%d %c",pilih, &i)==1){
                return menu;
            }
        }
        
        printf("input yang benar !\n");             
    }

}
