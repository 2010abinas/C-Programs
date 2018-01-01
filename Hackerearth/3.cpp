#include<stdio.h>
#include<string.h>

int main(){
	int i,t;
	char str[101],temp[101],rev[101];
	gets(str);
	t=strlen(str);
	
	strcpy(temp,str);
	
	for(i=0;i<=t;i++){
		rev[i]=str[t-(i+1)];
	}
	
	if(strcmp(temp,rev)==0){
		printf("YES");	
	}else{
		printf("NO");
	}
}
