#include<stdio.h>
int main(){
	int a[10],n=0,temp;
	for(int i=0;i<9;i++)
	scanf("%d",&a[i]);
	scanf("%d",&n);
	for(int i=0;i<9;i++){
		if(n<a[i]){
		   temp=a[i];
			a[i]=n;
			n=temp;
		}
	} 
	a[9]=n;
	for(int i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	return 0;
} 
