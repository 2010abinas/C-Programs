#include<stdio.h>
int main(){
	int mat[10][10],m,n,i,j;
	printf("Enter no of rows and column will be present in Array: \n");
	scanf("%d %d",&m,&n);
	
	printf("Enter the matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("Matrix before transpose: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix After transpose: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",mat[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
