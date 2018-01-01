#include<stdio.h>

int linearSearch(int [],int,int); 

int main(){
	int arr[100], i,n,search,position;
	
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers: \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to be searched: \n");
	scanf("%d",&search);
	
	position = linearSearch(arr,n,search);
	
	if(position ==-1){
		printf("%d is not present in the array \n",search);
	}else{
		printf("%d is present in %d location \n",search,position+1);
	}
	
	return 0;
}

int linearSearch(int a[], int n,int search){
	for(int j=0;j<n;j++){
		if(a[j]==search){
			return j;
		}
	}
	return -1;
}


