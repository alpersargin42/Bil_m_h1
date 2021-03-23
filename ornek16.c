/* i-- ve --i nin farkı (aynı do while deki gibi) */

#include <stdio.h>

int main()
{
	int i;
	printf("i-- \n");
	for(i=10;i>0;i--)
		printf("%d  -  ",i);
	printf("\n----------------------------------\n");
	printf("\n--i \n");	
	for(i=10;i>0;--i)
		printf("%d  -  ",i);
	/*
	*
	* ÇIKTI OLARAK ARADA BİR FARK YOK FAKAT ÇALIŞMA PRENSİBİ OLARAK DO ve WHİLE DÖNGÜSÜ GİBİ ÇALIŞIR.
	*/
		
	i=5;
	printf("\n i   => %d", i);	
	printf("\n i-- => %d", i--);	
	printf("\n i   => %d", i);	
	printf("\n ---------------------------------\n");
	i=5;
	printf("\n i   => %d", i);
	printf("\n --i => %d", --i);	
	printf("\n i   => %d", i);	
	return 0;
}