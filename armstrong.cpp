#include<stdio.h>

int power(int,int);

int main(){
	int number,sum=0,temp,r,digits=0;
	
	printf("Enter a number: \n");
	scanf("%d",&number);
	
	temp = number;
	
	while(temp>0){
		digits++;
		temp = temp/10;
	}
	
	temp = number;
	
	while(temp>0){
		r=temp%10;
		sum=sum+power(r,digits);
		temp=temp/10;
	}
	
	if(sum==number){
		printf("%d is a armstrong number.\n",number);
	}else{
		printf("%d is not a armstrong number.\n",number);
	}
	
	return 0;
}

int power(int reminder, int d){
	int c=1;
	
	for(int i=1;i<=d;i++){
		c=c*reminder;
	}
	
	return c;
	
}
