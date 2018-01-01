#include<stdio.h>
int main(){
	int arr[100],i,j,n,temp,position;
	
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers: \n",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Before sorting: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<n-1;i++){
		position = i;
		for(j=i+1;j<n;j++){
			if(arr[position]>arr[j]){
				position=j;
			}
		}
			if(position!=i){
				temp = arr[i];
				arr[i]=arr[position];
				arr[position]=temp;
			}
	}
	
	printf("\nAfter sorting: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
