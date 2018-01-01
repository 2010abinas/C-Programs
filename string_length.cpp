
//Under standing of Pointer--------
//#include<stdio.h>
//int main(){
//	int var =10;
//	int *ip;
//	
//	ip=&var;
//	
//	printf("Address of the variable is: %x \n",&var);
//	printf("Address of the variable stored in the pointer is: %x\n",ip);
//	printf("Pointer variable is: %d\n",*ip);
//	
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	char str[50];
//	printf("Enter any text line: \n");
//	gets(str);
//	printf("Entered string is: \n");
//	puts(str);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	char str[100],ch;
//	int i;
//	i=0;
//	printf("Enter a line: \n");
//	scanf("%s",&str);
//	while(ch!='\n'){
//		ch =getchar();
//		str[i]=ch;
//		i++;
//	}
//	printf("%d \n",i);
//	str[i]='\0';
//	printf("Entered string is: %s\n",str);
//	
//	return 0;
//	
//}

//#include <stdio.h>
// 
//const int MAX = 3;
// 
//int main () {
//
//   int  var[] = {10, 100, 200,300};
//   int i, *ptr[MAX];
// 
//   for ( i = 0; i <= MAX; i++) {
//      ptr[i] = &var[i]; /* assign the address of integer. */
//   }
//   
//   for ( i = 0; i <= MAX; i++) {
//      printf("Value of var[%d] = %x\n", i, ptr[i] );
//   }
//   
//   return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str1[20]="Abinas";
//	char str2[20]=" Patra";
//	char str3[20];
//	
//	strcpy(str3,str2);
//	printf("After copy in string3: %s\n",str3);
//	
//	strcat(str1,str2);
//	printf("After  concatenation: %s\n",str1);
//	
//	int len;
//	len=strlen(str1);
//	printf("Length of string1 is: %d\n",len);
//	
//	return 0;	
//}


























