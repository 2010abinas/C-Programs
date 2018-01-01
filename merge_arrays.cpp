#include<stdio.h>

int main(){
	int a[20],b[20],i,j,n,m;
	
	printf("Input no of elements will present in two arrays: \n");
	scanf("%d %d",&n,&m);
	
	printf("Enter 1st array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter 2nd array: \n");
	for(j=0;j<m;j++){
		scanf("%d",&b[j]);
	}
	
	for(i=n,j=0;i<m+n;i++,j++){
		a[i]=b[j];
	}
	
	printf("After merging of 2 array: \n");
	for(i=0;i<m+n;i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
