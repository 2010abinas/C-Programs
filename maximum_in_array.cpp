#include<stdio.h>

int main(){
	int arr[100],n,maximum,location=0;
	
	printf("Enter number of elements present in array: \n");
	scanf("%d",&n);
	
	printf("Elements: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Elements are: \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	maximum=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>maximum){
			maximum=arr[i];
			location=i+1;
		}
	}
	
	printf("Maximum number in the array is %d in the location %d \n",maximum,location);
	return 0;
	
}
