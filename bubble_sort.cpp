#include<stdio.h>
int main(){
	int arr[20],i,temp,n;
	
	printf("Enter number of elements to be pushed in array \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\nBefore Sorting: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(int j=0;j<n-1;j++){
		for(i=0;i<n-j-1;i++){
			if(arr[i]>arr[i+1]){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}	
		}
	}
	
	printf("\nAfter sorting: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
