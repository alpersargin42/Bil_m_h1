/* Girilen plakaya göre şehirleri bulan fonksiyon tanımlayınız */
#include<stdio.h>
void sehir_bul(int);
int main()
{
	int plaka;
	printf("plakayı giriniz: "); scanf("%d", &plaka);
	sehir_bul(plaka);
	return 0;
} 
void sehir_bul(int x)
{
	if(x==70) printf("Karaman");
	else if(x==42) printf("Konya");
	else if(x==6) printf("Ankara");
	else if(x==53) printf("Rize");
	else printf("Şehir bulunamadı");
}