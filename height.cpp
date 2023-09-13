#include<stdio.h>
int main(){
	float height;
	printf("enter the height of person(in cm):");
	scanf("%f",&height);
	if(height<150){
		printf("dwarf person.");
	}
	else if(height>=150&&height<=175){
		printf("average person.");
	}
	else{
		printf("taller person.");
	}
	return 0;
}