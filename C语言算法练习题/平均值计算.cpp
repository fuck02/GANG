#include<stdio.h>
int main (){
	int a[10],i=0,s,j=0,sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	sum=sum/10;
	for(int s=0;s<10;s++){
		if(a[s]>sum)
		j++;
	}
	printf("%d",j);
	return 0;
} 
