#include<stdlib.h>
#include<stdio.h>

int main()
{
	int n;
	
	printf("bir sayi giriniz: \n");
	scanf("%d",&n);
	
	if(n%13==0 && n%17==0)
	{
	printf("sayiniz 13 ve 17 ye tam bolunur."); 	
	}
	else if(n%13==0 && n%17!=0)
	{
	 printf("sayiniz sadece 13 e tam bolunur."); 	
	}
	else if(n%13!=0 && n%17==0)
	{
	 printf("sayiniz sadece 17 ye tam bolunur.");	
	}  
	else
	{
		printf("sayiniz 13 ve 17 ye tam bolunmez."); 
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
