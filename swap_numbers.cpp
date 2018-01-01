/*--#include<stdio.h>
int main(){
	int x,y,temp;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);
	
	printf("Before swap: %d %d \n",x,y);
	
	temp = x;
	x=y;
	y=temp;
	
	printf("After swap: %d %d \n",x,y);
	
	return 0;
} 
#include<stdio.h>
int main(){
	int x,y;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);
	
	printf("Before swap: %d %d \n",x,y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("After swap: %d %d \n",x,y);
	
	return 0;
	
} */


/*#include<stdio.h>

int main(){
	int x,y,temp;
	int *a,*b;
	a=&x;
	b=&y;
		
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);
	
	printf("Before swap: %d %d \n",x,y);
	
	temp = *a;
	*a = *b;
	*b =temp;
	
	printf("After swap: %d %d \n",x,y);
	
	return 0;
}*/


#include<stdio.h>

int main(){
	int x,y,temp;
	
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&x,&y);
	
	printf("Before swap: %d %d \n",x,y);
	
	x=x^y;
	y=x^y;
	x=x^y;
	
	printf("After swap: %d %d \n",x,y);
	
	return 0;
}
