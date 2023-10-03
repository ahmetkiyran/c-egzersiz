#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sayi,onlar,birler;
	
	printf("bir sayi giriniz: \n");
	scanf("%d",&sayi);
	
	birler=sayi%10;
	onlar=sayi%100/10;
	
	 printf("birler basamagi: %d\n",birler);
	 printf("onlar basamagi:  %d\n",onlar);   
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
