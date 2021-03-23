/* Fonksiyon ilk örnek */
#include <stdio.h>


int topla(int a, int b)
{/*
	int sonuc;
	sonuc=a+b;
	return sonuc;
	*/
	return a+b;	
}


int main()
{
	int sayi1,sayi2, x;
	printf("1.sayiyi giriniz: ");scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");scanf("%d",&sayi2);
	//printf("%d", topla(sayi1,sayi2));
	x=topla(sayi1,sayi2);
	printf("%d", x);
	// printf("\n%d", topla(5,8));
	return 0;
}