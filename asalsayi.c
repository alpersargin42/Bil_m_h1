/* Asal sayı yazdırma */
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for ( i = 2; i < 100; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        printf("Asal sayi %d\n",i);     
    }
    
    return 0;
}
