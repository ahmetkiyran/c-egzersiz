#include<stdio.h>
#include<stdlib.h>

int main()
{
	// ax^2+bx+c iþlemi yapan kod.
	
	int a,b,c,x;
	int sonuc;
	
	printf("denklem deðiskeni x icin bir deger giriniz: \n");
	scanf("%d",&x);
	
	printf("denklemdeki  a  icin bir deger giriniz: \n");
	scanf("%d",&a);
	
	printf("denklemdeki b icin bir deger giriniz: \n");
	scanf("%d",&b);
	
	printf("denklemdeki sabit deger cicin bir deger giriniz: \n");
	scanf("%d",&c);
	
	 
	sonuc=(a*x*x)+(b*x)+c;
	
	printf("denklem sonucu: %d",sonuc); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
