/*Girilen yaş değerine göre kişinin ehliyet alıp alamayacağını ekranda gösteren kod bloğu*/
#include <stdio.h>
int main()
{
	int yas;
	printf("yaşınızı giriniz:"); scanf("%d", &yas);
	if(yas>=18)
	{	
        printf("ehliyet alabilir");	
	}
		else
		{
            printf("ehliyet alamaz");
        }
	getch();	
	return 0;
}


/*if (koşul)   //doğruysa
{
	komutlar;
}
else //yanlışsa
{
	komutlar;
}*/