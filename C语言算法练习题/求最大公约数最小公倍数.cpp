#include<stdio.h>
int main(){
int a,b,j=0,A[10],minesum=1,maxsum=1;
scanf("%d%d",&a,&b);
if(a>b)
a=b;
for(int i=2;i<=a;i++){
	if(a%i==0&&b%i==0){
		A[j++]=i;
		a/=i;
		b/=i; 
	}
} 
if(A[0]==0){
	printf("%d\n",maxsum);
	printf("%d\n",minesum*a*b);
}
else{
for(int i=0;i<j;i++){
	minesum*=A[i];
	maxsum*=A[i];
}
printf("%d\n",maxsum);
printf("%d\n",minesum*a*b);
} 
return 0;
}
