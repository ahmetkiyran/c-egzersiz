#include<stdio.h>
#include<stdlib.h>

int main()
{
	float km,mil;
	
	printf("araba ile kac mil yol gittiginizi yaziniz: \n");
	scanf("%f",&mil);
	
	 km=mil*1609;
	
	printf("gittiginiz yolun km cinsinden degeri: %.2f",km); 
	
	
	
	
	
	
	
	return 0;
}
