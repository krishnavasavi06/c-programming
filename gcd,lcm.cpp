#include<stdio.h>
    
	int findGCD(int a,int b){
		if(b==0){
			return a;
		}
		return findGCD(b,a%b);
}
	
	int findLCM(int a,int b){
		return (a*b)/findGCD(a,b);
	}
	int main(){
		int n1,n2;
		printf("enter the num1:");
		scanf("%d",&n1);
		printf("enter the num2:");
		scanf("%d",&n2);
		int gcd=findGCD(n1,n2);
		int lcm=findLCM(n1,n2);
		printf("gcd of %d and %d is:%d\n",n1,n2,gcd);
		printf("lcm of %d and %d is:%d",n1,n2,lcm);
		return 0;
	}