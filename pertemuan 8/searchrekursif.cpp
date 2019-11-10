#include <stdio.h>
#include <stdlib.h>

int carir(int cari, int ketemu, int awal, int akhir){
	int arr[9]={3,9,11,12,15,17,23,31,35};
	int tengah;
//	if (ketemu==1){
//		tengah=(awal+akhir)/2;
//		ketemu=carir(cari, ketemu, awal, akhir, tengah);
//		return ketemu;
//	}
//	else{
//		tengah = (awal+akhir)/2;
//		printf("\nAwal=%d Tengah=%d Akhir=%d",awal,tengah,akhir);
//		if	(arr[tengah]==cari){
//			printf("\nADA");ketemu=1;
//		}
//		else if (awal>=akhir){
//			printf("\nTIDAK ADA");ketemu=1;
//		}
//		else if	(arr[tengah]<cari){
//			awal = tengah+1;
//		}
//		else if	(arr[tengah]>cari){
//			akhir = tengah-1;
//		}
//		return ketemu;
//	}
	tengah = (awal+akhir)/2;
	printf("\nAwal=%d Tengah=%d Akhir=%d",awal,tengah,akhir);
	if	(arr[tengah]==cari){
		printf("\nADA");ketemu=1;
	}
	else if (awal>=akhir){
		printf("\nTIDAK ADA");ketemu=1;
	}
	else if	(arr[tengah]<cari){
		awal = tengah+1;
	}
	else if	(arr[tengah]>cari){
		akhir = tengah-1;
	}
	if (ketemu==1){
		return ketemu;
	}
	else{
		tengah=(awal+akhir)/2;
		ketemu=carir(cari, ketemu, awal, akhir);
		return ketemu;
	}
}

int main(){
	int a, b=0, c=0, d=8, hasil;
	int e=(c+d)/2;
	printf("\nMasukkan Angka Yang Ingin Dicari = ");scanf("%d",& a);
	
	hasil = carir(a,0,c,d);
//	if (hasil==1){
//		printf("\nKETEMU");
//	}
//	else if (hasil==0){
//		printf("\nTIDAK KETEMU");
//	}
	return 0;
}
