#include<stdio.h>
int main(){
	int arr[100],size,pos;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter %d elements:\n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter position of ele to delete (1-%d):",size);
	scanf("%d",&pos);
	if(pos<1||pos>size){
		printf("error position.\n");
	}
	for(int i=pos-1;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
	printf("element del at position %d",pos);
	printf("updated array:\n");
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}