#include<stdio.h>
int main(){
	int n,i;
	long fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0){
		printf("factorial is not possible.error");
	}
	else{
		for(i=1;i<=n;++i){
			fact=fact*i;
		}
		printf("factorial of %d is =%lld",n,fact);
	}
	return 0;
}