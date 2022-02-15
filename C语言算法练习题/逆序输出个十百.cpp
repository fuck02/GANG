#include<stdio.h>
int main(){
	int n,a[3];
	scanf("%d",&n);
	for(int i=0;i<3;i++){
		a[i]=n%10;
		n/=10;
		printf("%d",a[i]);
		printf(" ");
	}	
} 
