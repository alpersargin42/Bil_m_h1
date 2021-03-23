/* Pointerlar ve Fonksiyon kullanımı*/
#include<stdio.h>

void yerdegistir(int *x, int *y, int *kalan)
{
	int gecici;
	*kalan = *x % *y;
	gecici= *x;
	*x=*y;
	*y=gecici; 
}

int main()
{
	int x=70, y=30, kalan=0;
	
	printf("x=%d y=%d kalan=%d", x,y,kalan);
	
	yerdegistir(&x, &y, &kalan);
	
	printf("\nx=%d y=%d kalan=%d", x,y,kalan);	
		
	return 0;
} 