//#include<stdio.h>
//
//#define concatination(a,b,c) a##b##c
//
//int main(){
//	int abc=1;
//	printf("Concatination of a,b is: %d\n",concatination(a,b,c));
//	return 0;
//}

//------------------------Pragma-----------------------------

//#include<stdio.h>
//
//void myFunction1();
//void myFunction2();
//
//#pragma startup myFunction1
//#pragma exit myFunction2
//
//int main(){
//	printf("It is  main function.\n");
//	return 0;
//}
//
//void myFunction1(){
//printf("This is startup function.\n");
//}
// 
// void myFunction2(){
// 	printf("This is exit function.\n");
// }


//#include<stdio.h>
//
//int main(){
//	int counter[6]={0,0,0,0,0,0},i,response;
//	printf("Enter your response:\n");
//	for(i=1;i<10;i++){
//		scanf("%d",&response);
//		if(response<1 || response>5){
//			printf("Please enter valid response: \n");
//		}else{
//			++counter[response];
//		}
//	}
//	printf("\n\nRating number of response\n");
//	printf("----------------------------\n");
//	for(i=1;i<6;i++){
//		printf("%d ",counter[i]);
//	}
//	return 0;
//	
//}

//#include<stdio.h>
//
//int main(){
//	int k=20;
//	int *p;
//	printf("The value of k is: %d\n",k);
//	p=&k;
//	*p=5;
//	
//	printf("The value of k is: %d\n",k);
//	printf("The value of *p is: %d\n",*p);
//	printf("The value of p is: %d\n",p);
//	printf("The value of *p is: %d\n",*p);
//	
//	return 0;	
//}
//


//#include<stdio.h>
//
//int main(){
//	int m=1,n=2,*p;
//	p=&n;
//	printf("\n");
//	printf("m has value %d stored at address %p\n",m,(void*)&m);
//	printf("n has value %d stored at address %p\n",n,(void*)&n);
//	printf("p has value %p stored at address %p\n",p,(void*)&p);
//	printf("The value of integer is %d\n",*p);
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main(){
//	
//	int arr[6]={1,45,-8,87,12,8},*ptr,i;
//	ptr=&arr[0];
//	printf("\n");
//	for(i=0;i<6;i++){
//		printf("arr[%d]=%d ",i,arr[i]);
//		printf("Contents in ptr+%d=%d\n",i,*(++ptr));
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main(){
//	char *a1="Hello World";
//	char a2[]= "Hello World";
//	char a3[6]= "World";
//	
//	printf("%d %d\n",sizeof(a1),sizeof(a2));
//	a1[1]='u';
//	a1=a2;
//	printf("%s",a1);
//	//a2=a3;
//	
//	return 0;
//}

//#include<stdio.h>
//
//int power(int,int);
//
//int main(){
//	int base,n;
//	int result;
//	printf("Enter base and power: \n");
//	scanf("%d %d",&base,&n);
//	
//	result=power(base,n);
//	printf("Result is: %d\n",result);
//	
//	return 0;
//}
//
//int power(int base,int n){
//	int p=1;
//	for(int i=1;i<=n;i++){
//		p=p*base;
//	}
//	return p;
//}

//#include<stdio.h>
//
//int swap(int *,int *);
//
//int main(){
//	int a,b;
//	printf("Enter any two numbers: \n");
//	scanf("%d %d",&a,&b);
//	swap(&a,&b);
//	printf("%d %d",a,b);
//	
//	return 0;
//}
//
//int swap(int *a1, int *b1){
//	int temp;
//	temp=*a1;
//	*a1=*b1;
//	*b1=temp;
//}





























