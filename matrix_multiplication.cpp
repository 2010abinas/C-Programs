#include<stdio.h>
int main(){
	int first[10][10], second[10][10], multi[100][100],i,j,m,n;
	printf("Enter number of rows and columns would be present in the Array: \n");
	scanf("%d %d",&m,&n);
	
	printf("Enter the first matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&first[i][j]);
		}
	}
	
	printf("First matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",first[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the second matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&second[i][j]);
		}
	}
	
	printf("Second matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",second[i][j]);
		}
		printf("\n");
	}
	

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			multi[i][j]=0;
			for(int k=0;k<n;k++){
				multi[i][j]+=first[i][k]*second[k][j];
			}
		}
	}

	printf("After Multiplication: \n");	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",multi[i][j]);
		}
		printf("\n");
	}
	
		
	return 0;
}
