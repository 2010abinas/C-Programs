//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[20],str2[20];
//	
//	printf("Enter the first string: \n");
//	gets(str1);
//	
//	printf("enter the second string: \n");
//	gets(str2);
//	
//	if(strcmp(str1,str2)==0){
//		printf("Both string1 and string2 are equal\n");
//	}else{
//		printf("Strings are not equal\n");
//	}
//	
//	return 0;
//}

#include<stdio.h>

int compareString(char s1[], char s2[]);
int main(){
	char str1[100],str2[100],flag;
	
	printf("Enter first string: \n");
	gets(str1);
	printf("Enter second string: \n");
	gets(str2);
	
	flag=compareString(str1,str2);
	if(flag==0){
		printf("Both strings are equal\n");
	}else{
		printf("Strings are not equal");
	}
}

int compareString(char s1[],char s2[]){
	int c;
	c=0;
	while(s1[c]==s2[c]){
		if(s1[c]=='\0' || s2[c]=='\0'){
			break;
		}
		c++;
	}
	
	if(s1[c]=='\0' && s2[c]=='\0'){
		return 0;
	}else{
		return 1;
	}
}
