#include<stdio.h>
void arraysum()

{
	int i,n,a[n],sum=0;
	printf("enter array size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		
		
	}
		for(i=0;i<n;i++){
		sum += a[i];
	}
	printf("sum of array:%d",sum);
	

}
void printReverseAndSum(int arr[], int size) {
    int sum = 0;
    int i;
    

    printf("Reverse of the array: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
     printf("\n");

    printf("Sum of elements in the array: %d\n", sum);    
}
