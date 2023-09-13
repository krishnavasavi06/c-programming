#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("enter the num:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("prime num.\n");
	}
	else{
		printf("not a prime.");
	}
	return 0;
}