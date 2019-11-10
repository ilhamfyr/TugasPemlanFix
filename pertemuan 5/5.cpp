#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct mahasiswa{
	char nama[20];
	int sks[10];
	float nilai[5];
};
typedef struct mahasiswa mhss;
int main(int argc, char *argv[]){
	
	mhss mhs[10];
	char matkul[5][25] = {"KWU","Pemrograman lanjutan","Bela Negara","Metoda Numerik","Statistik Komputasi"};
	
	int i, j, loop = 0, loop2 = 0, pilihan;
	float ips;
		while (loop == 0) {
		system("cls");
	printf("===================================\n");
	printf("============Data Mahasiswa=========\n");
	printf("===================================\n\n");
		printf("1. Input Nama Mahasiswa\n");
		printf("2. Tampilkan nilai\n");
		printf("3. Keluar\n");
		printf("\n\nInput : ");
		scanf("%d", &pilihan);
		fflush(stdin);
		printf("\n");
		
		switch(pilihan){
			case 1:
				if (loop2 < 10) {
					printf("Masukkan nama Mahasiswa: ");
					gets(mhs[loop2].nama);
					for (i=0; i<5; i++) {
						mhs[loop2].nilai[i] = rand() % 3 + 2;
					}
					loop2++;	
					} else {
					printf("Memori penuh");
				}
				break;
			case 2:
				for (i=0; i<loop2; i++) {
					ips = 0;
					printf("Nilai %s:\n", mhs[i].nama);
					for (j=0; j<5; j++) {
						printf("- %s = %.2f\n", matkul[j], mhs[i].nilai[j]);
						ips = ips + (mhs[i].nilai[j] * 3);
					}
					ips = ips / 21;
					printf("IPS : %.2f\n", ips);
					printf("\n");
				}
				system("pause");
				break;
			case 3:
				loop = 1;
				break;
			default:
				printf("Masukkan dengan benar");
				break;
}}}
