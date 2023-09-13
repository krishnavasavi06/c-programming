#include<stdio.h>
int main(){
	int num,org,r,result=0;
	printf("enter the num:");
	scanf("%d",&num);
	org=num;
	while(org!=0)
	{
     r=org%10;
   	result+=r*r*r;
	 org=org/10;
   }
 if(result==num){
 	printf("armstrong number.");
 }
 else{
 	printf("not an armstrong num.");
 }
 return 0;
}