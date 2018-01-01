#include<stdio.h>
int main(){
	int arr[100],n,i,j,temp;
	
	printf("Enter no. of elements to be pushed in the array: \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers: \n",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Before sorting: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(i=1;i<=n-1;i++){
		j=i;
		while(j>0 && arr[j]<arr[j-1]){
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
			
			j--;
		}
	}
	
	printf("\nAfter sorting: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;	
}
