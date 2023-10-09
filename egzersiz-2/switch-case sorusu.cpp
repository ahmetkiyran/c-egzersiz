#include<stdio.h>
#include<stdlib.h>


int main()
{
	int kod;
	float fiyat;
	int vergik,vergitg,vergiluks;
	printf("urun kodunu giriniz:\n");
	scanf("%d",&kod);
	
	printf("urun fiyatini giriniz:\n");
	scanf("%f",&fiyat);    
	
	vergik=5;
	vergitg=5.6;
	vergiluks=19.6;
	
	switch(kod)
	{
		case 0: printf("kitabin fiyati: %f",fiyat+fiyat*vergik/100);
		break;
		case 1: printf("temel gidanin fiyati: %f",fiyat+fiyat*vergitg/100);
		break;
		case 2: printf("luks  urunun fiyati: %f",fiyat+fiyat*vergiluks/100);
		break;
		default: printf("hatali kod girdiniz");  
		break; 
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
