#include<stdio.h>
int main(){
	int num,orgnum,remainder,sum=0;
	printf("enter the num: ");
	scanf("%d",&num);
	orgnum=num;
    while(num!=0){
    	remainder=num%10;
    	sum+=remainder;
    	num/=10;
	}	
	printf("sum of digits of %d =%d",orgnum,sum);
	return 0;
}