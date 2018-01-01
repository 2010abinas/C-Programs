#include<stdio.h>

int main(){
	int arr[100],b[100],i,j,n;
	
	printf("Enter no. of numbers to be pushed in array: \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Elements in the array before reverse are: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(i=n-1,j=0;i>=0;i--,j++){
		b[j]=arr[i];
	}
	
	for(i=0;i<n;i++){
		arr[i]=b[i];
	}
	
	printf("\nReverse array: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
