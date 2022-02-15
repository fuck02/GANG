#include<stdio.h>
int main(){
	float M,N,c=0,d=0;
	scanf("%f%f",&M,&N);
	c=M;
	M=M/2;
	for(int i=2;i<=N;i++){
		c+=M*2;
		M=M/2;
	}
	printf("%.2f %.2f",M,c);
	return 0;
} 
