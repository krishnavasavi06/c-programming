#include<stdio.h>
int main(){
	int a[10][10],b[10][10],sum[10][10],r,c,i,j;
	printf("enter the no of rows:");
	scanf("%d",&r);
	printf("enter the no of columns:");
	scanf("%d",&c);
	printf("enter the first matrix elements:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix elements:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("sum of two matrice:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}