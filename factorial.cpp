/*--#include<stdio.h>
int main(){
	int number,fact =1,temp;
	
	printf("Enter a number: \n");
	scanf("%d",&number);
	
	temp = number;
	while(number>0){
		fact = fact*number;
		number--;
	}
	
	printf("The Factorial of the number %d is %d", temp,fact);
	
	return 0;
} --*/

#include<stdio.h>

int factorial(int);

int main(){
	int number,fact;
	
	printf("Enter a number: \n");
	scanf("%d",&number);
	
	fact = factorial(number);
	
	printf("Factorial of number %d is: %d \n",number,fact);
	
}

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return (n*factorial(n-1));
	}
}




