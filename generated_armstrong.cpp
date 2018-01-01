#include<stdio.h>

int checkArmstrong(int);
int power(int,int);

int main(){
	int x,y;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);
	
	for(int i=x;i<=y;i++){
		if(checkArmstrong(i)==i){
			printf("%d \n",i);
		}
	}
	
	return 0;	
}

int checkArmstrong(int n){
	int sum=0,r,digits=0,temp;
	
	temp=n;
	while(temp>0){
		digits++;
		temp=temp/10;
	}
	
	temp=n;
	while(temp>0){
		r=temp%10;
		sum=sum+power(r,digits);
		temp=temp/10;
	}
	return sum;
}

int power(int reminder,int d){
	int c=1;
	
	for(int i=0;i<d;i++){
		c=c*reminder;
	}
	return c;
}
