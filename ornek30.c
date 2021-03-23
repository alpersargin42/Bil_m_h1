/* Pointerlar */
#include<stdio.h>
int main()
{
	int a;
	int *p;  //veritipi *degiskenadi;
	a=10;
	p=&a;  //adres işaret eder
	printf("\n a nın degeri= %d", a);
	printf("\n a nın adresi= %p", &a);
	printf("\n p nin degeri= %d", *p); //* içerik gösterir
	return 0;
}