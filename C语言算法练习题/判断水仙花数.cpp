#include<stdio.h>
int main(){
	int a,i=0,b[3],temp,sum;
	scanf("%d",&a);
	temp=a;
	while(a>0){
		b[i]=a%10;
		a=a/10;
		i++;
	}
	if(i!=3)
	printf("0");

	sum=b[0]*b[0]*b[0]+b[1]*b[1]*b[1]+b[2]*b[2]*b[2]; 
if(temp==sum){
	printf("1");
}
else 
printf("0");
return 0;
} 
