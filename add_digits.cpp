#include<stdio.h>

int main(){
	int number,sum =0,reminder,temp;
	
	printf("Enter any number \n");
	scanf("%d",&number);
	temp = number;
	while(number>0){
		reminder = number%10;
		sum = sum+reminder;
		number = number/10;	
	}
	
	printf("Sum of number %d is: %d \n", temp, sum);
	
	return 0;
}
