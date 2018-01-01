#include<stdio.h>
#include<string.h>
int main(){
	char str[100],str2[100];
	int i,j,len;
	printf("Enter any string: \n");
	gets(str);
	
	j=0;
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='a'|| str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u'|| str[i]=='U'){
			continue;
		}
		str2[j]=str[i];	
		j++;
	}
	str2[j]='\0';
	
	printf("String is: %s\n", str2);
	
	return 0;
}
