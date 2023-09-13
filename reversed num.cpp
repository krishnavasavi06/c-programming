#include<stdio.h>
int main(){
	int n,r,original,reversed=0;
	printf("enter the num:");
	scanf("%d",&n);
	original=n;
	while(original!=0){
		r=original%10;
		reversed=reversed*10+r;
		original=original/10;
	}
	printf("reversed number:%d",reversed);
	return 0;
}