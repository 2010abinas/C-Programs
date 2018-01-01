#include<stdio.h>
int main(){
	int a[100],n,i,c,position;
	
	printf("Enter no. of elements will be in array:  \n");
	scanf("%d",&n);
	
	printf("enter %d numbers: \n",n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Elements are: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	printf("Enter the element to be removed from the array from the location: \n");
	scanf("%d",&position);
	
	if ( position >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         a[c] = a[c+1];
 
      printf("Resultant array is\n");
 
      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", a[c]);
   }
 
	
	return 0;
}
