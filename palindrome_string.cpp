//#include<stdio.h>
//#include<string.h>
//int main(){
//	char a[100],b[100];
//	
//	printf("Enter any string: \n");
//	gets(a);
//	
//	strcpy(b,a);
//	strrev(b);
//	
//	if(strcmp(a,b)==0){
//		printf("String is palindrome.\n");
//	}else{
//		printf("String is not palindrome. \n");
//	}
//	
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,length,flag;
	printf("Enter any string: \n");
	gets(str);
	
	flag=0;
	length=strlen(str);
	
	for(i=0;i<length;i++){
		if(str[i] !=str[length-i-1]){
			flag=1;
			break;			
		}
	}
	
	if(flag==1){
		printf("String is not palidrome");
	}else{
		printf("string is palindrome");
	}
}
