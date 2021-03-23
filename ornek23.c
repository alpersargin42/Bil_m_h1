/* Dizilerde çalışmalar. */

#include <stdio.h>
int main()
{
	/*int dizi[5];
	dizi[0]=4;
	dizi[1]=10;
	dizi[2]=14;
	dizi[3]=20;
	dizi[4]=8;*/
	int dizi[5]={4,10,14,20,8};
	          // 0 1  2  3 4
	int i;
	
	printf("%d \n", dizi[2]);
	for(i=0;i<5;i++)
		printf("%d ", dizi[i]);
	return 0;
}