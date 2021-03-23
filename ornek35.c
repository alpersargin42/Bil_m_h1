/* strlen komutu kullanımı ve kelimeyi tersten yazdırma */
#include<stdio.h>
#include<string.h>

int main()
{
	char metin[]="bilgisayar muhendisligi";
	char *ptr, uzunluk,i;
	
	uzunluk=strlen(metin);
	
	//printf("%d", uzunluk);
	ptr=&metin[uzunluk-1]; //metin[22]
	//printf("%c", *ptr);
	
	for(i=0;i<uzunluk;i++)
		printf("%c",*(ptr-i));
	/*
	i=0  sonadres-0  i
	i=1  sonadres-1  g
	i=2  sonadres-2  i
	..
	i=22 sonadres-22  b
	*/
	
		
	/*
	//ptr=metin;
	for(i=0;i<uzunluk;i++)
		printf("%c",*(ptr+i));
		*/
	return 0;
}