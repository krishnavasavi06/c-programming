#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,23};
	int numelements=sizeof(arr)/sizeof(arr[0]);
	printf("the size of array:%d\n",numelements);
	return 0;
}