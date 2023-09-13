#include<stdio.h>
int main(){
	int num,rem,sum=0;
	printf("enter the num:");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
		rem=num%i;
		if(rem==0){
			sum+=i;
		}
	}
	if(sum==num){
		printf("%d is perfect num.\n");
	}
	else{
		printf("%d is not a perfect number.");
	}
	return 0;
}