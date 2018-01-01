#include<stdio.h>
int main(){
	int n,arr[100],i,location,search,index;
	
	printf("Enter no numbers to be pushed in the array: \n");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Elements are: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter searched element: \n");
	scanf("%d", &search);
	
	if(n%2==0){
		location = n/2;
		if(arr[location-1]==search){
			printf("%d is present in %d location",search,location);
		}else if(arr[location-1]>search){
			index=0;
			for(i=index;i<location-2;i++){
				if(arr[i]==search){
					printf("%d is present in %d location",search,i+1);
				}
			}
		}else if(arr[location-1]<search){
			index=location;
			for(i=index;i<n;i++){
				if(arr[i]==search){
					printf("%d is present in %d location",search,i+1);
				}	
			}
		}else{
			printf("%d is not present in the array.",search);
		}	
	}else{
		location = n/2;
		if(arr[location+1]==search){
			printf("%d is present in %d location",search,location);
		}else if(arr[location+1]>search){
			index=0;
			for(i=index;i<location-1;i++){
				if(arr[i]==search){
					printf("%d is present in %d location",search,i+1);
				}
			}
		}else if(arr[location+1]<search){
			index=location+1;
			for(i=index;i<n;i++){
				if(arr[i]==search){
					printf("%d is present in %d location",search,i+1);
				}	
			}
		}else{
			printf("%d is not present in the array.",search);
		}
	}	
	return 0;
}
