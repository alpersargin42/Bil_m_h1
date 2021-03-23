/* Dışarıdan girilen sayılar arasındki 11 e bölünebilen sayıları gösteriniz */

#include<stdio.h>

void goster(int a, int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%11==0)
			printf(" %d ", i);
	}
}

int main()
{
	int sayi1,sayi2, gecici;
	printf("1.sayiyi giriniz: ");scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");scanf("%d",&sayi2);
	if (sayi1>sayi2)
	{/*
		gecici=sayi1;
		sayi1=sayi2; 
		sayi2=gecici; */
		goster(sayi2,sayi1);
	}
	goster(sayi1,sayi2);

	return 0;
} 