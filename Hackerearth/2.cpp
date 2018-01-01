#include<stdio.h>
#include<string.h>
int main(){
	
	int t,i;
	char str[100];
	gets(str);
	t=strlen(str);
	
	for(i=0;i<t;i++){
		if(str[i]>=65 && str[i]<=90){
			printf("%c",str[i]+32);
		}else if(str[i]>=97 && str[i]<=122){
			printf("%c",str[i]-32);
		}
	}
	
	return 0;
}
