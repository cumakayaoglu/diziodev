#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fonk(int vize[],int final[]){
	
	float ortalama[5];
	for(int i=0;i<5;i++)
	{
		ortalama[i]=(vize[i]+final[i])/2;
		
		printf("vize:%d final:%d ortalama:%f\n",vize[i],final[i],ortalama[i]);
	}
	
}
int main() {
	int vize[5];
	int final[5];
	int k,i;
	for(i=0;i<5;i++)
	{
		printf("vize notu gir:");
		scanf("%d",&vize[i]);
	}
	for(k=0;k<5;k++)
	{
		printf("final notu gir:");
		scanf("%d",&final[k]);
	}
	fonk(vize,final);
		
	
	return 0;
}