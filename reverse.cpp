/* #include<stdio.h>

int main(){
	int number,reverse=0,temp,reminder;
	
	printf("Enter a number to be reversed: \n");
	scanf("%d",&number);
	
	temp=number;
	
	while(number>0){
		reminder= number%10;
		reverse = reverse*10+reminder;
		number = number/10;	
	}
	
	printf("Reverse of number %d is: %d \n", temp,reverse);
	
	return 0;
} */

#include<stdio.h>

int reverseNum(int);

int main(){
	int number, reverse;
	
	printf("Enter a number to be reversed: \n");
	scanf("%d",&number);
	
	reverse = reverseNum(number);
	
	printf("Reverse of number %d is: %d \n", number,reverse);	
	return 0;
}

int reverseNum(int x){
	 static int reverse =0;
	if(x==0){
		return 1;
	}
	
	int reminder = x%10;
	reverse = reverse*10+reminder;
	reverseNum(x/10);
	
	return reverse;
	
}
