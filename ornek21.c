/* While döngüsü ASCII kodları ekrana yazdırma */

#include <stdio.h>
int main()
{
	int i=0;
	while(i<256)
	{
		printf("%d  -  %c\n",i,i);
		i++;
	}
	
	
	return 0;
}