/* Dizilerde kullancıdan değer alma */
#include <stdio.h>
int main()
{
	int i, dizi[105];
	for(i=0;i<105;i++)
	{
		dizi[i]= (i*2);	
	}
	
	for(i=0;i<105;i++)
	{
		printf("%d  -  ", dizi[i]);
	}
	
	return 0;
}