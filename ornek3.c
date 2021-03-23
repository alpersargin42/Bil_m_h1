/* %0.2f kullanımı (Virgülden sonra 2 karakter gösterir)*/
#include <stdio.h>
int main()
{
	int sayi= 10;
	float pi= 3.14;
	
    /*
	printf("SAYI= %d \n", sayi);  //SAYI= 10
	printf("pi= %0.2f", pi);
	*/
	printf("Sayi= %d \t pi= %0.2f", sayi, pi);
	
	return 0;
}