#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	
	printf("ucgenin ilk kenar uzunlugunu giriniz:\n");
	scanf("%d",&a);
	
	printf("ucgenin ikinci kenar uzunlugunu giriniz:\n");
	scanf("%d",&b);
	
	printf("ucgenin son kenar uzunlugunu giriniz:\n");
	scanf("%d",&c);
	
	if(a==b && a!=c)
	{
	 printf("ucgen ikizkenardir.");	
	}
	else if(a==c && a!=b)
	{
		printf("ucgen ikizkenardir."); 
	}
	else if(b==c && b!=a)
	{
		printf("ucgen ikizkenardir.");
	}   
	else
	{
	 printf("ucgen cesitkenardir"); 	
	}   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
