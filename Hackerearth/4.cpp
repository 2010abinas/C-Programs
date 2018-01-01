#include<stdio.h>

int main(){
	int N,A[1000];
	int i,j=0;
	long long multi=1;
	scanf("%d",&N);
	do{
		scanf("%d",&A[j]);
		j++;
	}while(j<N);
	
	for(i=0;i<N;i++){
		multi=(multi*A[i])%1000000007;
	}
	printf("%lld",multi);
}




