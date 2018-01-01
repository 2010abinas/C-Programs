#include<stdio.h>
int MAXSIZE=8;
int queue[8];
int top =-1;
int bottom=MAXSIZE-1;

int isFull(){
	if(top==MAXSIZE){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	if(top==-1){
		return 1;
	}else{
		return 0;
	}
}

int isPeek(){
	return queue[top];
}

int isPush(int data){
	if(!isFull()){
		top=top+1;
		queue[top]=data;
		bottom=bottom-1;
		printf("%d\n",queue[top]);
	}else{
		printf("Queue is full.\n");
	}
}

int isPop(){
	int data;
	if(!isEmpty()){
		data=queue[bottom];
		bottom=bottom+1;
		top=top-1;
		return data;
	}else{
		printf("Queue is empty.\n");
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
	
	printf("The top element in the queue is: %d\n",isPeek());
	printf("Elements are: \n");
	
	while(!isEmpty()){
		int data =isPop();
		printf("%d\n",data);
	}
	
   printf("Queue full: %s\n" , isFull()?"true":"false");
   printf("Queue empty: %s\n" , isEmpty()?"true":"false");
   
   return 0;
}























