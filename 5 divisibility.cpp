#include<stdio.h>
int main(){
   int start,end,count=0,sum=0;
   printf("enter the range: ");
   scanf("%d %d",&start,&end);
   for(int i=start;i<=end;i++){
   	if(i%5==0){
   		count++;
   		sum+=i;
	   }
   }
   printf("num of integers divisible by 5 btwn range %d and %d is %d\n",start,end,count);
   printf("sum of the num divisible by 5 btwn range is %d",sum);
   return 0;
}