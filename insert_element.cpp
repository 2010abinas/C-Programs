#include<stdio.h>
int main(){
	int a[100],n,i,insert,location,temp;
	
	printf("Enter number of elements would be present in the array: \n");
	scanf("%d",&n);
	
	printf("Enter elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Elements are: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	printf("\nEnter the element to be inserted in the location: \n");
	scanf("%d %d",&insert, &location);
	
	for(i=n-1;i>=location-1;i--){
		a[i+1]=a[i];
	}
	a[location-1]=insert;
	
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

