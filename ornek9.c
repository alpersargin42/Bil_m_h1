/* Dışarıdan girilen sayının 50 ile 70 arasında olup olmadığını kontrol ediniz.*/

#include <stdio.h>
int main()
{
	int sayi;
	
	printf("sayıyı giriniz: "); scanf("%d", &sayi);
	
	if (sayi>=50 && sayi<=70 )
		printf("sayi istenen aralıktadir.");
	else
		printf("sayi belirtilen araligin disindadir.");
	
		
	getch();	
	return 0;
}

/*
if (şart1 && şart2) --> and(ve) --> İKİ ŞART AYNI ANDA SAĞLANMALI
if (şart1 || şart2) --> or(ya da) --> İKİ ŞARTTAN EN AZ BİRİ SAĞLANMALI
*/