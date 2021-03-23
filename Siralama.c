/*Küçükten büyüğe sıralama.*/

#include<conio.h>
#include<stdio.h>

int main()
{
    int sayi1,sayi2,sayi3;
    printf("<Sayi 1> <Sayi2> <Sayi3> : ");scanf("%d %d %d",&sayi1,&sayi2,&sayi3);

    //sayı1 en küçük ise
    if (sayi1 < sayi3 && sayi1 < sayi2)
    {
        if (sayi2 < sayi3)
        {
            printf("%d %d %d", sayi1, sayi2, sayi3);
        }
        else
        {
            printf("%d %d %d", sayi1, sayi3, sayi2);
        }
        
    }

    //sayı2 en küçük ise
    else if (sayi2 < sayi1 && sayi2 < sayi3)
    {
        if (sayi1 < sayi3)
        {
            printf("%d %d %d", sayi2, sayi1, sayi3);
        }
        else
        {
            printf("%d %d %d", sayi2, sayi3, sayi1);
        }
        
    }

    //sayı3 en küçük ise
    
    else
    {
        if (sayi1 < sayi2)
        {
            printf("%d %d %d", sayi3, sayi1, sayi2);
        }
        else
        {
           printf("%d %d %d", sayi3, sayi2, sayi1);
        }
        
    }
    
   
    
    return 0;
}
