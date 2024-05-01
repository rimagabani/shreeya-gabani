#include<stdio.h>
main()
{
	char s[50];
	printf("enter employee name and role");
	scanf("%[^\n]",&s);
	FILE *f = fopen("data.txt","w");
	if(f==NULL){
		printf("ERROR");
		
	}
	else
	{
		fprintf(f,"%s",s);
	}
	fclose(f);
}
