#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fonk(int dizi[],int deger)
{
	for(int i=0;i<5;i++)
	{
		if(dizi[i]>deger)
		{
			printf("%d\n",dizi[i]);
		}
	}
	return 0;
}



int main() {
	int dizi[5];
	int deger;
	int k;
	for(int i=0;i<5;i++)
	{
		printf("dizi degerleri gir:");
		scanf("%d",&dizi[i]);
	}
	printf("deger girin:");
	scanf("%d",&deger);
	
	k=fonk(dizi,deger);
	printf("%d",k);
	
	
	
	return 0;
}