#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,f1,f2,f3;
	char kod;
	printf("hali tipi kodlari : Twetty icin T, Bugs icin B, Spiderman icin S dir\n");
	
	printf("lutfen hali tipi kodunuzu yaziniz: \n");
	scanf("%c",&kod); 
	
	printf("lutfen halinizin metrekare cinsinden alanini yaziniz: \n");
	scanf("%d",&m);  
	
	f1=m*18;
	f2=17*m;
	f3=19*m;
	
	
	if(kod=='T')
	{
		printf("halinizi yikamak icin talep edilen ucret: %d",f1);
	}
   else	if(kod=='B')
	{
		printf("halinizi yikamak icin talep edilen ucret: %d",f2);
	}
	else if(kod=='S')
	{
		printf("halinizi yikamak icin talep edilen ucret: %d",f3);
	}
	else
	{
		printf("hatali kod girdiniz lutfen tekrar deneyiniz.\n"); 
	}

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
