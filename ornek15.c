/*0 ile 10 arasındaki 3 e bölünen sayıları ekrana getiriniz (sadece for döngüsüyle) ---> 3-6-9 */
#include <stdio.h>

int main()
{
	int i;
	/*for(i=0;i<10;i=i+3)	
		printf("%d \n",i);*/
	for(i=1;i<10;i++)
	{
		if(i % 3 == 0)
			printf("%d \n",i);
	}
	return 0;
}