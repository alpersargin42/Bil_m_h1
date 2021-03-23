/*do while ve while kullanımı */
#include <stdio.h>
int main()
{
	int i=0;
	do{
		printf("%d ", i);
		i++;
	}while(i<=10);

	printf("\n ----------------- \n");
	
	i=0;
	while(i<=10)
	{
		printf("%d ", i);
		i++;
	}
	

	return 0;
}
/*

do
{
	//komutlar
}while(şart);

while(şart)
{
	komutlar
}

*/