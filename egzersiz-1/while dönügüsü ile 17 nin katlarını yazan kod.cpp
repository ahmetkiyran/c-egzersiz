#include<stdio.h>
#include<stdlib.h>

int main()
{
 // while d�ng�s� ile 17 nin katlar�n� yazan kod.
 
 int limit,i;
 int satir;
 printf("lutfen bir limit degeri giriniz: \n");
 scanf("%d",&limit);
 
 i=0;
 satir=0;
 while(i<=limit)
 {
 	if(i%17==0)
 	{
 		printf("%5d",i);
 		satir++;
 		if(satir%10==0)
 		{
 			printf("\n"); 
		 }
	}
	i++;
 }  
	
	
	
	
	
	
	
}
