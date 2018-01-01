//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str[100],str2[100];
//	int i,j,len;
//	printf("Enter any string: \n");
//	gets(str);
//	
//	len=strlen(str);
//	for(i=len-1,j=0;i>=0;i--,j++){
//		str2[j]=str[i];
//	}
//	str2[j]='\0';
//	printf("%s\n",str2);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	
	printf("Enter any string: \n");
	gets(str);
	
	strrev(str);
	printf("After reverse the string: %s \n",str);
	
	return 0;
}
