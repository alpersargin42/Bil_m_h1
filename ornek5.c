/* Dışarıdan alınan 2 sayıyı toplayarak ekranda gösteren uygulama */
#include <stdio.h>
int main()
{
	int a,b, sonuc;
	/*
    printf("1.sayiyi giriniz: "); scanf("%d",&a);
	printf("2.sayiyi giriniz: "); scanf("%d",&b);
	printf("Toplam sonucu= %d", a+b);
    */
	printf("a ve b sayilarinı giriniz: ");
	scanf("%d %d", &a, &b); //araya enter veya boşluk
	scanf("%d%d", &a, &b); //araya enter
	scanf("%d-%d", &a, &b);//araya -
	sonuc=a+b;
	printf("Toplam sonucu= %d", sonuc);
	return 0;
}