#include<stdio.h>


int check_prime(int);
int main(){
	int n,i;
	scanf("%d",&n);
	
	int prime;
	
	prime = check_prime(5);
	printf("%d",prime);
//	for(i=1;i<=n;i++){
//		prime= check_prime(i);
//		printf("%d\n",prime);
////		if(prime==1){
////			printf("%d ",i);
////		}
//	}
	
	return 0;
}

int check_prime(int a){
	int flag=0;
	for(int i=2; i<=a/2; ++i)
    {
        // condition for nonprime number
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
	if(flag==0){
		return 1;
	}else{
		return 0;
	}
}
