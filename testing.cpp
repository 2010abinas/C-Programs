//#include<stdio.h>
//
//int* larger(int *, int *);
//int main(){
//	int a,b;
//	printf("enter any 2 numbers: \n");
//	scanf("%d %d",&a,&b);
//	
//	int *greater;
//	greater=larger(&a,&b);
//	
//	printf("Greater number is: %d",*greater);	
//}
//
//int* larger(int *x, int *y){
//	
//	if(*x>*y){
//		return x;
//	}else{
//		return y;
//	}
//}

//#include<stdio.h>
//
//struct my_structure{
//	int mark;	
//	float average; 
//	char name[20];
//};
//
//int main(){
//	
//	struct my_structure obj = {
//		100,99.5,"Abinas"
//	};
//	
//	printf("Mark is: %d \n",obj.mark);	
//	printf("Average is: %f \n",obj.average);
//	printf("Name is: %s \n",obj.name);
//	
//	return 0;
//	
//}
//#include<stdio.h>
//
//struct student{
//	int marks;
//	float average;
//	char name[20];
//};
//
//int main(){
//	struct student *ptr;
//	
//	struct student obj = {
//		100,99.5,"Abinas"
//	};	
//	ptr=&obj;
//	
//	printf("Mark is: %d \n",ptr->marks);	
//	printf("Average is: %f \n",ptr->average);
//	printf("Name is: %s \n",ptr->name);
//	
//	return 0;
//	
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main(){
//	int num,i, *ptr, sum=0;
//	
//	printf("Enter any number:\n");
//	scanf("%d",&num);
//	
//	ptr=(int *)malloc(num*sizeof(int));
//	
//	printf("%d\n",ptr);
//	if(ptr==NULL){
//		printf("Not enough space in memory");
//		exit(0);
//	}
//	
//	printf("Enter %d elements of array:\n",num);
//	for(i=0;i<num;i++){
//		scanf("%d",ptr+i);
//		printf("%d\n",ptr+i);
//	}
//	
//	printf("Elements are: \n");
//	for(i=0;i<num;i++){
//		printf("%d ",*(ptr+i));
//		sum=sum+ *(ptr+i);
//	}
//	
//	printf("\nSum of elements of the array is: %d\n",sum);
//	
//	return 0;
//}


































