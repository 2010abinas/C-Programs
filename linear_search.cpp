#include<stdio.h>
int main(){
	int arr[100],search,i,n,count=0;
	
	printf("Enter number of elements present in an array:");
	scanf("%d",&n);
	
	printf("Enter %d numbers \n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to be searched \n");
	scanf("%d",&search);
	
	for(i=0;i<n;i++){
		if(arr[i]==search){
			printf("%d is present in %d location \n",search,i+1);
			count++;
		}
	}
		if(count!=0){
			printf("%d is present %d times in the array",search,count);
		}else{
			printf("%d is not present in the array",search);
		}
	return 0;
}
