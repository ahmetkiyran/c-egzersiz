#include<stdio.h>
#include<stdlib.h>

int main()
{
	// en büyük ve en küçük sayýyý bulan kod.
	
	int a,b,c;
	
	printf("ilk sayiyi giriniz: \n");
	scanf("%d",&a);
	
	printf("ikinci sayiyi giriniz: \n");
	scanf("%d",&b);
	
	printf("ucuncu sayiyi giriniz: \n");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
	 printf("en buyuk sayi %d ",&a);	
    }
	else if(b>a && b>c)
	{
	 printf("en buyuk sayi %d",b); 	
    }else if(c>a && c>b)
	{
	printf("en buyuk sayi %d",c); 	
	}
	
	if(a<b && a<c)
	{
	 printf("en kucuk sayi %d",a); 	
	}     
	else if(b<a && b<c)
	{
		printf("en kucuk sayi %d",b); 
	}
	else
	{
		printf("en kucuk sayi %d",c);  
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
