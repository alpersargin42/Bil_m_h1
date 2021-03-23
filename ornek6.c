/* C dilinde karakter alma */
#include <stdio.h>
int main()
{ 
	char ad[10], soyad[10];
	int yas;
	/*printf("Adınızı giriniz: ");
	scanf("%s", ad);
	printf("%s", ad); */
	printf("Adınızı, soyadınızı ve yaşınızı giriniz: ");
	scanf("%s %s %d", ad,soyad, &yas);
	printf("Ad: %0.10s \t Soyad: %0.10s \t yas= %d", ad, soyad, yas);
	return 0;
}

/*
Araştırma ödevi:
String ifadelerdeki boşlukla ve karakter uzunluğuyla ilgili bir araştırma=?
*/