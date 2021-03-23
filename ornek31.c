/* Pointerlar ile işlemler */
#include<stdio.h>
int main()
{
	int vize=0, final=0, *v, *f;
	
	printf("vize ve final notunu giriniz: ");
	scanf("%d %d", &vize, &final);
	v=&vize;
	f=&final;
	printf("ortalama = %0.2f", ( *v * 0.4) +( *f * 0.6));
	printf("\n ortalama = %0.2f", ( vize * 0.4) +( final * 0.6));
	return 0;
}