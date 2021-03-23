/* Değer ekleyince adres değişikliği */
#include<stdio.h>
int main()
{
	int *pt, t=22;  //4 byte
	char *pk, k='a'; // 1 byte
	double *pd, d=5.5; // 8 byte
	pt=&t;
	pk=&k;
	pd=&d;
	printf("pt= %p \t pk= %p \t pd= %p", pt, pk, pd);
	pk=pk+10;    pt=pt+5;	pd++;
	printf("\npt= %p \t pk= %p \t pd= %p", pt, pk, pd);
	
	return 0;
}