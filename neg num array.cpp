#include<stdio.h>
int main(){
	int i,a;
	printf("Enter the array size:");
	scanf("%d",&a);
	float arr[a];
	for(i=0;i<a;i++){
		printf("enter the %d  element:",i+1);
		scanf("%f",&arr[i]);
	}
	printf("the neg num of the array:\n");
	for(i=0;i<a;i++){
		if(arr[i]<0){
			printf("%.2f\n",arr[i]);
		}
	}
	return 0;
}