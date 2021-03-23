/* Pointerlar ve dizilerin birlikte kullanımı ve adresleri */
#include<stdio.h>
int main()
{
	int dizi[5]={15,20,25,30,35};
	int i, *p;
	p=&dizi;
	//p=&dizi[0];
	printf("adres= %p", p);
	for(i=0;i<5;i++)
//		printf("\n%d. eleman= %d", i+1, dizi[i]);
		printf("\n%d. eleman= %d  -  %p", i+1, *(p+i), p+i);	
	
	/*for(i=0;i<5;i++)
	{
		printf(" %d ", dizi[i]);
	}*/
	return 0;
}