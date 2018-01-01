#include<stdio.h>

int main(){
	int row,i,j,temp;
	
	printf("Enter number of rows you want to print: \n");
	scanf("%d",&row);
	
	temp = row;
	
	for(i=0;i<row;i++){
		for(j=1;j<temp;j++){
			printf(" ");	
		}
		temp--;
		
		for(j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n"); 
	}
	
	return 0;
}


