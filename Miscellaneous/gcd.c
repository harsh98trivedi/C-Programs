#include<stdio.h>
#include<stdlib.h>

int hcf(int a,int b){
	if(a==0 || b==0){
		return 0;
	}
	else if(a==b){
		return a;
	}
	else if(a>b){
		return hcf(a-b,b);
	}
	return hcf(a,b-a);
}

int main(){
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("HCF of %d and %d is: %d\n",a,b,hcf(a,b));
	return 0;
}
