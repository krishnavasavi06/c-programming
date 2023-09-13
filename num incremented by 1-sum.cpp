#include<stdio.h>
int main(){
	int num,orgnum,digit,newNum=0,sum=0;
	printf("enter the num:\n");
	scanf("%d",&num);
	orgnum=num;
	while(num!=0){
		digit=num%10;
		digit++;
		newNum=newNum*10+digit;
		sum+=digit;
		num/=10;
	}
	printf("original num:%d\n",orgnum);
	printf("Number with digits incremented by 1: %d\n ",newNum);
	printf("sum of digits of new num :%d",sum);
	return 0;
}