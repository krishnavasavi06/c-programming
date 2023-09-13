#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	printf("enter the first string:");
	gets(str1);
	printf("enter the second string:");
	gets(str2);
	int result=strcmp(str1,str2);
	if(result==0){
		printf("both strings are equal.");
	}
	else if(result<0){
		printf("string2 is greater");
	}else{
		printf("string1i s greater.");
	}
	return 0;
}