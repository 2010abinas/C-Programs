#include<stdio.h>
int main(){
	int t,arr[100001],n,k;
	scanf("%d",&t);
	scanf("%d %d",&n,&k);
	while(t>0){
		int count = 0;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){
			int flag=0;
			if(arr[i]<k){
				for(int j=0;j<n;j++){
					arr[j]++;
				}
			count++;
			i=0;
			flag=1;
			}
			if(flag==0){
				break;
			}
		}
		for(int i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		t--;
	}
}
