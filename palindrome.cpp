#include<stdio.h>
int main(){
	int number,temp, reverse =0, reminder;
	
	printf("Enter any number: \n");
	scanf("%d",&number);
	
	temp = number;
	while(number>0){
		reminder = number%10;
		reverse = reverse*10+reminder;
		number = number/10;	
	}
	
	if(reverse == temp){
		printf("%d is a palidrome number.",temp);
	}else{
			printf("%d is not a palidrome number.",temp);
	}
	
	return 0;
}
