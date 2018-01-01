#include<stdio.h>
int main(){
	
	int first[10][10], second[10][10], sum[10][10], i,j,m,n;
	
	printf("Enter number rows and columns would be present in the matrix: \n");
	scanf("%d %d",&m,&n);
	
	printf("Enter numbers for the 1st matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&first[i][j]);
		}
	}
	
	printf("First Matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",first[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter numbers for the 2nd matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&second[i][j]);
		}
	}
	
	printf("Second Matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",second[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum of 2 matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum[i][j]=first[i][j]+second[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
