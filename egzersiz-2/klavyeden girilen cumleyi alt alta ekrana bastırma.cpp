#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char cumle[100];
	int i;
	printf("lutfen bir cumle giriniz:\n");
	gets(cumle);
	
	 for(i=0;i<cumle[i];i++)// ortadaki cumle[i] kullanımı son karaktere kadar gidlieceğini anlatıyor bize
	 {
	 	printf("%c\n",cumle[i]);
	 }
	
	
	
	
	
	
	
	
	
	
	return 0;
}
