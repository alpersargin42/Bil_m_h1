/*Dışarıdan girilen sayının tek veya çift olduğunu bulan program.*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int sayi;
	printf("sayi giriniz :"); scanf("%d", &sayi);
	
	if( sayi%2 != 0 )     
		printf("sayi tek");   
	else
		printf("sayi çift");   
    
    /*
    ---------------------YA DA -------------------
    if( sayi%2 == 0)
		printf("sayi çift");
	else
		printf("sayi tek");*/
		
	//(şart)? şart_doğruysa : şart_yanlışsa;
	
			
	getchar();	
	return 0;
}
/*
20 mod 2 = kalan => 0 çift
kalan=1 =>tek

== eşittir
!= eşit değil 
> büyüktür
>= büyük eşittir
< küçüktür
<= küçük eşittir
*/