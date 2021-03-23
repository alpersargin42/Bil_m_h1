/* Dizilerde kullancıdan değer alma */
#include <stdio.h>
int main()
{
	int i, dizi[5];
	for(i=0;i<5;i++)
	{
		printf("%d. değeri giriniz: \n",i+1); 
		scanf("%d", &dizi[i]);
	}
		
	for(i=0;i<5;i++)
	{
		printf("%d. eleman: %d \n",i+1, dizi[i]); 
	
	}
	
	return 0;
}