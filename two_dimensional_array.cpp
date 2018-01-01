#include<stdio.h>
int main(){
	
	int arr[10][10],i,j,m,n;
	printf("Enter number of rows and columns would be present in the array: \n");
	scanf("%d %d",&m,&n);
	
	printf("Enter the numbers: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Entered two dimensional array is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
