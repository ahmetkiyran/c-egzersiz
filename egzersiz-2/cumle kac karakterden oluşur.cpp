#include<stdio.h>
#include<stdlib.h>

int main()
{
	char cumle[100];
	
	int i=0;
	printf("lutfen bir cumle giriniz:\n");
	gets(cumle);
	
	while(cumle[i])
	{
	 i++;	
	}  
	printf("cumledeki karakter sayisi: %d",i); 
	
	return 0;
}
