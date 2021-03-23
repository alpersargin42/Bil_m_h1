/* Fonksiyon kullanımı */
#include<stdio.h>
int hesapla1(int a, int b){ return a+b;}
int hesapla2(int a, int b, int c){ return ((a+b)*c-4);}
int main()
{
	int x= 3,y= 5,z =10;
	printf("%d", hesapla1(x,y) );	
	printf("\n%d", hesapla2(x,y,z) );	
	return 0;
} 