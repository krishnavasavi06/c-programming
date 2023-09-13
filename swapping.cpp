#include<stdio.h>
int main(){
	int n1,n2,temp;
	printf("enter the first num:");
	scanf("%d",&n1);
	printf("enter the sec num:");
	scanf("%d",&n2);
	printf("before swapping :%d %d\n",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("after swapping :%d %d",n1,n2);
	return 0;
}