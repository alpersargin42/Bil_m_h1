/* Ekrana bir şey yazdırma ve kullanıcıdan bir şey alma  */
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    char isim;
    printf("Hello World \n");
    printf("Isminizi Giriniz:");scanf("%c",isim);
    return 0;
}
