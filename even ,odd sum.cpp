#include<stdio.h>
int main(){
	int n,i,odd_sum=0,even_sum=0;
	printf("enter the num:");
	scanf("%d",&n);
    for(i=0;i<=n;i++){
		if(i%2==0){
			even_sum+=i;
		}
		else{
			odd_sum+=i;
		}
	}
  	printf("even sum is %d\n",even_sum);
	printf("odd sum is %d",odd_sum);
	return 0;
}