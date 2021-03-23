/* Harf notu hesaplama */
#include <stdio.h>
#include<conio.h>

int main()
{
	int v, f;
	float ort;
	printf("vize sınavını giriniz: "); scanf("%d", &v);
	printf("final sınavını giriniz: "); scanf("%d", &f);
	// v f 0-100 kontrolü
	if ((v>100 || v<0) || (f>100 || f<0))
		printf("Not araligi disinda deger girdiniz!!!");
	else
		{
		//bütünleme kontrolü
		if(f<40)
			printf("butunlemeye giriniz....");
		else
		{
			ort= v*0.4+f*0.6;
			printf("Ortalamasi= %0.2f \n", ort);
			
			if(ort>=0 && ort<=50)
				printf("Geçme notu= F");
			 if(ort>50 && ort<=60)
				printf("Geçme notu= E");
			 if(ort>60 && ort<=70)
				printf("Geçme notu= D");
			 if(ort>70 && ort<=80)
				printf("Geçme notu= C");
			if(ort>80 && ort<=90)
				printf("Geçme notu= B");
			if(ort>90 && ort<=100)
				printf("Geçme notu= A");
			/*if(ort<=50)
				printf("Geçme notu= F");
			else if(ort<=60)
				printf("Geçme notu= E");
			else if(ort<=70)
				printf("Geçme notu= D");
			else if(ort<=80)
				printf("Geçme notu= C");
			else if(ort<=90)
				printf("Geçme notu= B");
			else
				printf("Geçme notu= A");
				
				*/
		/*	if(ort>=0 && ort<=50)
				printf("Geçme notu= F");
			else if(ort>50 && ort<=60)
				printf("Geçme notu= E");
			else if(ort>60 && ort<=70)
				printf("Geçme notu= D");
			else if(ort>70 && ort<=80)
				printf("Geçme notu= C");
			else if(ort>80 && ort<=90)
				printf("Geçme notu= B");
			else
				printf("Geçme notu= A"); */
		}
		}
	return 0;
}