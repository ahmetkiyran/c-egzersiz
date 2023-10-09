#include<stdio.h>
#include<stdlib.h>

int main()
{
	 
	int no,boy,fark,minboy,minno;
	int tam=150;
	printf("ogrenci no:\n");
	scanf("%d",&no);
	
	printf("ogrenci boy:\n");
	scanf("%d",&boy);
	
	
	minno=no;
	fark=abs(boy-tam);
	
	while(no>0)
	{
		printf("ogrenci no: \n");
		scanf("%d",&no);
		
		printf("ogrenci boy: \n");
		scanf("%d",&boy);   
		
		if(abs(boy-tam)<fark)
		{
			fark=abs(boy-tam);
			minno=no;
			minboy=boy;
		}
	 } 
	
	printf("%d numarali ogrenci  %d cm boyuyla %d cm e en yakindir.",minno,minboy,tam);
	
	
	
	
	
	
	
	
	return 0;
}
