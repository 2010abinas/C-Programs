//#include<stdio.h>
//int main(){
//	int n,x=0,y=1,next;
//	
//	printf("Enter a number to see the fibonacci series \n");
//	scanf("%d",&n);
//	
//	printf("The first %d fibonacci series: \n",n);
//	printf("%d %d ",x,y);
//	for(int i=0;i<n;i++){
//		next=x+y;
//		x=y;
//		y=next;
//		
//		printf("%d ",next);	
//	}
//	
//	return 0;
//}

#include<stdio.h>

#define N 10

int main(){

	int arr[N],i;
	
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<N;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	
	printf("Fibonacci series is: \n");
	for(i=0;i<N;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
