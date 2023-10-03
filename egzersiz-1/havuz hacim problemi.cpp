#include<stdio.h>
#include<stdlib.h>

int main()
{
	float en,boy,h,hacim;
	
	printf("havuzun enini metre cinsinden giriniz: \n");
	scanf("%f",&en);  
	
	printf("havuzun boyunu metre cinsinden giriniz: \n");
	scanf("%f",&boy);
	
	printf("havuzun yuksekligini metre cinsinden giriniz: \n");
	scanf("%f",&h);
	
	hacim=en*boy*h;
	
	printf("havuzun tam dolu konuma ulasmasi icin %.2f metrekup su gereklidir.",hacim);
	
	
	
	
	return 0;
}
