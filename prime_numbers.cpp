#include<stdio.h>

int main(){
	int number,count=0;
	
	printf("Enter any number: \n");
	scanf("%d",&number);
	
	for(int i=2;i<=number-1;i++){
		if(number%i == 0){
			count =1;
			break;
		}		
	}
		printf("%d \n",count);
	if(count == 0){
		printf("%d is a prime number: \n",number);
	}else{
		printf("%d is not a prime number: \n",number);
	}
}
