/* Hesap makinesi */

#include <stdio.h>

int main()
{
	int secim;
	float x,y,sonuc;
	printf("1. ve 2. sayiyi giriniz: "); scanf("%f %f", &x, &y);
	printf("***** MENÜ ***** \n");	
	printf("[1] Toplama \n");
	printf("[2] Çıkarma \n");
	printf("[3] Çarpma \n");
	printf("[4] Bolme \n");
	printf("Seçiminiz:"); scanf("%d", &secim);
	switch(secim){
		case 1:
			sonuc=x+y; printf("Sonuc= %0.2f", sonuc); break;
		case 2:
			sonuc=x-y; printf("Sonuc= %0.2f", sonuc); break;
		case 3:
			sonuc=x*y; printf("Sonuc= %0.2f", sonuc); break;	
		case 4:
			sonuc=x/y; printf("Sonuc= %0.2f", sonuc); break;
		default:
			printf("yanlis secim");	
	}	
	return 0;
}