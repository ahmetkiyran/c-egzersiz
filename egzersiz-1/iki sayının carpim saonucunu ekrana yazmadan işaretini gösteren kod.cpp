#include<stdio.h>
#include<stdlib.h>


int main()
{
	// girilen iki say�n�n �arp�lmadan i�aretinin belirlenmesini sa�layan kod.
    int a,b;
	printf("ilk sayiyi giriniz: \n");
	scanf("%d",&a);
	
	printf("ikinci sayiyi giriniz: \n");
	scanf("%d",&b);
	
	if(a>0 && b>0)
	{
	 printf("%d * %d carpiminin isareti +",a,b);	
	}  
	else if(a<0 && b>0)
	{
		printf("%d * %d carpiminin isareti -",a,b);
	}
		else if(a>0 && b<0)
	{
		printf("%d * %d carpiminin isareti -",a,b);
	}
	else if(a==0 || b==0)
	{
		printf("%d * %d carpiminin sonucu 0",a,b);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}
