/* Switch-case kullanımı */
#include <stdio.h>

int main()
{
    char kr;
    printf("Bir karakter giriniz:");
    scanf("%c",&kr);

    switch (kr)
    {
    case('a'):
        printf("A ya basıldı.");
        break;
    
    default:
        printf("Tanımlanmayan karakter.");
        break;
    }
    return 0;
}
