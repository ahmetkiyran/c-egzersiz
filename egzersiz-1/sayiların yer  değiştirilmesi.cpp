#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int a,b,bos;
	
	printf("ilk sayiyi giriniz: \n");
	scanf("%d",&a);
	
	printf("ikinci sayiyi giriniz: \n");
	scanf("%d",&b);
	
	bos=a;
	a=b;
	b=bos;
	
	printf("ilk sayiniz: %d\n",a);
	printf("ikinci sayiniz: %d",b);     
	
	
	
	
	
	
	
	
	return 0;
}
