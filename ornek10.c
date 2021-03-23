/*Bir mağazada müşteirlerine birim fiyatı 5 tl olan bir ürün satışı yapılmaktadır.
En az 20 adet alırsan bu birim fiyat üzerinden %5 indirim yaparım.
20 nin altındaysa birim fiyat aynı

Adet: 10    => toplam fşyat= 10*5 =50

Adet:30     => toplam fiyat= 30*5*0.95 = 142.5
*/
#include <stdio.h>
#include<conio.h>

int main()
{
	const int birim_fiyat=5;
	int adet;
	
	printf("ürün adedini giriniz: "); scanf("%d", &adet);
	if(adet>=20)
		printf("ürüne ödenecek tutar: %.2f", adet*birim_fiyat*0.95);
	else
		printf("ürüne ödenecek tutar: %d", adet*birim_fiyat);	
		
	getch();	
	return 0;
}