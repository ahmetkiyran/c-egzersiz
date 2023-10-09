#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char cumle[150];
	int i=0;
	int encok;
	int kucukharf[26]=0;
	printf("bir cumle giriniz:\n");
	gets(cumle);
	char harf;
	  
	while(cumle[i])
	{
		if(cumle[i]>='a' && cumle[i]<='z')
		{
			kucukharf[cumle[i]-'a']++;
		}
		i++;
	}
	
	encok=kucukharf[0];
	
	for(i=1;i<26;i++)
	{
		if(kucukharf[i]!=0)
		{
			encok=kucukharf[i];
			harf=i+'a';
		}
	}
	
	
	
	printf("en fazla kullanilan harf: %c",harf);
	
	
	
	
	
	
	
	
	
	return 0;
}
