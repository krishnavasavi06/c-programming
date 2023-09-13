#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool areAnagrams(char*str1,char*str2){
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len1!=len2){
		return false;
	}
	char a[len1+1];
	char b[len2+1];
	strcpy(a,str1);
	strcpy(b,str2);
	for(int i=0;i<len1-1;i++){
		for(int j=0;j<len1-i-1;j++){
			if(a[j]>a[j+1]){
				char temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			if(b[j]>b[j+1]){
				char temp =b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	if (strcmp(a,b)==0){
		return true;
	}else{
		return false;
	}
}
int main(){
	char str1[100],str2[100];
	printf("enter the first string:");
	gets(str1);
	printf("enter the second string:");
	gets(str2);
	if(areAnagrams(str1,str2)){
		printf("strings are anagrams.\n");
	}else{
		printf("strings are not anagrams\n.");
	}
	return 0;
}