#include<stdio.h>

int main(){
	int t,s,i,o,j,arr[7],result[7];
	scanf("%d",&t);
	j=0;
	int temp=t;
	while(t>0){
		scanf("%d",&s);
		for(i=0;i<s;i++){
			scanf("%d",&arr[i]);
		}
		if(s%2==0){
			result[j]=0;	
		}else{
			if(arr[0]==1&&arr[s-1]==1){
				for(i=0,o=s;i<s/2;i++,o--){
					if(arr[i+1]-arr[i]==1 && arr[s-1]-arr[s-2]==-1){
						result[j]=1;
					}else{
						result[j]=0;
					}
				}
			}else{
				result[j]=0;	
			}
		}
		t--;
		j++;
	}
	
	for(i=0;i<temp;i++){
		if(result[i]==0){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}
}
