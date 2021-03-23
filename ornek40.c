//Overloading fonksiyonlar
#include<stdio.h>
int kare(int x) { return x*x; }
float kare(float x) { return x*x; }

int main()
{
	int a=3;
	float b=4.4;
	printf("%d",  kare(a));		
	printf("\n%f",  kare(b));		
	return 0;
} 