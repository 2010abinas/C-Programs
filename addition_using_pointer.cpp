/* #include<stdio.h>

int main(){
	int *a,*b, sum;
	int x,y;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);
	
	a=&x;
	b=&y;
	
	sum = *a+*b;
	
	printf("Sum of two numbers is: %d \n",sum);
	
	return 0;
	
} */

#include<stdio.h>

int addition(int *, int *);

int main(){
	int sum;
	int x,y;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);

	sum = addition(&x,&y);
	printf("Sum of two numbers is: %d \n",sum);
	
	return 0;
}

int addition(int *p, int *q){
	int sum;
	
	sum = *p+*q;
	return sum;
}
