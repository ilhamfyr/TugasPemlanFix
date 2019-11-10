#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct nasabah{
	int norek;
	char bank[20];
	char nama[30];

	char alamat[50];	
	int saldo;

};

struct alamat{
	char jalan [20];
	char kota [30];
	char provinsi [30];
};

struct ttl{
	int tanggal;
	int bulan;
	int tahun;
	int umur;
};


  struct nasabah n1[100];
  struct alamat a1[100];
  struct ttl t1[100];
int main (void){
	int pilihan ;
	int tahun = 2019;
	int i ;
	int u;
	int n;
	int x;
	int s;
	int total=0;
	int max;
	int min;
	char k [50];
	bool found;
	int loop;
	printf("======================\n");
	printf("masukan jumlah nasabah: ");
	scanf("%d",&n); 

	

		for(i=0; i<n; i++){
		    printf ("\n\n+++++DATA NASABAH+++++\n\n");
			printf("Nama Bank : \n");
			scanf("%s",n1[i].bank);
			printf("no rekening : \n");
			scanf("%d",&n1[i].norek);
			printf("Nama Nasabah : \n");
			scanf("%s",n1[i].nama);
			printf("Tanggal lahir :\n");
			scanf("%d",&t1[i].tanggal);
			printf("bulan : \n");
			scanf("%d",&t1[i].bulan);
			printf("Tahun : \n");
			scanf("%d",&t1[i].tahun);
				t1[i].umur = tahun -t1[i].tahun ;
			printf("Alamat : \n");
			scanf("%s",a1[i].jalan);
			printf("kota : \n");
			scanf("%s",a1[i].kota);
			printf("provinsi : \n");
			scanf("%s",a1[i].provinsi);
			printf("Saldo Saat ini : \n");
			scanf("%d",&n1[i].saldo);
			max=n1[i].saldo;
   			min=n1[i].saldo;
			system("cls");
}
	while (loop==1){
        printf ("\n\n+++++DATA NASABAH+++++\n\n");
		printf("1.tampilkan semua data \n");
		printf("2.tampilkan data ber norek : \n");
		printf("3.tampilkan data berkota di : \n");
		printf("4.tampilkan data ber umur : \n");
		printf("5.tampilkan total saldo : \n");
		printf("6.tampilkan saldo terendah dan teritinggi : \n");
		scanf("%d",&pilihan);
		switch(pilihan){
			case  1:{
				
				for(int i=0; i<n; i++){
						 printf ("\n\n+++++DATA NASABAH+++++\n\n");
						 printf("BANK : %s \n",n1[i].bank);
						 printf("No Rekening : %d\n",n1[i].norek);
						 printf("Nama Nasabah : %s\n",n1[i].nama);
						 printf("Tanggal Lahir : %d-%d-%d\n",t1[i].tanggal,t1[i].bulan,t1[i].tahun);
						 printf("Alamat %s kota %s provinsi %s\n",a1[i].jalan,a1[i].kota,a1[i].provinsi);
						 printf("Saldo Saat Ini : %d\n",n1[i].saldo);
					}
						 	break;}
			
			case 2 : {
			
			printf("\n cari data berdasarkan norek : \n");
			 scanf("%d",&x);
			
			 for(i=0;i<n;i++) {
			 	
			 found=false;
			 while(i<n && !found){
				if(n1[i].norek==x){
				found=true;	}
					else{
						i=i+1;	}	}
				if(n1[i].norek==x && found){
						 printf ("\n\ntampilkan nasabah \n\n");
						 printf("BANK : %s \n",n1[i].bank);
						 printf("No Rekening : %d\n",n1[i].norek);
						 printf("Nama Nasabah : %s\n",n1[i].nama);
						 printf("Tanggal Lahir : %d-%d-%d\n",t1[i].tanggal,t1[i].bulan,t1[i].tahun);
						 printf("Alamat %s kota %s provinsi %s\n",a1[i].jalan,a1[i].kota,a1[i].provinsi);
						 printf("Saldo Saat Ini : %d\n",n1[i].saldo);
				}}
				break;
		}
				
		
			
					
				

			
			case 3	:{
				
			printf("Masukkan input kota : ");
			scanf("%s",&k);
		
			for(i=0;i<n;i++){
				if(strcmp(a1[i].kota,k)==0){
					printf("Nasabah %s ada pada kota %s\n",n1[i].nama,k);
				}
				}
		
			  break;
		      default:
		     	printf("tidak ditemukan \n");
						break;
						}
			
			case 4:				
		{
			printf("Masukkan Range Umur :");
			scanf("%d",&u);
			for(i=0;i<n;i++){
				if(t1[i].umur<u){
					printf("Nama %s umur kurang dari %d\n",n1[i].nama,u);
				}else {
					printf("Nama %s umur lebih dari %d\n",n1[i].nama,u);
				}}
				break;
			
			
		}
		
			case 5:
						{
			for(i=0;i<n;i++){
				total = total + n1[i].saldo;
			}
			printf("Total Saldo 	: %d",total);
		}
			break;
		
			case 6:
{
for (i=0;i<n;i++){
if(n1[i].saldo>max)
max=n1[i].saldo;
if(n1[i].saldo<min)
min=n1[i].saldo;

}
printf("\n Saldo Tertinggi adalah : %d\n",max);
printf("\n Saldo Terendah adalah : %d\n",min);
getch();
	break;
}
		
}
		


	printf("\nCARI INFORMASI LAIN ? (1. Ya/2. Tidak)");
		scanf("%d",&loop);
		system("cls");}}
		
	
		
		
	
	


	



