/* Do while ile vize notunun 0 ve 100 arasında girilme şartını sağlayan program. */
#include <stdio.h>
int main()
{
	int vize;

	do{
	
		printf("vize notunu giriniz: ");
		scanf("%d", &vize);
			
	}while( vize<0 || vize>=100 );
    printf("Vize notunuz ----> %d",vize);
	return 0;
}