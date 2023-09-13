#include<stdio.h>
int findHCF(int a, int b){
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	return a;
}
int main(){
	int n1,n2;
	printf("enter the two numbers:");
	scanf("%d %d",&n1,&n2);
	int hcf=findHCF(n1,n2);
	printf("hcf of two %d and  %d is:%d",n1,n2,hcf);
	return 0;
}