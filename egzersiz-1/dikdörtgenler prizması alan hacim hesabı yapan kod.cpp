#include<stdio.h>
#include<stdlib.h>

int main()
{
	// dikdörtgenler prizmasýnýn alan ve hacmini hesaplayan kod.
	
	int a,b,h;
	int alan,hacim;
	
	printf("prizmanin 1. kenarini giriniz: \n");
	scanf("%d",&a);  
	
	printf("prizmanin 2. kenarini giriniz: \n");
	scanf("%d",&b);
	
	printf("prizmanin yukseklik degerini giriniz: \n");
	scanf("%d",&h);
	
	alan=(2*a*b)+(2*h*a)+(2*b*h);
	hacim=a*b*h;
	
	printf("hacim= %d\n",hacim);
	printf("alan= %d\n",alan);    
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
