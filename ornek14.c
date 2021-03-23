/* For döngüsü */

#include <stdio.h>

int main()
{
	int i;
	//for(başlangıç; bitiş; artış)
	for(i=1; i<=5; i++) //i++ => i=i+1
		printf("%d bilgisayar \n",i);
	for(i=10; i<=15; i=i+2)
		printf("%d  \n",i);
	for(i=5; i>=0; i--) // i--   => i=i-1
		printf("%d \n", i);
	return 0;
}