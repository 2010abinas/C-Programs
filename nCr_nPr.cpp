#include<stdio.h>

int nCr(int,int);
int nPr(int,int);
int factorial(int);

int main(){
	int n,r,npr,ncr;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&n,&r);
	
	npr = nPr(n,r);
	ncr = nCr(n,r);
	
	printf("nPr is %d \n",npr);
	printf("nCr is %d \n",ncr);
	
	return 0;
}

int nPr(int a, int b){
	if(a ==0 || b==0){
		return 1;
	} else if(a<b){
		return -1;
	} else{
		int result = factorial(a)/factorial (a-b);
		return result;
	}
}

int nCr(int a, int b){
	if(a==0 ||b==0){
		return 1;
	}else if(a<b){
		return -1;
	} else{
		int x= factorial(b) * factorial(a-b);
		int result = factorial(a)/x;
		return result;
	}
}

int factorial(int x){
	if(x==0){
		return 1;
	}else{
		return x*factorial(x-1);
	}
}
