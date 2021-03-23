//Overloading fonksiyonlar
#include<stdio.h>
int kare(int x) { return x*x; }
float kare(float x) { return x*x; }

int main()
{
	int a=3,c;
	float b=4.4;
	printf("%d",  kare(a));		
	printf("\n %f",  kare(b));		
	printf("\n deger gir: "); scanf("%d", &c);
	printf("\n %d",  kare(c));
//	printf("\n%f",  kare((3.2)));		
		
	return 0;
} 