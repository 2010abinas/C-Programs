#include<stdio.h>

int main(){
	int rows,a=1;
	
	printf("Enter no of rows should present in the triangle: \n");
	scanf("%d",&rows);
	
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}		
		printf("\n");
	}
	
	return 0;
}
