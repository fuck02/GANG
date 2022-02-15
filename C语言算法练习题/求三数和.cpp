#include<stdio.h>
int main (){
float i,a,b,c,sum=0,sum1=0,sum2=0,sum3=0;
	scanf("%f%f%f",&a,&b,&c);
	for(float i=1;i<=a;i++)
	 sum1+=i;
	 for(float i=1;i<=b;i++)
	 sum2+=i*i;
	 for(float i=1;i<=c;i++)
	 sum3+=1.0/i;
sum=sum1+sum2+sum3;
	printf("%.2f",sum);
	return 0;
} 
