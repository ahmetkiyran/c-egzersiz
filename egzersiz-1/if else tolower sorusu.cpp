#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char ahmet;
  
  printf("lutfen bir karakter giriniz\n");
  scanf("%c",&ahmet);
  
  if((ahmet>='A')&& (ahmet<='Z'))
  {
  	printf("kucuk harfimiz %c\n",tolower(ahmet)); 
  } 
  else
  {
   printf("yanlis karakter girdiniz."); 	
  } 	
	
	
	// tolower b�y�k harfleri kucuk harfe cevirme kodu gibi bir �eydir.
	
	
	
	
	
	
	
	
	return 0;
}
