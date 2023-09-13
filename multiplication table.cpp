#include<stdio.h>
int main(){
	int n,i;
	printf("enter the num for multplication:");
	scanf("%d",&n);
	printf("multiplication table for %d:\n",n);
	for(i=0;i<=10;i++){
		printf("%d*%d=%d\n",n,i,n*i);
	} 
	return 0;
}