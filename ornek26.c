/*İç içe döngüler*/

#include <stdio.h>
int main()
{
	int i,j;
	/*
	for(i=0;i<5;i++)
		printf("%d ",i);
	*/
	int sayac=0;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<3;j++)    //i=0  j=0,1,2 
		{	                //i=1  j=0,1,2
			printf("(i=%d j=%d) \n",i, j);
			
		}
		printf("\n");
	}
	
	return 0;	
}
