#include <stdio.h>

int main() {
	long i,n,q;
	long long arr[100000001];
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++){
	    scanf("%lld",&arr[i]);
	}
	while(q>0){
	    long long l,r,mean;
	    scanf("%lld %lld",&l,&r);
	    mean=(l+r)/2;
	    printf("%lld",mean);
	}
	return 0;
}

