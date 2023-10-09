#include<stdio.h>
#include<stdlib.h>

int main()
{
	float t,p;
	
	printf("kac dakika konustunuz: \n");
	scanf("%f",&t);
	
	p=0.25+(t-3)*0.08;
	  
	if(t<=3)
	{
		printf("toplam tutar: 0.25tl"); 
	}
	else
	{
		printf("toplam tutar: %f",p);
	}
	
	
	
	
	
	
	
	return 0;
}
