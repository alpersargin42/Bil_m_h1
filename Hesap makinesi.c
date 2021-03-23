#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Turkish");
	int sayi1,sayi2;
	float sonuc=0;
	char islem='x';
	
	printf("1.sayiyi giriniz=\n");
	
	scanf("%d",&sayi1);
	
	printf("Isleminizi giriniz=\n");
	
	scanf(" %c",&islem);
	
	printf("2.sayiyi giriniz=\n");
	
	scanf("%d",&sayi2);
		
		switch (islem)
	{
		case '+':
		sonuc=sayi1+sayi2;
		  break;
		
		case '-':
		sonuc=sayi1-sayi2;
		  break;
		  
		case '*':
		sonuc=sayi1*sayi2;
		  break;
			
		case '%':
		sonuc=sayi1%sayi2;
		  break;
		  
		case '/':
		sonuc=sayi1/sayi2;
		  break;
	}
	printf("Sonuc= %0.2f",sonuc);
	return 0;
	getch();
	

}
