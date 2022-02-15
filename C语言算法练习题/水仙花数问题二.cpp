#include<stdio.h>
int main(){
	int a[3],j,temp;
	for(int i=100;i<=999;i++){
		 j=0;
		 temp=i;
		while(j<3){
		a[j]=temp%10;
		temp=temp/10;	
		j++;
		}
		if(i==a[0]*a[0]*a[0]+a[1]*a[1]*a[1]+a[2]*a[2]*a[2])
		printf("%d\n",i);
	}
	return 0;
} 
