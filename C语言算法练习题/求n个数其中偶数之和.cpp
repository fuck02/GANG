#include<stdio.h>
int main(){
	int i=0,j=0,sum=0,n,a[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while (j<n){
		if(a[j]%2==0){
			sum=sum+a[j];
		}
		j++;
	}
	printf("%d",sum);
return 0;	
} 
