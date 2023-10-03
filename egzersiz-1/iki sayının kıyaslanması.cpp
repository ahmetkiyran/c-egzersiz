#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	
	printf("ilk sayiyi giriniz: \n");
	scanf("%d",&a);
	
	printf("ikinci sayiyi giriniz: \n");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("%d %d den buyuktur.",a,b); 
	}
	else if(b>a)
	{
	printf("%d %d den buyuktur.",b,a); 	
	}
	else
	{
	printf("sayilar birbirine esittir."); 	
	}   
	
	
	
	
	
	
	
	
	
	
	return 0;
}
