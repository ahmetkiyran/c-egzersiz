#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int n;
	int i;
	float sonuc;
	
	do
	{
		printf("n kac olsun\n");
		scanf("%d",&n);  
	}while(n<1);
	
	for(i=1;i<=n;i++)
    {
    	sonuc+=(float)1/i;
	}	
	
	printf("sonuc: %f",sonuc);
	
	return 0;
}
