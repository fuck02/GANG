#include<stdio.h>

int main(){
	int max_1(int a,int b);
int mine_1(int a,int b);
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	c=max_1(a,b);
	d=mine_1(a,b);
	printf("c=%d,d=%d\n",c,d);
	return 0;
} 
int max_1(int a,int b){
	int temp1;
	while(b!=0){
		temp1=a%b;
		a=b;
		b=temp1;
	}
	return a;
}
int mine_1(int a,int b){
	int temp4,temp2=a,temp3=b,g;
	while(b!=0){
		temp4=a%b;
		a=b;
		b=temp4;
	}
g=temp2*(temp3)/a;
return g;
}
