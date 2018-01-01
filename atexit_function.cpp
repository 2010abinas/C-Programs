#include<stdio.h>
#include<stdlib.h>

void exit1(){
	printf("This is first exit function.\n");
}

void exit2(){
	printf("This is second exit function.\n");
}

void exit3(){
	printf("This is third exit function.\n");
}

int main(){
	atexit(exit1);
	atexit(exit3);
	atexit(exit2);
	printf("Main function executed.\n");
	return 0;
}
