#include<stdio.h>
int main(){
	int n1,n2,n3,l;
	printf("enter the numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	l=n1;
	if(n2>l){
		l=n2;
	}
	if(n3>l){
		l=n3;
	}
	printf("the largest num among %d %d %d is %d\n",n1,n2,n3,l);
	
	}
