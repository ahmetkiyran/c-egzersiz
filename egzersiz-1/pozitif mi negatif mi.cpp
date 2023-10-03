#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int x,y;
	
	printf("bir sayi giriniz:\n");
	scanf("%d",&x);
	
	printf("bir sayi giriniz:\n");
	scanf("%d",&y);
	
	if(x==0 || y==0)
	{
	 printf("islem sonucu 0"); 	
	}    
	else if(x>0 && y<0 )
	{
		printf("islem sonucu negatiftir."); 
	}
	else if( x<0 && y>0)
	{
		printf("islem sonucu negatiftir."); 
	}
	else
	{
		printf("islem sonucu pozitiftir"); 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
