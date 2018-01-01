//#include<stdio.h>
//#include<stdlib.h>
//
//#define null 0
//int main(){
//	int arr[5],i,j,input;
//	int n,flag;
//	
//	printf("Enter elements will be in the array: \n");
//	
//	for(i=0;i<(int)( sizeof(arr) / sizeof(arr[0]) );i++){
//		scanf("%d",&arr[i]);
//	}
//	
//	printf("Input array is: \n");
//	for(i=0;i<(int)( sizeof(arr) / sizeof(arr[0]) );i++){
//		printf("%d ",arr[i]);
//	}
//	
//	printf("\n1. Push an element into an array.\n");
//	printf("2. Pop an element from  the array.\n");
//	printf("3. Display the array. \n");
//	printf("4. Exit.\n");
//	printf("Select any of these above input for the Stack operation: \n");
//	scanf("%d",&input);
//	
//	flag=0;
//	switch(input){
//		case 1:
//			printf("Enter a number to be pushed into the array: \n");
//			scanf("%d",&n);
//			if(arr[0]==null){
//				arr[0]=n;
//			}else{
//				for(i=0;i<(int)( sizeof(arr) / sizeof(arr[0]) );i++){
//					if(arr[i]==null){
//						arr[i]=n;
//						break;
//					}
//				}
//			}
//			printf("The stack is: \n");
//				for(i=0;i<(int)( sizeof(arr) / sizeof(arr[0]));i++){
//					printf("%d ",arr[i]);
//				}
//			break;
//		
//		case 2: 
//			printf("Enter the element to be popped from the array: \n");
//			scanf("%d",&n);
//			if(arr[0]==null){
//				printf("There is no element to be popped. \n");
//			}else{
//				for(i=0;i<(int)( sizeof(arr) / sizeof(arr[0]));i++){
//					if(arr[i]==n){
//						printf("Reached\n");
//						j=arr[i];
//						arr[i]=null;
//						flag=1;
//						break;
//					}
//				}
//					printf("%d\n",flag);
//				if(flag!=0){
//					printf("%d has been popped from the array. \n",n);
//				}else{
//					printf("%d has not found in the array. \n",n);
//				}
//			}
//				printf("The stack is: \n");
//				for(i=0;i<(int)( sizeof(arr) / sizeof(arr[0]));i++){
//					printf("%d ",arr[i]);
//				}
//			break;
//			
//		case 3:
//			printf("The stack is: \n");
//			for(i=0;i<(int)(sizeof(arr) / sizeof(arr[0]));i++){
//				printf("%d ",arr[i]);
//			}
//			break;
//		case 4:
//			exit(0);
//			break;
//		default: 
//			printf("Enter valid input.\n");
//			break;
//	}
//	
//	return 0;
//}

#include<stdio.h>

int MAXSIZE=8;
int top= -1;
int stack[8];

int isEmpty(){
	if(top==-1){
		return 1;
	} else{
		return 0;
	}
}

int isFull(){
	if(top==MAXSIZE){
		return 1;
	}else{
		return 0;
	}
}

int isPop(){
	int data;
	if(!isEmpty()){
		data=stack[top];
		top=top-1;
		return data;
	}else{
		printf("Stack is empty.\n");
	}
}

int isPeek(){
	return stack[top];
}

int isPush(int data){
	if(!isFull()){
		top=top+1;
		stack[top]=data;
	}else{
		printf("Stack is full.\n");
	}
}

int main(){
	isPush(1);
	isPush(2);
	isPush(3);
	isPush(7);
	isPush(18);
	isPush(5);
	isPush(12);
	
	printf("The top element in the stack is: %d\n",isPeek());
	printf("Elements are: \n");
	
	while(!isEmpty()){
		int data =isPop();
		printf("%d\n",data);
	}
	
   printf("Stack full: %s\n" , isFull()?"true":"false");
   printf("Stack empty: %s\n" , isEmpty()?"true":"false");
   
   return 0;
	
}














































