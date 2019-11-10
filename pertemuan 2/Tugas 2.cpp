#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int  pangkat (int a, int b){
	if (b == 1){
		return a;
	}
	else { 
	return a*pangkat(a,(b-1));
	}
}
 main (){
 	int a;
 	int b;
 	int hasil = 1;
 	int i = 1;
 	
 	int pilihan;
 	
while (pilihan);
 	printf ("gunakan cara :\n");
 	printf ("1.rekursif\n");
 	printf ("2.ikursif\n");
 	scanf("%d",&pilihan);
 	switch(pilihan){
 		case 1 :
 				system("CLS");
 				printf("masukan angka yang dipangkat kan : ");
 				scanf("%d",&a);
 				printf("masukan pangkat : ");
 				scanf("%d",&b);
 				printf("hasil dari rekursif : %d\n",pangkat(a,b));
 					break;
 					
 		case 2 :
 				system("CLS");
 				printf("masukan angka yang dipangkat kan : ");
 				scanf("%d",&a);
 				printf("masukan pangkat : ");
 				scanf("%d",&b);
				printf("hasil dari rekursif : %d\n",pangkat(a,b));
 					for(i=0;i<a;i++){
						hasil=hasil*b;
						break;
		}
		
		

	
	
	return 0;
 }}
