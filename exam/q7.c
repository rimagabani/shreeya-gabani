#include<stdio.h>
struct book 
{
    char title[20];
	char author[20];
	int price;
		
};
main()
{
	int n,i;
	printf("enter no. of book details:");
	scanf("%d",&n);
	
	struct book b[n];
	for (i=0 ;i<n;i++)
	{
		printf("enter title:");
		scanf("%s",&b[i].title);
		printf("enter author name :");
		scanf("%s",&b[i].author);
		printf("enter price :");
		scanf("%d",&b[i].price);
	}
	
	printf("book data:\n");
	for(i=0;i<n;i++)
	{
		printf("title:%s", b[i].title);
		printf("author:%s", b[i].author);
		printf("price:%d",b[i].price);
	}
}
