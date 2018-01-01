#include<stdio.h>
int main()
{
  int number,binary=0,base=1,reminder,temp;
  
  printf("Enter any number: \n");
  scanf("%d",&number);
  
  temp = number;
  while(number>0){
  	reminder = number%2;
  	
  	binary = binary+reminder*base;
  	number =number/2;
  	base = base*10;
  }
  
  printf("The binary conversion of %d is: %d \n", temp,binary);
  
  return 0;
}
