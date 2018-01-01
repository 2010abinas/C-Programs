#include<stdio.h>
#include<string.h>
int main(){
 	char str1[10000],str2[10000];
 	
 	int t;
 	scanf("%d",&t);
 	while(t>0){
 		scanf("%s",&str1);
 		scanf("%s",&str2);
 		int count=0;
 		int flag=0;
 		int len1= strlen(str1);
 		int len2= strlen(str2);
 		if(len1<=len2){
 			for(int i=0;i<len1;i++){
 				for(int j=0;j<len2;j++){
 					if(str1[i]==str2[j]){
 						str2[j]==0;
 						count++;
 						break;
					 }
				 }
			 }
		 }else{
		 	for(int i=0;i<len2;i++){
		 		for(int j=0;j<len1;j++){
		 			if(str2[i]==str1[j]){
		 				str1[j]==0;
		 				count++;
		 				break;
					 }
				 }
			 }
		 }
		 printf("%d\n",(len1-count)+(len2-count));
		 count=0;
 		t--;
	 }
 }
