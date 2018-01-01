/* #include<stdio.h>
int main(){
	int arr[100],n,sum=0;
	
	printf("Enter no. of numbers to be added: \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers \n",n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
		sum = sum+arr[i];
	}
	
	printf("Sum of %d numbers is: %d \n",n,sum);
	
	return 0;
} */

#include<stdio.h>

int summation(int[],int);
int main(){
	int arr[100] ,n,result;
	
	printf("Enter no. of number to be added: \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers \n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	result = summation(arr,n);
	
	printf("Sum of %d numbers is: %d\n",n,result);
	
	return 0;
}

int summation(int arr[],int a){
	int sum =0;
	if(a==0){
		return sum;
	}
		sum = sum+arr[a-1];
		return summation(arr,--a);

		
}
