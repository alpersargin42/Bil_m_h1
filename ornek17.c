//2 hariç 0-10 arasındaki sayıları ekrana yazdırınız.
// continue ve break kullanımı
#include <stdio.h>

int main()
{
	int i;
	for(i=0; i<=10 ;i++)
	{
		if (i == 2)
			continue;
		printf(" %d ",i);
	}
	printf("\n");
	
	
	for(i=0; i<=10 ;i++)
	{
		if (i == 2)
			break;
		printf(" %d ",i);
	}
	
	return 0;
}