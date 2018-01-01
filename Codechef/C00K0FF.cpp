#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t;
	char *a[10];
	scanf("%d",&t);
	while(t>0){
		int n,i;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			char input[15];
			a[i]=malloc(10*sizeof(char));
			scanf("%s",input);
			strcpy(a[i],input);
		}
		t--;
	}
}
