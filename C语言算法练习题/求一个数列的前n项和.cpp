#include<stdio.h>
int main(){
	int n,i,temp;
	float a=1,b=2,sum;
	sum=b/a; 
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		sum+=(a+b)/b;
		temp=a;
		a=b;
		b=temp+b;
	}
	printf("%.2f",sum);
	return 0;
} 
