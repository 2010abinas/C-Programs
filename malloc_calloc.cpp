#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *mem_allocation;
	mem_allocation = malloc(20 * sizeof(char));
	
	if(mem_allocation==null){
		printf("Nothing is present in dynamic memory.")
	}else{
		strcpy(mem_allocation,"Abinas Patra");
	}
	
	printf("The string in the dynamic location is: %s\n",mem_allocation);
	
	
	return 0;
}
