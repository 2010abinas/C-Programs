#include<stdio.h>

int main(){
	char name[80],name1[80];
	int i,j;
	printf("Enter a string: ");
	gets(name);
	i=j=0;
	while(name[i]!='\0'){
		i++;
	}
	while(--i>=0){
		name1[j++]=name[i];
	}
	name1[j]='\0';
	printf("Reversed string is: %s",name1);
}
