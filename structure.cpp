//#include<stdio.h>
//
//int main(){
//	struct point{
//		int x;
//		int y;
//	} point1;
//	
//	printf("Enter any 2 numbers: \n");
//	scanf("%d %d",&point1.x,&point1.y);
//	
//	point1.x=10;
//	point1.y=-20;
//	
//	printf("Numbers are: %d %d\n",point1.x,point1.y);
//	
//	return 0;
//}

#include<stdio.h>


	struct point{
		int x;
		int y;
	};
	
int isOrigin(struct point pt);

int main(){
	int result;
	
	struct point pt;
	printf("Enter any 2 numbers: \n");
	scanf("%d %d",&pt.x,&pt.y);
	
	result=isOrigin(pt);
	
	if(result==1){
		printf("Center");
	}else{
		printf("Not center");
	}
}

int isOrigin(struct point ptr){
	if(ptr.x==0 && ptr.y==0){
		return 1;
	}else{
		return 0;
	}
}
