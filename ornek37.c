/* Fonksiyon kullanımı toplama çıkarma */

#include <stdio.h>

//int topla(int a, int b);
int topla(int , int );

int cikarma(int a, int b)
{ return a-b;
}

int main()
{
	int sayi1,sayi2, x;
	printf("1.sayiyi giriniz: ");scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");scanf("%d",&sayi2);
	//printf("%d", topla(sayi1,sayi2));
	x=topla(sayi1,sayi2);
	printf("%d", x);
	printf("\n%d", topla(5,8));
	printf("\n%d",cikarma(9,5));
	return 0;
}

int topla(int a, int b)
{/*
	int sonuc;
	sonuc=a+b;
	return sonuc;
	*/
	return a+b;	
}